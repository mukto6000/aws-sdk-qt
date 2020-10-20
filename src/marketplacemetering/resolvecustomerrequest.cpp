/*
    Copyright 2013-2020 Paul Colby

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

#include "resolvecustomerrequest.h"
#include "resolvecustomerrequest_p.h"
#include "resolvecustomerresponse.h"
#include "marketplacemeteringrequest_p.h"

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::ResolveCustomerRequest
 * \brief The ResolveCustomerRequest class provides an interface for MarketplaceMetering ResolveCustomer requests.
 *
 * \inmodule QtAwsMarketplaceMetering
 *
 *  <fullname>AWS Marketplace Metering Service</fullname>
 * 
 *  This reference provides descriptions of the low-level AWS Marketplace Metering Service
 * 
 *  API>
 * 
 *  AWS Marketplace sellers can use this API to submit usage data for custom usage
 * 
 *  dimensions>
 * 
 *  <b>Submitting Metering Records</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>MeterUsage</i>- Submits the metering record for a Marketplace product. MeterUsage is called from an EC2
 * 
 *  instance> </li> <li>
 * 
 *  <i>BatchMeterUsage</i>- Submits the metering record for a set of customers. BatchMeterUsage is called from a
 *  software-as-a-service (SaaS)
 * 
 *  application> </li> </ul>
 * 
 *  <b>Accepting New Customers</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>ResolveCustomer</i>- Called by a SaaS application during the registration process. When a buyer visits your website
 *  during the registration process, the buyer submits a Registration Token through the browser. The Registration Token is
 *  resolved through this API to obtain a CustomerIdentifier and Product
 * 
 *  Code> </li> </ul>
 * 
 *  <b>Entitlement and Metering for Paid Container Products</b>
 * 
 *  </p <ul> <li>
 * 
 *  Paid container software products sold through AWS Marketplace must integrate with the AWS Marketplace Metering Service
 *  and call the RegisterUsage operation for software entitlement and metering. Calling RegisterUsage from containers
 *  running outside of Amazon Elastic Container Service (Amazon ECR) isn't supported. Free and BYOL products for ECS aren't
 *  required to call RegisterUsage, but you can do so if you want to receive usage data in your seller reports. For more
 *  information on using the RegisterUsage operation, see <a
 *  href="https://docs.aws.amazon.com/marketplace/latest/userguide/container-based-products.html">Container-Based
 *  Products</a>.
 * 
 *  </p </li> </ul>
 * 
 *  BatchMeterUsage API calls are captured by AWS CloudTrail. You can use Cloudtrail to verify that the SaaS metering
 *  records that you sent are accurate by searching for records with the eventName of BatchMeterUsage. You can also use
 *  CloudTrail to audit records over time. For more information, see the <i> <a
 *  href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html">AWS CloudTrail User Guide</a>
 *
 * \sa MarketplaceMeteringClient::resolveCustomer
 */

/*!
 * Constructs a copy of \a other.
 */
ResolveCustomerRequest::ResolveCustomerRequest(const ResolveCustomerRequest &other)
    : MarketplaceMeteringRequest(new ResolveCustomerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResolveCustomerRequest object.
 */
ResolveCustomerRequest::ResolveCustomerRequest()
    : MarketplaceMeteringRequest(new ResolveCustomerRequestPrivate(MarketplaceMeteringRequest::ResolveCustomerAction, this))
{

}

/*!
 * \reimp
 */
bool ResolveCustomerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResolveCustomerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResolveCustomerRequest::response(QNetworkReply * const reply) const
{
    return new ResolveCustomerResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceMetering::ResolveCustomerRequestPrivate
 * \brief The ResolveCustomerRequestPrivate class provides private implementation for ResolveCustomerRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceMetering
 */

/*!
 * Constructs a ResolveCustomerRequestPrivate object for MarketplaceMetering \a action,
 * with public implementation \a q.
 */
ResolveCustomerRequestPrivate::ResolveCustomerRequestPrivate(
    const MarketplaceMeteringRequest::Action action, ResolveCustomerRequest * const q)
    : MarketplaceMeteringRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResolveCustomerRequest
 * class' copy constructor.
 */
ResolveCustomerRequestPrivate::ResolveCustomerRequestPrivate(
    const ResolveCustomerRequestPrivate &other, ResolveCustomerRequest * const q)
    : MarketplaceMeteringRequestPrivate(other, q)
{

}

} // namespace MarketplaceMetering
} // namespace QtAws
