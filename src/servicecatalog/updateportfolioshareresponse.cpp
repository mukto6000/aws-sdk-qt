// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateportfolioshareresponse.h"
#include "updateportfolioshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdatePortfolioShareResponse
 * \brief The UpdatePortfolioShareResponse class provides an interace for ServiceCatalog UpdatePortfolioShare responses.
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
 * \sa ServiceCatalogClient::updatePortfolioShare
 */

/*!
 * Constructs a UpdatePortfolioShareResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePortfolioShareResponse::UpdatePortfolioShareResponse(
        const UpdatePortfolioShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdatePortfolioShareResponsePrivate(this), parent)
{
    setRequest(new UpdatePortfolioShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePortfolioShareRequest * UpdatePortfolioShareResponse::request() const
{
    Q_D(const UpdatePortfolioShareResponse);
    return static_cast<const UpdatePortfolioShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog UpdatePortfolioShare \a response.
 */
void UpdatePortfolioShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePortfolioShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::UpdatePortfolioShareResponsePrivate
 * \brief The UpdatePortfolioShareResponsePrivate class provides private implementation for UpdatePortfolioShareResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdatePortfolioShareResponsePrivate object with public implementation \a q.
 */
UpdatePortfolioShareResponsePrivate::UpdatePortfolioShareResponsePrivate(
    UpdatePortfolioShareResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog UpdatePortfolioShare response element from \a xml.
 */
void UpdatePortfolioShareResponsePrivate::parseUpdatePortfolioShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePortfolioShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
