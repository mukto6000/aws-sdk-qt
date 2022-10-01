// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprovisionedproductresponse.h"
#include "describeprovisionedproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisionedProductResponse
 * \brief The DescribeProvisionedProductResponse class provides an interace for ServiceCatalog DescribeProvisionedProduct responses.
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
 * \sa ServiceCatalogClient::describeProvisionedProduct
 */

/*!
 * Constructs a DescribeProvisionedProductResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProvisionedProductResponse::DescribeProvisionedProductResponse(
        const DescribeProvisionedProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProvisionedProductResponsePrivate(this), parent)
{
    setRequest(new DescribeProvisionedProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProvisionedProductRequest * DescribeProvisionedProductResponse::request() const
{
    Q_D(const DescribeProvisionedProductResponse);
    return static_cast<const DescribeProvisionedProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeProvisionedProduct \a response.
 */
void DescribeProvisionedProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProvisionedProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisionedProductResponsePrivate
 * \brief The DescribeProvisionedProductResponsePrivate class provides private implementation for DescribeProvisionedProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProvisionedProductResponsePrivate object with public implementation \a q.
 */
DescribeProvisionedProductResponsePrivate::DescribeProvisionedProductResponsePrivate(
    DescribeProvisionedProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeProvisionedProduct response element from \a xml.
 */
void DescribeProvisionedProductResponsePrivate::parseDescribeProvisionedProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProvisionedProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
