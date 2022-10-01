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

#include "createcostcategorydefinitionresponse.h"
#include "createcostcategorydefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::CreateCostCategoryDefinitionResponse
 * \brief The CreateCostCategoryDefinitionResponse class provides an interace for CostExplorer CreateCostCategoryDefinition responses.
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
 * \sa CostExplorerClient::createCostCategoryDefinition
 */

/*!
 * Constructs a CreateCostCategoryDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCostCategoryDefinitionResponse::CreateCostCategoryDefinitionResponse(
        const CreateCostCategoryDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new CreateCostCategoryDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateCostCategoryDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCostCategoryDefinitionRequest * CreateCostCategoryDefinitionResponse::request() const
{
    Q_D(const CreateCostCategoryDefinitionResponse);
    return static_cast<const CreateCostCategoryDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer CreateCostCategoryDefinition \a response.
 */
void CreateCostCategoryDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCostCategoryDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::CreateCostCategoryDefinitionResponsePrivate
 * \brief The CreateCostCategoryDefinitionResponsePrivate class provides private implementation for CreateCostCategoryDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a CreateCostCategoryDefinitionResponsePrivate object with public implementation \a q.
 */
CreateCostCategoryDefinitionResponsePrivate::CreateCostCategoryDefinitionResponsePrivate(
    CreateCostCategoryDefinitionResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer CreateCostCategoryDefinition response element from \a xml.
 */
void CreateCostCategoryDefinitionResponsePrivate::parseCreateCostCategoryDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCostCategoryDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CostExplorer
} // namespace QtAws
