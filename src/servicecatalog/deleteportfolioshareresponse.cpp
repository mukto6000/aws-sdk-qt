// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteportfolioshareresponse.h"
#include "deleteportfolioshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioShareResponse
 * \brief The DeletePortfolioShareResponse class provides an interace for ServiceCatalog DeletePortfolioShare responses.
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
 * \sa ServiceCatalogClient::deletePortfolioShare
 */

/*!
 * Constructs a DeletePortfolioShareResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePortfolioShareResponse::DeletePortfolioShareResponse(
        const DeletePortfolioShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeletePortfolioShareResponsePrivate(this), parent)
{
    setRequest(new DeletePortfolioShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePortfolioShareRequest * DeletePortfolioShareResponse::request() const
{
    Q_D(const DeletePortfolioShareResponse);
    return static_cast<const DeletePortfolioShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DeletePortfolioShare \a response.
 */
void DeletePortfolioShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePortfolioShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioShareResponsePrivate
 * \brief The DeletePortfolioShareResponsePrivate class provides private implementation for DeletePortfolioShareResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeletePortfolioShareResponsePrivate object with public implementation \a q.
 */
DeletePortfolioShareResponsePrivate::DeletePortfolioShareResponsePrivate(
    DeletePortfolioShareResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DeletePortfolioShare response element from \a xml.
 */
void DeletePortfolioShareResponsePrivate::parseDeletePortfolioShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePortfolioShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
