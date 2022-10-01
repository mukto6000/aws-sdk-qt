// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
