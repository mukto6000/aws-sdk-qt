// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeportfolioresponse.h"
#include "describeportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioResponse
 * \brief The DescribePortfolioResponse class provides an interace for ServiceCatalog DescribePortfolio responses.
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
 * \sa ServiceCatalogClient::describePortfolio
 */

/*!
 * Constructs a DescribePortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePortfolioResponse::DescribePortfolioResponse(
        const DescribePortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribePortfolioResponsePrivate(this), parent)
{
    setRequest(new DescribePortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePortfolioRequest * DescribePortfolioResponse::request() const
{
    Q_D(const DescribePortfolioResponse);
    return static_cast<const DescribePortfolioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribePortfolio \a response.
 */
void DescribePortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioResponsePrivate
 * \brief The DescribePortfolioResponsePrivate class provides private implementation for DescribePortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribePortfolioResponsePrivate object with public implementation \a q.
 */
DescribePortfolioResponsePrivate::DescribePortfolioResponsePrivate(
    DescribePortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribePortfolio response element from \a xml.
 */
void DescribePortfolioResponsePrivate::parseDescribePortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
