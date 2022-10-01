// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "timestreamqueryrequest.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::TimestreamQueryRequest
 * \brief The TimestreamQueryRequest class provides an interface for TimestreamQuery requests.
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * \enum TimestreamQueryRequest::Action
 *
 * This enum describes the actions that can be performed as TimestreamQuery
 * requests.
 *
 * \value CancelQueryAction TimestreamQuery CancelQuery action.
 * \value CreateScheduledQueryAction TimestreamQuery CreateScheduledQuery action.
 * \value DeleteScheduledQueryAction TimestreamQuery DeleteScheduledQuery action.
 * \value DescribeEndpointsAction TimestreamQuery DescribeEndpoints action.
 * \value DescribeScheduledQueryAction TimestreamQuery DescribeScheduledQuery action.
 * \value ExecuteScheduledQueryAction TimestreamQuery ExecuteScheduledQuery action.
 * \value ListScheduledQueriesAction TimestreamQuery ListScheduledQueries action.
 * \value ListTagsForResourceAction TimestreamQuery ListTagsForResource action.
 * \value PrepareQueryAction TimestreamQuery PrepareQuery action.
 * \value QueryAction TimestreamQuery Query action.
 * \value TagResourceAction TimestreamQuery TagResource action.
 * \value UntagResourceAction TimestreamQuery UntagResource action.
 * \value UpdateScheduledQueryAction TimestreamQuery UpdateScheduledQuery action.
 */

/*!
 * Constructs a TimestreamQueryRequest object for TimestreamQuery \a action.
 */
TimestreamQueryRequest::TimestreamQueryRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new TimestreamQueryRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
TimestreamQueryRequest::TimestreamQueryRequest(const TimestreamQueryRequest &other)
    : QtAws::Core::AwsAbstractRequest(new TimestreamQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the TimestreamQueryRequest object to be equal to \a other.
 */
TimestreamQueryRequest& TimestreamQueryRequest::operator=(const TimestreamQueryRequest &other)
{
    Q_D(TimestreamQueryRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa TimestreamQueryRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TimestreamQueryRequestPrivate.
 */
TimestreamQueryRequest::TimestreamQueryRequest(TimestreamQueryRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the TimestreamQuery action to be performed by this request.
 */
TimestreamQueryRequest::Action TimestreamQueryRequest::action() const
{
    Q_D(const TimestreamQueryRequest);
    return d->action;
}

/*!
 * Returns the name of the TimestreamQuery action to be performed by this request.
 */
QString TimestreamQueryRequest::actionString() const
{
    return TimestreamQueryRequestPrivate::toString(action());
}

/*!
 * Returns the TimestreamQuery API version implemented by this request.
 */
QString TimestreamQueryRequest::apiVersion() const
{
    Q_D(const TimestreamQueryRequest);
    return d->apiVersion;
}

/*!
 * Sets the TimestreamQuery action to be performed by this request to \a action.
 */
void TimestreamQueryRequest::setAction(const Action action)
{
    Q_D(TimestreamQueryRequest);
    d->action = action;
}

/*!
 * Sets the TimestreamQuery API version to include in this request to \a version.
 */
void TimestreamQueryRequest::setApiVersion(const QString &version)
{
    Q_D(TimestreamQueryRequest);
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
bool TimestreamQueryRequest::operator==(const TimestreamQueryRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid TimestreamQuery queue name.
 *
 * @par From TimestreamQuery FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid TimestreamQuery queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool TimestreamQueryRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int TimestreamQueryRequest::clearParameter(const QString &name)
{
    Q_D(TimestreamQueryRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void TimestreamQueryRequest::clearParameters()
{
    Q_D(TimestreamQueryRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant TimestreamQueryRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const TimestreamQueryRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &TimestreamQueryRequest::parameters() const
{
    Q_D(const TimestreamQueryRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void TimestreamQueryRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(TimestreamQueryRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void TimestreamQueryRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(TimestreamQueryRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the TimestreamQuery request using the given
 * \a endpoint.
 *
 * This TimestreamQuery implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest TimestreamQueryRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const TimestreamQueryRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::TimestreamQuery::TimestreamQueryRequestPrivate
 * \brief The TimestreamQueryRequestPrivate class provides private implementation for TimestreamQueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a TimestreamQueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
TimestreamQueryRequestPrivate::TimestreamQueryRequestPrivate(const TimestreamQueryRequest::Action action, TimestreamQueryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-11-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the TimestreamQueryRequest class's copy constructor.
 */
TimestreamQueryRequestPrivate::TimestreamQueryRequestPrivate(const TimestreamQueryRequestPrivate &other,
                                     TimestreamQueryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts TimestreamQueryRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the TimestreamQuery service's Action
 * query parameters.
 */
QString TimestreamQueryRequestPrivate::toString(const TimestreamQueryRequest::Action &action)
{
    #define ActionToString(action) \
        case TimestreamQueryRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelQuery);
        ActionToString(CreateScheduledQuery);
        ActionToString(DeleteScheduledQuery);
        ActionToString(DescribeEndpoints);
        ActionToString(DescribeScheduledQuery);
        ActionToString(ExecuteScheduledQuery);
        ActionToString(ListScheduledQueries);
        ActionToString(ListTagsForResource);
        ActionToString(PrepareQuery);
        ActionToString(Query);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateScheduledQuery);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace TimestreamQuery
} // namespace QtAws
