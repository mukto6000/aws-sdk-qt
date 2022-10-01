// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "personalizeeventsrequest.h"
#include "personalizeeventsrequest_p.h"

namespace QtAws {
namespace PersonalizeEvents {

/*!
 * \class QtAws::PersonalizeEvents::PersonalizeEventsRequest
 * \brief The PersonalizeEventsRequest class provides an interface for PersonalizeEvents requests.
 *
 * \inmodule QtAwsPersonalizeEvents
 */

/*!
 * \enum PersonalizeEventsRequest::Action
 *
 * This enum describes the actions that can be performed as PersonalizeEvents
 * requests.
 *
 * \value PutEventsAction PersonalizeEvents PutEvents action.
 * \value PutItemsAction PersonalizeEvents PutItems action.
 * \value PutUsersAction PersonalizeEvents PutUsers action.
 */

/*!
 * Constructs a PersonalizeEventsRequest object for PersonalizeEvents \a action.
 */
PersonalizeEventsRequest::PersonalizeEventsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PersonalizeEventsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PersonalizeEventsRequest::PersonalizeEventsRequest(const PersonalizeEventsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PersonalizeEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PersonalizeEventsRequest object to be equal to \a other.
 */
PersonalizeEventsRequest& PersonalizeEventsRequest::operator=(const PersonalizeEventsRequest &other)
{
    Q_D(PersonalizeEventsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PersonalizeEventsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PersonalizeEventsRequestPrivate.
 */
PersonalizeEventsRequest::PersonalizeEventsRequest(PersonalizeEventsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the PersonalizeEvents action to be performed by this request.
 */
PersonalizeEventsRequest::Action PersonalizeEventsRequest::action() const
{
    Q_D(const PersonalizeEventsRequest);
    return d->action;
}

/*!
 * Returns the name of the PersonalizeEvents action to be performed by this request.
 */
QString PersonalizeEventsRequest::actionString() const
{
    return PersonalizeEventsRequestPrivate::toString(action());
}

/*!
 * Returns the PersonalizeEvents API version implemented by this request.
 */
QString PersonalizeEventsRequest::apiVersion() const
{
    Q_D(const PersonalizeEventsRequest);
    return d->apiVersion;
}

/*!
 * Sets the PersonalizeEvents action to be performed by this request to \a action.
 */
void PersonalizeEventsRequest::setAction(const Action action)
{
    Q_D(PersonalizeEventsRequest);
    d->action = action;
}

/*!
 * Sets the PersonalizeEvents API version to include in this request to \a version.
 */
void PersonalizeEventsRequest::setApiVersion(const QString &version)
{
    Q_D(PersonalizeEventsRequest);
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
bool PersonalizeEventsRequest::operator==(const PersonalizeEventsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid PersonalizeEvents queue name.
 *
 * @par From PersonalizeEvents FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid PersonalizeEvents queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PersonalizeEventsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PersonalizeEventsRequest::clearParameter(const QString &name)
{
    Q_D(PersonalizeEventsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PersonalizeEventsRequest::clearParameters()
{
    Q_D(PersonalizeEventsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PersonalizeEventsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PersonalizeEventsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PersonalizeEventsRequest::parameters() const
{
    Q_D(const PersonalizeEventsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PersonalizeEventsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PersonalizeEventsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PersonalizeEventsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PersonalizeEventsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the PersonalizeEvents request using the given
 * \a endpoint.
 *
 * This PersonalizeEvents implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PersonalizeEventsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PersonalizeEventsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::PersonalizeEvents::PersonalizeEventsRequestPrivate
 * \brief The PersonalizeEventsRequestPrivate class provides private implementation for PersonalizeEventsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalizeEvents
 */

/*!
 * Constructs a PersonalizeEventsRequestPrivate object for PersonalizeEvents \a action,
 * with public implementation \a q.
 */
PersonalizeEventsRequestPrivate::PersonalizeEventsRequestPrivate(const PersonalizeEventsRequest::Action action, PersonalizeEventsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-03-22"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PersonalizeEventsRequest class's copy constructor.
 */
PersonalizeEventsRequestPrivate::PersonalizeEventsRequestPrivate(const PersonalizeEventsRequestPrivate &other,
                                     PersonalizeEventsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PersonalizeEventsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the PersonalizeEvents service's Action
 * query parameters.
 */
QString PersonalizeEventsRequestPrivate::toString(const PersonalizeEventsRequest::Action &action)
{
    #define ActionToString(action) \
        case PersonalizeEventsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(PutEvents);
        ActionToString(PutItems);
        ActionToString(PutUsers);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace PersonalizeEvents
} // namespace QtAws
