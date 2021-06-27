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

#include "getsavingsplanspurchaserecommendationresponse.h"
#include "getsavingsplanspurchaserecommendationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansPurchaseRecommendationResponse
 * \brief The GetSavingsPlansPurchaseRecommendationResponse class provides an interace for CostExplorer GetSavingsPlansPurchaseRecommendation responses.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  The Cost Explorer API enables you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for Amazon DynamoDB database tables in your production environment.
 * 
 *  </p
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Cost Explorer API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  <code>https://ce.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> </ul>
 * 
 *  For information about costs associated with the Cost Explorer API, see <a
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
 *
 * \sa CostExplorerClient::getSavingsPlansPurchaseRecommendation
 */

/*!
 * Constructs a GetSavingsPlansPurchaseRecommendationResponse object for \a reply to \a request, with parent \a parent.
 */
GetSavingsPlansPurchaseRecommendationResponse::GetSavingsPlansPurchaseRecommendationResponse(
        const GetSavingsPlansPurchaseRecommendationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetSavingsPlansPurchaseRecommendationResponsePrivate(this), parent)
{
    setRequest(new GetSavingsPlansPurchaseRecommendationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSavingsPlansPurchaseRecommendationRequest * GetSavingsPlansPurchaseRecommendationResponse::request() const
{
    return static_cast<const GetSavingsPlansPurchaseRecommendationRequest *>(CostExplorerResponse::request());
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetSavingsPlansPurchaseRecommendation \a response.
 */
void GetSavingsPlansPurchaseRecommendationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSavingsPlansPurchaseRecommendationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetSavingsPlansPurchaseRecommendationResponsePrivate
 * \brief The GetSavingsPlansPurchaseRecommendationResponsePrivate class provides private implementation for GetSavingsPlansPurchaseRecommendationResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetSavingsPlansPurchaseRecommendationResponsePrivate object with public implementation \a q.
 */
GetSavingsPlansPurchaseRecommendationResponsePrivate::GetSavingsPlansPurchaseRecommendationResponsePrivate(
    GetSavingsPlansPurchaseRecommendationResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetSavingsPlansPurchaseRecommendation response element from \a xml.
 */
void GetSavingsPlansPurchaseRecommendationResponsePrivate::parseGetSavingsPlansPurchaseRecommendationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSavingsPlansPurchaseRecommendationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
