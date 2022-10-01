// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprovisionedproductplansresponse.h"
#include "listprovisionedproductplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListProvisionedProductPlansResponse
 * \brief The ListProvisionedProductPlansResponse class provides an interace for ServiceCatalog ListProvisionedProductPlans responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
 *
 * \sa ServiceCatalogClient::listProvisionedProductPlans
 */

/*!
 * Constructs a ListProvisionedProductPlansResponse object for \a reply to \a request, with parent \a parent.
 */
ListProvisionedProductPlansResponse::ListProvisionedProductPlansResponse(
        const ListProvisionedProductPlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListProvisionedProductPlansResponsePrivate(this), parent)
{
    setRequest(new ListProvisionedProductPlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProvisionedProductPlansRequest * ListProvisionedProductPlansResponse::request() const
{
    Q_D(const ListProvisionedProductPlansResponse);
    return static_cast<const ListProvisionedProductPlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListProvisionedProductPlans \a response.
 */
void ListProvisionedProductPlansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProvisionedProductPlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListProvisionedProductPlansResponsePrivate
 * \brief The ListProvisionedProductPlansResponsePrivate class provides private implementation for ListProvisionedProductPlansResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListProvisionedProductPlansResponsePrivate object with public implementation \a q.
 */
ListProvisionedProductPlansResponsePrivate::ListProvisionedProductPlansResponsePrivate(
    ListProvisionedProductPlansResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListProvisionedProductPlans response element from \a xml.
 */
void ListProvisionedProductPlansResponsePrivate::parseListProvisionedProductPlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProvisionedProductPlansResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
