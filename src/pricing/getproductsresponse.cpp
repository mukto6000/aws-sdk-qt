/*
    Copyright 2013-2021 Paul Colby

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

#include "getproductsresponse.h"
#include "getproductsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pricing {

/*!
 * \class QtAws::Pricing::GetProductsResponse
 * \brief The GetProductsResponse class provides an interace for Pricing GetProducts responses.
 *
 * \inmodule QtAwsPricing
 *
 *  Amazon Web Services Price List API is a centralized and convenient way to programmatically query Amazon Web Services for
 *  services, products, and pricing information. The Amazon Web Services Price List uses standardized product attributes
 *  such as <code>Location</code>, <code>Storage Class</code>, and <code>Operating System</code>, and provides prices at the
 *  SKU level. You can use the Amazon Web Services Price List to build cost control and scenario planning tools, reconcile
 *  billing data, forecast future spend for budgeting purposes, and provide cost benefit analysis that compare your internal
 *  workloads with Amazon Web
 * 
 *  Services>
 * 
 *  Use <code>GetServices</code> without a service code to retrieve the service codes for all AWS services, then
 *  <code>GetServices</code> with a service code to retrieve the attribute names for that service. After you have the
 *  service code and attribute names, you can use <code>GetAttributeValues</code> to see what values are available for an
 *  attribute. With the service code and an attribute name and value, you can use <code>GetProducts</code> to find specific
 *  products that you're interested in, such as an <code>AmazonEC2</code> instance, with a <code>Provisioned IOPS</code>
 * 
 *  <code>volumeType</code>>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  Amazon Web Services Price List service API provides the following two
 * 
 *  endpoints> <ul> <li>
 * 
 *  https://api.pricing.us-east-1.amazonaws.co> </li> <li>
 *
 * \sa PricingClient::getProducts
 */

/*!
 * Constructs a GetProductsResponse object for \a reply to \a request, with parent \a parent.
 */
GetProductsResponse::GetProductsResponse(
        const GetProductsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PricingResponse(new GetProductsResponsePrivate(this), parent)
{
    setRequest(new GetProductsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetProductsRequest * GetProductsResponse::request() const
{
    Q_D(const GetProductsResponse);
    return static_cast<const GetProductsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pricing GetProducts \a response.
 */
void GetProductsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetProductsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pricing::GetProductsResponsePrivate
 * \brief The GetProductsResponsePrivate class provides private implementation for GetProductsResponse.
 * \internal
 *
 * \inmodule QtAwsPricing
 */

/*!
 * Constructs a GetProductsResponsePrivate object with public implementation \a q.
 */
GetProductsResponsePrivate::GetProductsResponsePrivate(
    GetProductsResponse * const q) : PricingResponsePrivate(q)
{

}

/*!
 * Parses a Pricing GetProducts response element from \a xml.
 */
void GetProductsResponsePrivate::parseGetProductsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProductsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pricing
} // namespace QtAws
