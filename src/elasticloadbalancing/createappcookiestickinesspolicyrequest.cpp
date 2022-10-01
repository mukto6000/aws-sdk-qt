// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createappcookiestickinesspolicyrequest.h"
#include "createappcookiestickinesspolicyrequest_p.h"
#include "createappcookiestickinesspolicyresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::CreateAppCookieStickinessPolicyRequest
 * \brief The CreateAppCookieStickinessPolicyRequest class provides an interface for ElasticLoadBalancing CreateAppCookieStickinessPolicy requests.
 *
 * \inmodule QtAwsElasticLoadBalancing
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer can distribute incoming traffic across your EC2 instances. This enables you to increase the availability
 *  of your application. The load balancer also monitors the health of its registered instances and ensures that it routes
 *  traffic only to healthy instances. You configure your load balancer to accept incoming traffic by specifying one or more
 *  listeners, which are configured with a protocol and port number for connections from clients to the load balancer and a
 *  protocol and port number for connections from the load balancer to the
 * 
 *  instances>
 * 
 *  Elastic Load Balancing supports three types of load balancers: Application Load Balancers, Network Load Balancers, and
 *  Classic Load Balancers. You can select a load balancer based on your application needs. For more information, see the <a
 *  href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 * 
 *  Guide</a>>
 * 
 *  This reference covers the 2012-06-01 API, which supports Classic Load Balancers. The 2015-12-01 API supports Application
 *  Load Balancers and Network Load
 * 
 *  Balancers>
 * 
 *  To get started, create a load balancer with one or more listeners using <a>CreateLoadBalancer</a>. Register your
 *  instances with the load balancer using
 * 
 *  <a>RegisterInstancesWithLoadBalancer</a>>
 * 
 *  All Elastic Load Balancing operations are <i>idempotent</i>, which means that they complete at most one time. If you
 *  repeat an operation, it succeeds with a 200 OK response
 *
 * \sa ElasticLoadBalancingClient::createAppCookieStickinessPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAppCookieStickinessPolicyRequest::CreateAppCookieStickinessPolicyRequest(const CreateAppCookieStickinessPolicyRequest &other)
    : ElasticLoadBalancingRequest(new CreateAppCookieStickinessPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAppCookieStickinessPolicyRequest object.
 */
CreateAppCookieStickinessPolicyRequest::CreateAppCookieStickinessPolicyRequest()
    : ElasticLoadBalancingRequest(new CreateAppCookieStickinessPolicyRequestPrivate(ElasticLoadBalancingRequest::CreateAppCookieStickinessPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAppCookieStickinessPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAppCookieStickinessPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAppCookieStickinessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateAppCookieStickinessPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticLoadBalancing::CreateAppCookieStickinessPolicyRequestPrivate
 * \brief The CreateAppCookieStickinessPolicyRequestPrivate class provides private implementation for CreateAppCookieStickinessPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a CreateAppCookieStickinessPolicyRequestPrivate object for ElasticLoadBalancing \a action,
 * with public implementation \a q.
 */
CreateAppCookieStickinessPolicyRequestPrivate::CreateAppCookieStickinessPolicyRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, CreateAppCookieStickinessPolicyRequest * const q)
    : ElasticLoadBalancingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAppCookieStickinessPolicyRequest
 * class' copy constructor.
 */
CreateAppCookieStickinessPolicyRequestPrivate::CreateAppCookieStickinessPolicyRequestPrivate(
    const CreateAppCookieStickinessPolicyRequestPrivate &other, CreateAppCookieStickinessPolicyRequest * const q)
    : ElasticLoadBalancingRequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
