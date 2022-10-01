// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "licensemanagerusersubscriptionsrequest.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsRequest
 * \brief The LicenseManagerUserSubscriptionsRequest class provides an interface for LicenseManagerUserSubscriptions requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * \enum LicenseManagerUserSubscriptionsRequest::Action
 *
 * This enum describes the actions that can be performed as LicenseManagerUserSubscriptions
 * requests.
 *
 * \value AssociateUserAction LicenseManagerUserSubscriptions AssociateUser action.
 * \value DeregisterIdentityProviderAction LicenseManagerUserSubscriptions DeregisterIdentityProvider action.
 * \value DisassociateUserAction LicenseManagerUserSubscriptions DisassociateUser action.
 * \value ListIdentityProvidersAction LicenseManagerUserSubscriptions ListIdentityProviders action.
 * \value ListInstancesAction LicenseManagerUserSubscriptions ListInstances action.
 * \value ListProductSubscriptionsAction LicenseManagerUserSubscriptions ListProductSubscriptions action.
 * \value ListUserAssociationsAction LicenseManagerUserSubscriptions ListUserAssociations action.
 * \value RegisterIdentityProviderAction LicenseManagerUserSubscriptions RegisterIdentityProvider action.
 * \value StartProductSubscriptionAction LicenseManagerUserSubscriptions StartProductSubscription action.
 * \value StopProductSubscriptionAction LicenseManagerUserSubscriptions StopProductSubscription action.
 */

/*!
 * Constructs a LicenseManagerUserSubscriptionsRequest object for LicenseManagerUserSubscriptions \a action.
 */
LicenseManagerUserSubscriptionsRequest::LicenseManagerUserSubscriptionsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LicenseManagerUserSubscriptionsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LicenseManagerUserSubscriptionsRequest::LicenseManagerUserSubscriptionsRequest(const LicenseManagerUserSubscriptionsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LicenseManagerUserSubscriptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LicenseManagerUserSubscriptionsRequest object to be equal to \a other.
 */
LicenseManagerUserSubscriptionsRequest& LicenseManagerUserSubscriptionsRequest::operator=(const LicenseManagerUserSubscriptionsRequest &other)
{
    Q_D(LicenseManagerUserSubscriptionsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LicenseManagerUserSubscriptionsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LicenseManagerUserSubscriptionsRequestPrivate.
 */
LicenseManagerUserSubscriptionsRequest::LicenseManagerUserSubscriptionsRequest(LicenseManagerUserSubscriptionsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LicenseManagerUserSubscriptions action to be performed by this request.
 */
LicenseManagerUserSubscriptionsRequest::Action LicenseManagerUserSubscriptionsRequest::action() const
{
    Q_D(const LicenseManagerUserSubscriptionsRequest);
    return d->action;
}

/*!
 * Returns the name of the LicenseManagerUserSubscriptions action to be performed by this request.
 */
QString LicenseManagerUserSubscriptionsRequest::actionString() const
{
    return LicenseManagerUserSubscriptionsRequestPrivate::toString(action());
}

/*!
 * Returns the LicenseManagerUserSubscriptions API version implemented by this request.
 */
QString LicenseManagerUserSubscriptionsRequest::apiVersion() const
{
    Q_D(const LicenseManagerUserSubscriptionsRequest);
    return d->apiVersion;
}

/*!
 * Sets the LicenseManagerUserSubscriptions action to be performed by this request to \a action.
 */
void LicenseManagerUserSubscriptionsRequest::setAction(const Action action)
{
    Q_D(LicenseManagerUserSubscriptionsRequest);
    d->action = action;
}

/*!
 * Sets the LicenseManagerUserSubscriptions API version to include in this request to \a version.
 */
void LicenseManagerUserSubscriptionsRequest::setApiVersion(const QString &version)
{
    Q_D(LicenseManagerUserSubscriptionsRequest);
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
bool LicenseManagerUserSubscriptionsRequest::operator==(const LicenseManagerUserSubscriptionsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LicenseManagerUserSubscriptions queue name.
 *
 * @par From LicenseManagerUserSubscriptions FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LicenseManagerUserSubscriptions queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LicenseManagerUserSubscriptionsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LicenseManagerUserSubscriptionsRequest::clearParameter(const QString &name)
{
    Q_D(LicenseManagerUserSubscriptionsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LicenseManagerUserSubscriptionsRequest::clearParameters()
{
    Q_D(LicenseManagerUserSubscriptionsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LicenseManagerUserSubscriptionsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LicenseManagerUserSubscriptionsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LicenseManagerUserSubscriptionsRequest::parameters() const
{
    Q_D(const LicenseManagerUserSubscriptionsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LicenseManagerUserSubscriptionsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LicenseManagerUserSubscriptionsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LicenseManagerUserSubscriptionsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LicenseManagerUserSubscriptionsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LicenseManagerUserSubscriptions request using the given
 * \a endpoint.
 *
 * This LicenseManagerUserSubscriptions implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LicenseManagerUserSubscriptionsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LicenseManagerUserSubscriptionsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsRequestPrivate
 * \brief The LicenseManagerUserSubscriptionsRequestPrivate class provides private implementation for LicenseManagerUserSubscriptionsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a LicenseManagerUserSubscriptionsRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
LicenseManagerUserSubscriptionsRequestPrivate::LicenseManagerUserSubscriptionsRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action, LicenseManagerUserSubscriptionsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-05-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LicenseManagerUserSubscriptionsRequest class's copy constructor.
 */
LicenseManagerUserSubscriptionsRequestPrivate::LicenseManagerUserSubscriptionsRequestPrivate(const LicenseManagerUserSubscriptionsRequestPrivate &other,
                                     LicenseManagerUserSubscriptionsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LicenseManagerUserSubscriptionsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LicenseManagerUserSubscriptions service's Action
 * query parameters.
 */
QString LicenseManagerUserSubscriptionsRequestPrivate::toString(const LicenseManagerUserSubscriptionsRequest::Action &action)
{
    #define ActionToString(action) \
        case LicenseManagerUserSubscriptionsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateUser);
        ActionToString(DeregisterIdentityProvider);
        ActionToString(DisassociateUser);
        ActionToString(ListIdentityProviders);
        ActionToString(ListInstances);
        ActionToString(ListProductSubscriptions);
        ActionToString(ListUserAssociations);
        ActionToString(RegisterIdentityProvider);
        ActionToString(StartProductSubscription);
        ActionToString(StopProductSubscription);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
