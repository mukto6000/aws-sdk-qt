// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listacceptedportfoliosharesresponse.h"
#include "listacceptedportfoliosharesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListAcceptedPortfolioSharesResponse
 * \brief The ListAcceptedPortfolioSharesResponse class provides an interace for ServiceCatalog ListAcceptedPortfolioShares responses.
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
 * \sa ServiceCatalogClient::listAcceptedPortfolioShares
 */

/*!
 * Constructs a ListAcceptedPortfolioSharesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAcceptedPortfolioSharesResponse::ListAcceptedPortfolioSharesResponse(
        const ListAcceptedPortfolioSharesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListAcceptedPortfolioSharesResponsePrivate(this), parent)
{
    setRequest(new ListAcceptedPortfolioSharesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAcceptedPortfolioSharesRequest * ListAcceptedPortfolioSharesResponse::request() const
{
    Q_D(const ListAcceptedPortfolioSharesResponse);
    return static_cast<const ListAcceptedPortfolioSharesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListAcceptedPortfolioShares \a response.
 */
void ListAcceptedPortfolioSharesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAcceptedPortfolioSharesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListAcceptedPortfolioSharesResponsePrivate
 * \brief The ListAcceptedPortfolioSharesResponsePrivate class provides private implementation for ListAcceptedPortfolioSharesResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListAcceptedPortfolioSharesResponsePrivate object with public implementation \a q.
 */
ListAcceptedPortfolioSharesResponsePrivate::ListAcceptedPortfolioSharesResponsePrivate(
    ListAcceptedPortfolioSharesResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListAcceptedPortfolioShares response element from \a xml.
 */
void ListAcceptedPortfolioSharesResponsePrivate::parseListAcceptedPortfolioSharesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAcceptedPortfolioSharesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
