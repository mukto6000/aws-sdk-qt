// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeportfoliosharestatusresponse.h"
#include "describeportfoliosharestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioShareStatusResponse
 * \brief The DescribePortfolioShareStatusResponse class provides an interace for ServiceCatalog DescribePortfolioShareStatus responses.
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
 * \sa ServiceCatalogClient::describePortfolioShareStatus
 */

/*!
 * Constructs a DescribePortfolioShareStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePortfolioShareStatusResponse::DescribePortfolioShareStatusResponse(
        const DescribePortfolioShareStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribePortfolioShareStatusResponsePrivate(this), parent)
{
    setRequest(new DescribePortfolioShareStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePortfolioShareStatusRequest * DescribePortfolioShareStatusResponse::request() const
{
    Q_D(const DescribePortfolioShareStatusResponse);
    return static_cast<const DescribePortfolioShareStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribePortfolioShareStatus \a response.
 */
void DescribePortfolioShareStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePortfolioShareStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioShareStatusResponsePrivate
 * \brief The DescribePortfolioShareStatusResponsePrivate class provides private implementation for DescribePortfolioShareStatusResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribePortfolioShareStatusResponsePrivate object with public implementation \a q.
 */
DescribePortfolioShareStatusResponsePrivate::DescribePortfolioShareStatusResponsePrivate(
    DescribePortfolioShareStatusResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribePortfolioShareStatus response element from \a xml.
 */
void DescribePortfolioShareStatusResponsePrivate::parseDescribePortfolioShareStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePortfolioShareStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
