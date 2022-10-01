// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchproductsasadminresponse.h"
#include "searchproductsasadminresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::SearchProductsAsAdminResponse
 * \brief The SearchProductsAsAdminResponse class provides an interace for ServiceCatalog SearchProductsAsAdmin responses.
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
 * \sa ServiceCatalogClient::searchProductsAsAdmin
 */

/*!
 * Constructs a SearchProductsAsAdminResponse object for \a reply to \a request, with parent \a parent.
 */
SearchProductsAsAdminResponse::SearchProductsAsAdminResponse(
        const SearchProductsAsAdminRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new SearchProductsAsAdminResponsePrivate(this), parent)
{
    setRequest(new SearchProductsAsAdminRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchProductsAsAdminRequest * SearchProductsAsAdminResponse::request() const
{
    Q_D(const SearchProductsAsAdminResponse);
    return static_cast<const SearchProductsAsAdminRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog SearchProductsAsAdmin \a response.
 */
void SearchProductsAsAdminResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchProductsAsAdminResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::SearchProductsAsAdminResponsePrivate
 * \brief The SearchProductsAsAdminResponsePrivate class provides private implementation for SearchProductsAsAdminResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a SearchProductsAsAdminResponsePrivate object with public implementation \a q.
 */
SearchProductsAsAdminResponsePrivate::SearchProductsAsAdminResponsePrivate(
    SearchProductsAsAdminResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog SearchProductsAsAdmin response element from \a xml.
 */
void SearchProductsAsAdminResponsePrivate::parseSearchProductsAsAdminResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchProductsAsAdminResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
