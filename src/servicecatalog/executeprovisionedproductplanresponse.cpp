/*
    Copyright 2013-2018 Paul Colby

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

#include "executeprovisionedproductplanresponse.h"
#include "executeprovisionedproductplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductPlanResponse
 * \brief The ExecuteProvisionedProductPlanResponse class provides an interace for ServiceCatalog ExecuteProvisionedProductPlan responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::executeProvisionedProductPlan
 */

/*!
 * Constructs a ExecuteProvisionedProductPlanResponse object for \a reply to \a request, with parent \a parent.
 */
ExecuteProvisionedProductPlanResponse::ExecuteProvisionedProductPlanResponse(
        const ExecuteProvisionedProductPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ExecuteProvisionedProductPlanResponsePrivate(this), parent)
{
    setRequest(new ExecuteProvisionedProductPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecuteProvisionedProductPlanRequest * ExecuteProvisionedProductPlanResponse::request() const
{
    Q_D(const ExecuteProvisionedProductPlanResponse);
    return static_cast<const ExecuteProvisionedProductPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ExecuteProvisionedProductPlan \a response.
 */
void ExecuteProvisionedProductPlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(ExecuteProvisionedProductPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductPlanResponsePrivate
 * \brief The ExecuteProvisionedProductPlanResponsePrivate class provides private implementation for ExecuteProvisionedProductPlanResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ExecuteProvisionedProductPlanResponsePrivate object with public implementation \a q.
 */
ExecuteProvisionedProductPlanResponsePrivate::ExecuteProvisionedProductPlanResponsePrivate(
    ExecuteProvisionedProductPlanResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ExecuteProvisionedProductPlan response element from \a xml.
 */
void ExecuteProvisionedProductPlanResponsePrivate::parseExecuteProvisionedProductPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteProvisionedProductPlanResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws