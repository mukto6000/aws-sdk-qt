// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "budgetsrequest.h"
#include "budgetsrequest_p.h"

namespace QtAws {
namespace Budgets {

/*!
 * \class QtAws::Budgets::BudgetsRequest
 * \brief The BudgetsRequest class provides an interface for Budgets requests.
 *
 * \inmodule QtAwsBudgets
 */

/*!
 * \enum BudgetsRequest::Action
 *
 * This enum describes the actions that can be performed as Budgets
 * requests.
 *
 * \value CreateBudgetAction Budgets CreateBudget action.
 * \value CreateBudgetActionAction Budgets CreateBudgetAction action.
 * \value CreateNotificationAction Budgets CreateNotification action.
 * \value CreateSubscriberAction Budgets CreateSubscriber action.
 * \value DeleteBudgetAction Budgets DeleteBudget action.
 * \value DeleteBudgetActionAction Budgets DeleteBudgetAction action.
 * \value DeleteNotificationAction Budgets DeleteNotification action.
 * \value DeleteSubscriberAction Budgets DeleteSubscriber action.
 * \value DescribeBudgetAction Budgets DescribeBudget action.
 * \value DescribeBudgetActionAction Budgets DescribeBudgetAction action.
 * \value DescribeBudgetActionHistoriesAction Budgets DescribeBudgetActionHistories action.
 * \value DescribeBudgetActionsForAccountAction Budgets DescribeBudgetActionsForAccount action.
 * \value DescribeBudgetActionsForBudgetAction Budgets DescribeBudgetActionsForBudget action.
 * \value DescribeBudgetNotificationsForAccountAction Budgets DescribeBudgetNotificationsForAccount action.
 * \value DescribeBudgetPerformanceHistoryAction Budgets DescribeBudgetPerformanceHistory action.
 * \value DescribeBudgetsAction Budgets DescribeBudgets action.
 * \value DescribeNotificationsForBudgetAction Budgets DescribeNotificationsForBudget action.
 * \value DescribeSubscribersForNotificationAction Budgets DescribeSubscribersForNotification action.
 * \value ExecuteBudgetActionAction Budgets ExecuteBudgetAction action.
 * \value UpdateBudgetAction Budgets UpdateBudget action.
 * \value UpdateBudgetActionAction Budgets UpdateBudgetAction action.
 * \value UpdateNotificationAction Budgets UpdateNotification action.
 * \value UpdateSubscriberAction Budgets UpdateSubscriber action.
 */

/*!
 * Constructs a BudgetsRequest object for Budgets \a action.
 */
BudgetsRequest::BudgetsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new BudgetsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
BudgetsRequest::BudgetsRequest(const BudgetsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new BudgetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the BudgetsRequest object to be equal to \a other.
 */
BudgetsRequest& BudgetsRequest::operator=(const BudgetsRequest &other)
{
    Q_D(BudgetsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa BudgetsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BudgetsRequestPrivate.
 */
BudgetsRequest::BudgetsRequest(BudgetsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Budgets action to be performed by this request.
 */
BudgetsRequest::Action BudgetsRequest::action() const
{
    Q_D(const BudgetsRequest);
    return d->action;
}

/*!
 * Returns the name of the Budgets action to be performed by this request.
 */
QString BudgetsRequest::actionString() const
{
    return BudgetsRequestPrivate::toString(action());
}

/*!
 * Returns the Budgets API version implemented by this request.
 */
QString BudgetsRequest::apiVersion() const
{
    Q_D(const BudgetsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Budgets action to be performed by this request to \a action.
 */
void BudgetsRequest::setAction(const Action action)
{
    Q_D(BudgetsRequest);
    d->action = action;
}

/*!
 * Sets the Budgets API version to include in this request to \a version.
 */
void BudgetsRequest::setApiVersion(const QString &version)
{
    Q_D(BudgetsRequest);
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
bool BudgetsRequest::operator==(const BudgetsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Budgets queue name.
 *
 * @par From Budgets FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Budgets queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool BudgetsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int BudgetsRequest::clearParameter(const QString &name)
{
    Q_D(BudgetsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void BudgetsRequest::clearParameters()
{
    Q_D(BudgetsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant BudgetsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const BudgetsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &BudgetsRequest::parameters() const
{
    Q_D(const BudgetsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void BudgetsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(BudgetsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void BudgetsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(BudgetsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Budgets request using the given
 * \a endpoint.
 *
 * This Budgets implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest BudgetsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const BudgetsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Budgets::BudgetsRequestPrivate
 * \brief The BudgetsRequestPrivate class provides private implementation for BudgetsRequest.
 * \internal
 *
 * \inmodule QtAwsBudgets
 */

/*!
 * Constructs a BudgetsRequestPrivate object for Budgets \a action,
 * with public implementation \a q.
 */
BudgetsRequestPrivate::BudgetsRequestPrivate(const BudgetsRequest::Action action, BudgetsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-10-20"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the BudgetsRequest class's copy constructor.
 */
BudgetsRequestPrivate::BudgetsRequestPrivate(const BudgetsRequestPrivate &other,
                                     BudgetsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts BudgetsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Budgets service's Action
 * query parameters.
 */
QString BudgetsRequestPrivate::toString(const BudgetsRequest::Action &action)
{
    #define ActionToString(action) \
        case BudgetsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateBudget);
        ActionToString(CreateBudgetAction);
        ActionToString(CreateNotification);
        ActionToString(CreateSubscriber);
        ActionToString(DeleteBudget);
        ActionToString(DeleteBudgetAction);
        ActionToString(DeleteNotification);
        ActionToString(DeleteSubscriber);
        ActionToString(DescribeBudget);
        ActionToString(DescribeBudgetAction);
        ActionToString(DescribeBudgetActionHistories);
        ActionToString(DescribeBudgetActionsForAccount);
        ActionToString(DescribeBudgetActionsForBudget);
        ActionToString(DescribeBudgetNotificationsForAccount);
        ActionToString(DescribeBudgetPerformanceHistory);
        ActionToString(DescribeBudgets);
        ActionToString(DescribeNotificationsForBudget);
        ActionToString(DescribeSubscribersForNotification);
        ActionToString(ExecuteBudgetAction);
        ActionToString(UpdateBudget);
        ActionToString(UpdateBudgetAction);
        ActionToString(UpdateNotification);
        ActionToString(UpdateSubscriber);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Budgets
} // namespace QtAws
