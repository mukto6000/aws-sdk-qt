// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssooidcrequest.h"
#include "ssooidcrequest_p.h"

namespace QtAws {
namespace SsoOidc {

/*!
 * \class QtAws::SsoOidc::SsoOidcRequest
 * \brief The SsoOidcRequest class provides an interface for SsoOidc requests.
 *
 * \inmodule QtAwsSsoOidc
 */

/*!
 * \enum SsoOidcRequest::Action
 *
 * This enum describes the actions that can be performed as SsoOidc
 * requests.
 *
 * \value CreateTokenAction SsoOidc CreateToken action.
 * \value RegisterClientAction SsoOidc RegisterClient action.
 * \value StartDeviceAuthorizationAction SsoOidc StartDeviceAuthorization action.
 */

/*!
 * Constructs a SsoOidcRequest object for SsoOidc \a action.
 */
SsoOidcRequest::SsoOidcRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SsoOidcRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SsoOidcRequest::SsoOidcRequest(const SsoOidcRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SsoOidcRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SsoOidcRequest object to be equal to \a other.
 */
SsoOidcRequest& SsoOidcRequest::operator=(const SsoOidcRequest &other)
{
    Q_D(SsoOidcRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SsoOidcRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsoOidcRequestPrivate.
 */
SsoOidcRequest::SsoOidcRequest(SsoOidcRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SsoOidc action to be performed by this request.
 */
SsoOidcRequest::Action SsoOidcRequest::action() const
{
    Q_D(const SsoOidcRequest);
    return d->action;
}

/*!
 * Returns the name of the SsoOidc action to be performed by this request.
 */
QString SsoOidcRequest::actionString() const
{
    return SsoOidcRequestPrivate::toString(action());
}

/*!
 * Returns the SsoOidc API version implemented by this request.
 */
QString SsoOidcRequest::apiVersion() const
{
    Q_D(const SsoOidcRequest);
    return d->apiVersion;
}

/*!
 * Sets the SsoOidc action to be performed by this request to \a action.
 */
void SsoOidcRequest::setAction(const Action action)
{
    Q_D(SsoOidcRequest);
    d->action = action;
}

/*!
 * Sets the SsoOidc API version to include in this request to \a version.
 */
void SsoOidcRequest::setApiVersion(const QString &version)
{
    Q_D(SsoOidcRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool SsoOidcRequest::operator==(const SsoOidcRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SsoOidc queue name.
 *
 * @par From SsoOidc FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SsoOidc queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SsoOidcRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SsoOidcRequest::clearParameter(const QString &name)
{
    Q_D(SsoOidcRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SsoOidcRequest::clearParameters()
{
    Q_D(SsoOidcRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SsoOidcRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SsoOidcRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SsoOidcRequest::parameters() const
{
    Q_D(const SsoOidcRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SsoOidcRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SsoOidcRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SsoOidcRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SsoOidcRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SsoOidc request using the given
 * \a endpoint.
 *
 * This SsoOidc implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SsoOidcRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SsoOidcRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SsoOidc::SsoOidcRequestPrivate
 * \brief The SsoOidcRequestPrivate class provides private implementation for SsoOidcRequest.
 * \internal
 *
 * \inmodule QtAwsSsoOidc
 */

/*!
 * Constructs a SsoOidcRequestPrivate object for SsoOidc \a action,
 * with public implementation \a q.
 */
SsoOidcRequestPrivate::SsoOidcRequestPrivate(const SsoOidcRequest::Action action, SsoOidcRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-06-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SsoOidcRequest class's copy constructor.
 */
SsoOidcRequestPrivate::SsoOidcRequestPrivate(const SsoOidcRequestPrivate &other,
                                     SsoOidcRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SsoOidcRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SsoOidc service's Action
 * query parameters.
 */
QString SsoOidcRequestPrivate::toString(const SsoOidcRequest::Action &action)
{
    #define ActionToString(action) \
        case SsoOidcRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateToken);
        ActionToString(RegisterClient);
        ActionToString(StartDeviceAuthorization);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SsoOidc
} // namespace QtAws
