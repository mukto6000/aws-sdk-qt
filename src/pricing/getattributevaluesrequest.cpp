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

#include "getattributevaluesrequest.h"
#include "getattributevaluesrequest_p.h"
#include "getattributevaluesresponse.h"
#include "pricingrequest_p.h"

namespace QtAws {
namespace Pricing {

/*!
 * \class QtAws::Pricing::GetAttributeValuesRequest
 * \brief The GetAttributeValuesRequest class provides an interface for Pricing GetAttributeValues requests.
 *
 * \inmodule QtAwsPricing
 *
 *  AWS Price List Service API (AWS Price List Service) is a centralized and convenient way to programmatically query Amazon
 *  Web Services for services, products, and pricing information. The AWS Price List Service uses standardized product
 *  attributes such as <code>Location</code>, <code>Storage Class</code>, and <code>Operating System</code>, and provides
 *  prices at the SKU level. You can use the AWS Price List Service to build cost control and scenario planning tools,
 *  reconcile billing data, forecast future spend for budgeting purposes, and provide cost benefit analysis that compare
 *  your internal workloads with
 * 
 *  AWS>
 * 
 *  Use <code>GetServices</code> without a service code to retrieve the service codes for all AWS services, then
 *  <code>GetServices</code> with a service code to retreive the attribute names for that service. After you have the
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
 *  AWS Price List Service API provides the following two
 * 
 *  endpoints> <ul> <li>
 * 
 *  https://api.pricing.us-east-1.amazonaws.co> </li> <li>
 *
 * \sa PricingClient::getAttributeValues
 */

/*!
 * Constructs a copy of \a other.
 */
GetAttributeValuesRequest::GetAttributeValuesRequest(const GetAttributeValuesRequest &other)
    : PricingRequest(new GetAttributeValuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAttributeValuesRequest object.
 */
GetAttributeValuesRequest::GetAttributeValuesRequest()
    : PricingRequest(new GetAttributeValuesRequestPrivate(PricingRequest::GetAttributeValuesAction, this))
{

}

/*!
 * \reimp
 */
bool GetAttributeValuesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAttributeValuesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAttributeValuesRequest::response(QNetworkReply * const reply) const
{
    return new GetAttributeValuesResponse(*this, reply);
}

/*!
 * \class QtAws::Pricing::GetAttributeValuesRequestPrivate
 * \brief The GetAttributeValuesRequestPrivate class provides private implementation for GetAttributeValuesRequest.
 * \internal
 *
 * \inmodule QtAwsPricing
 */

/*!
 * Constructs a GetAttributeValuesRequestPrivate object for Pricing \a action,
 * with public implementation \a q.
 */
GetAttributeValuesRequestPrivate::GetAttributeValuesRequestPrivate(
    const PricingRequest::Action action, GetAttributeValuesRequest * const q)
    : PricingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAttributeValuesRequest
 * class' copy constructor.
 */
GetAttributeValuesRequestPrivate::GetAttributeValuesRequestPrivate(
    const GetAttributeValuesRequestPrivate &other, GetAttributeValuesRequest * const q)
    : PricingRequestPrivate(other, q)
{

}

} // namespace Pricing
} // namespace QtAws
