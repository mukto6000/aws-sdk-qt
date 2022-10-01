// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcostandusageresponse.h"
#include "getcostandusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetCostAndUsageResponse
 * \brief The GetCostAndUsageResponse class provides an interace for CostExplorer GetCostAndUsage responses.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  You can use the Cost Explorer API to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data. This might include the number of
 *  daily write operations for Amazon DynamoDB database tables in your production environment.
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
 *  For information about the costs that are associated with the Cost Explorer API, see <a
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services Cost Management
 *
 * \sa CostExplorerClient::getCostAndUsage
 */

/*!
 * Constructs a GetCostAndUsageResponse object for \a reply to \a request, with parent \a parent.
 */
GetCostAndUsageResponse::GetCostAndUsageResponse(
        const GetCostAndUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetCostAndUsageResponsePrivate(this), parent)
{
    setRequest(new GetCostAndUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCostAndUsageRequest * GetCostAndUsageResponse::request() const
{
    Q_D(const GetCostAndUsageResponse);
    return static_cast<const GetCostAndUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetCostAndUsage \a response.
 */
void GetCostAndUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCostAndUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetCostAndUsageResponsePrivate
 * \brief The GetCostAndUsageResponsePrivate class provides private implementation for GetCostAndUsageResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetCostAndUsageResponsePrivate object with public implementation \a q.
 */
GetCostAndUsageResponsePrivate::GetCostAndUsageResponsePrivate(
    GetCostAndUsageResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetCostAndUsage response element from \a xml.
 */
void GetCostAndUsageResponsePrivate::parseGetCostAndUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCostAndUsageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
