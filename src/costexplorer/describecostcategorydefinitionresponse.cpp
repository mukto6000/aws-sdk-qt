// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecostcategorydefinitionresponse.h"
#include "describecostcategorydefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::DescribeCostCategoryDefinitionResponse
 * \brief The DescribeCostCategoryDefinitionResponse class provides an interace for CostExplorer DescribeCostCategoryDefinition responses.
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
 * \sa CostExplorerClient::describeCostCategoryDefinition
 */

/*!
 * Constructs a DescribeCostCategoryDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCostCategoryDefinitionResponse::DescribeCostCategoryDefinitionResponse(
        const DescribeCostCategoryDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new DescribeCostCategoryDefinitionResponsePrivate(this), parent)
{
    setRequest(new DescribeCostCategoryDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCostCategoryDefinitionRequest * DescribeCostCategoryDefinitionResponse::request() const
{
    Q_D(const DescribeCostCategoryDefinitionResponse);
    return static_cast<const DescribeCostCategoryDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer DescribeCostCategoryDefinition \a response.
 */
void DescribeCostCategoryDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCostCategoryDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::DescribeCostCategoryDefinitionResponsePrivate
 * \brief The DescribeCostCategoryDefinitionResponsePrivate class provides private implementation for DescribeCostCategoryDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a DescribeCostCategoryDefinitionResponsePrivate object with public implementation \a q.
 */
DescribeCostCategoryDefinitionResponsePrivate::DescribeCostCategoryDefinitionResponsePrivate(
    DescribeCostCategoryDefinitionResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer DescribeCostCategoryDefinition response element from \a xml.
 */
void DescribeCostCategoryDefinitionResponsePrivate::parseDescribeCostCategoryDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCostCategoryDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
