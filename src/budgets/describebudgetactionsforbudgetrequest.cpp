/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describebudgetactionsforbudgetrequest.h"
#include "describebudgetactionsforbudgetrequest_p.h"
#include "describebudgetactionsforbudgetresponse.h"
#include "budgetsrequest_p.h"

namespace QtAws {
namespace Budgets {

/*!
 * \class QtAws::Budgets::DescribeBudgetActionsForBudgetRequest
 * \brief The DescribeBudgetActionsForBudgetRequest class provides an interface for Budgets DescribeBudgetActionsForBudget requests.
 *
 * \inmodule QtAwsBudgets
 *
 *  The AWS Budgets API enables you to use AWS Budgets to plan your service usage, service costs, and instance reservations.
 *  The API reference provides descriptions, syntax, and usage examples for each of the actions and data types for AWS
 *  Budgets.
 * 
 *  </p
 * 
 *  Budgets provide you with a way to see the following
 * 
 *  information> <ul> <li>
 * 
 *  How close your plan is to your budgeted amount or to the free tier
 * 
 *  limit> </li> <li>
 * 
 *  Your usage-to-date, including how much you've used of your Reserved Instances
 * 
 *  (RIs> </li> <li>
 * 
 *  Your current estimated charges from AWS, and how much your predicted usage will accrue in charges by the end of the
 * 
 *  mont> </li> <li>
 * 
 *  How much of your budget has been
 * 
 *  use> </li> </ul>
 * 
 *  AWS updates your budget status several times a day. Budgets track your unblended costs, subscriptions, refunds, and RIs.
 *  You can create the following types of
 * 
 *  budgets> <ul> <li>
 * 
 *  <b>Cost budgets</b> - Plan how much you want to spend on a
 * 
 *  service> </li> <li>
 * 
 *  <b>Usage budgets</b> - Plan how much you want to use one or more
 * 
 *  services> </li> <li>
 * 
 *  <b>RI utilization budgets</b> - Define a utilization threshold, and receive alerts when your RI usage falls below that
 *  threshold. This lets you see if your RIs are unused or
 * 
 *  under-utilized> </li> <li>
 * 
 *  <b>RI coverage budgets</b> - Define a coverage threshold, and receive alerts when the number of your instance hours that
 *  are covered by RIs fall below that threshold. This lets you see how much of your instance usage is covered by a
 * 
 *  reservation> </li> </ul>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The AWS Budgets API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  https://budgets.amazonaws.co> </li> </ul>
 * 
 *  For information about costs that are associated with the AWS Budgets API, see <a
 *  href="https://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
 *
 * \sa BudgetsClient::describeBudgetActionsForBudget
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBudgetActionsForBudgetRequest::DescribeBudgetActionsForBudgetRequest(const DescribeBudgetActionsForBudgetRequest &other)
    : BudgetsRequest(new DescribeBudgetActionsForBudgetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBudgetActionsForBudgetRequest object.
 */
DescribeBudgetActionsForBudgetRequest::DescribeBudgetActionsForBudgetRequest()
    : BudgetsRequest(new DescribeBudgetActionsForBudgetRequestPrivate(BudgetsRequest::DescribeBudgetActionsForBudgetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBudgetActionsForBudgetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBudgetActionsForBudgetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBudgetActionsForBudgetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBudgetActionsForBudgetResponse(*this, reply);
}

/*!
 * \class QtAws::Budgets::DescribeBudgetActionsForBudgetRequestPrivate
 * \brief The DescribeBudgetActionsForBudgetRequestPrivate class provides private implementation for DescribeBudgetActionsForBudgetRequest.
 * \internal
 *
 * \inmodule QtAwsBudgets
 */

/*!
 * Constructs a DescribeBudgetActionsForBudgetRequestPrivate object for Budgets \a action,
 * with public implementation \a q.
 */
DescribeBudgetActionsForBudgetRequestPrivate::DescribeBudgetActionsForBudgetRequestPrivate(
    const BudgetsRequest::Action action, DescribeBudgetActionsForBudgetRequest * const q)
    : BudgetsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBudgetActionsForBudgetRequest
 * class' copy constructor.
 */
DescribeBudgetActionsForBudgetRequestPrivate::DescribeBudgetActionsForBudgetRequestPrivate(
    const DescribeBudgetActionsForBudgetRequestPrivate &other, DescribeBudgetActionsForBudgetRequest * const q)
    : BudgetsRequestPrivate(other, q)
{

}

} // namespace Budgets
} // namespace QtAws