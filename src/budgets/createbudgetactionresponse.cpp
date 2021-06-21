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

#include "createbudgetactionresponse.h"
#include "createbudgetactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/*!
 * \class QtAws::Budgets::CreateBudgetActionResponse
 * \brief The CreateBudgetActionResponse class provides an interace for Budgets CreateBudgetAction responses.
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
 * \sa BudgetsClient::createBudgetAction
 */

/*!
 * Constructs a CreateBudgetActionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBudgetActionResponse::CreateBudgetActionResponse(
        const CreateBudgetActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new CreateBudgetActionResponsePrivate(this), parent)
{
    setRequest(new CreateBudgetActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBudgetActionRequest * CreateBudgetActionResponse::request() const
{
    Q_D(const CreateBudgetActionResponse);
    return static_cast<const CreateBudgetActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Budgets CreateBudgetAction \a response.
 */
void CreateBudgetActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBudgetActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Budgets::CreateBudgetActionResponsePrivate
 * \brief The CreateBudgetActionResponsePrivate class provides private implementation for CreateBudgetActionResponse.
 * \internal
 *
 * \inmodule QtAwsBudgets
 */

/*!
 * Constructs a CreateBudgetActionResponsePrivate object with public implementation \a q.
 */
CreateBudgetActionResponsePrivate::CreateBudgetActionResponsePrivate(
    CreateBudgetActionResponse * const q) : BudgetsResponsePrivate(q)
{

}

/*!
 * Parses a Budgets CreateBudgetAction response element from \a xml.
 */
void CreateBudgetActionResponsePrivate::parseCreateBudgetActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBudgetActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Budgets
} // namespace QtAws