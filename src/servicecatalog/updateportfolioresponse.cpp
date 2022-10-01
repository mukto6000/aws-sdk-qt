// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateportfolioresponse.h"
#include "updateportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdatePortfolioResponse
 * \brief The UpdatePortfolioResponse class provides an interace for ServiceCatalog UpdatePortfolio responses.
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
 * \sa ServiceCatalogClient::updatePortfolio
 */

/*!
 * Constructs a UpdatePortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePortfolioResponse::UpdatePortfolioResponse(
        const UpdatePortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdatePortfolioResponsePrivate(this), parent)
{
    setRequest(new UpdatePortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePortfolioRequest * UpdatePortfolioResponse::request() const
{
    Q_D(const UpdatePortfolioResponse);
    return static_cast<const UpdatePortfolioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog UpdatePortfolio \a response.
 */
void UpdatePortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::UpdatePortfolioResponsePrivate
 * \brief The UpdatePortfolioResponsePrivate class provides private implementation for UpdatePortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdatePortfolioResponsePrivate object with public implementation \a q.
 */
UpdatePortfolioResponsePrivate::UpdatePortfolioResponsePrivate(
    UpdatePortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog UpdatePortfolio response element from \a xml.
 */
void UpdatePortfolioResponsePrivate::parseUpdatePortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
