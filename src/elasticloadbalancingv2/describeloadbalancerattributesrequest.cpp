/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeloadbalancerattributesrequest.h"
#include "describeloadbalancerattributesrequest_p.h"
#include "describeloadbalancerattributesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::DescribeLoadBalancerAttributesRequest
 *
 * \brief The DescribeLoadBalancerAttributesRequest class encapsulates ElasticLoadBalancingv2 DescribeLoadBalancerAttributes requests.
 *
 * \ingroup ElasticLoadBalancingv2
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer distributes incoming traffic across targets, such as your EC2 instances. This enables you to increase
 *  the availability of your application. The load balancer also monitors the health of its registered targets and ensures
 *  that it routes traffic only to healthy targets. You configure your load balancer to accept incoming traffic by
 *  specifying one or more listeners, which are configured with a protocol and port number for connections from clients to
 *  the load balancer. You configure a target group with a protocol and port number for connections from the load balancer
 *  to the targets, and with health check settings to be used when checking the health status of the
 * 
 *  targets>
 * 
 *  Elastic Load Balancing supports the following types of load balancers: Application Load Balancers, Network Load
 *  Balancers, and Classic Load
 * 
 *  Balancers>
 * 
 *  An Application Load Balancer makes routing and load balancing decisions at the application layer (HTTP/HTTPS). A Network
 *  Load Balancer makes routing and load balancing decisions at the transport layer (TCP). Both Application Load Balancers
 *  and Network Load Balancers can route requests to one or more ports on each EC2 instance or container instance in your
 *  virtual private cloud
 * 
 *  (VPC)>
 * 
 *  A Classic Load Balancer makes routing and load balancing decisions either at the transport layer (TCP/SSL) or the
 *  application layer (HTTP/HTTPS), and supports either EC2-Classic or a VPC. For more information, see the <a
 *  href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 * 
 *  Guide</a>>
 * 
 *  This reference covers the 2015-12-01 API, which supports Application Load Balancers and Network Load Balancers. The
 *  2012-06-01 API supports Classic Load
 * 
 *  Balancers>
 * 
 *  To get started, complete the following
 * 
 *  tasks> <ol> <li>
 * 
 *  Create a load balancer using
 * 
 *  <a>CreateLoadBalancer</a>> </li> <li>
 * 
 *  Create a target group using
 * 
 *  <a>CreateTargetGroup</a>> </li> <li>
 * 
 *  Register targets for the target group using
 * 
 *  <a>RegisterTargets</a>> </li> <li>
 * 
 *  Create one or more listeners for your load balancer using
 * 
 *  <a>CreateListener</a>> </li> </ol>
 * 
 *  To delete a load balancer and its related resources, complete the following
 * 
 *  tasks> <ol> <li>
 * 
 *  Delete the load balancer using
 * 
 *  <a>DeleteLoadBalancer</a>> </li> <li>
 * 
 *  Delete the target group using
 * 
 *  <a>DeleteTargetGroup</a>> </li> </ol>
 * 
 *  All Elastic Load Balancing operations are idempotent, which means that they complete at most one time. If you repeat an
 *  operation, it
 *
 * \sa ElasticLoadBalancingv2Client::describeLoadBalancerAttributes
 */

/*!
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLoadBalancerAttributesRequest::DescribeLoadBalancerAttributesRequest(const DescribeLoadBalancerAttributesRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeLoadBalancerAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequest object.
 */
DescribeLoadBalancerAttributesRequest::DescribeLoadBalancerAttributesRequest()
    : ElasticLoadBalancingv2Request(new DescribeLoadBalancerAttributesRequestPrivate(ElasticLoadBalancingv2Request::DescribeLoadBalancerAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLoadBalancerAttributesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeLoadBalancerAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLoadBalancerAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLoadBalancerAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoadBalancerAttributesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeLoadBalancerAttributesRequestPrivate
 *
 * @brief  Private implementation for DescribeLoadBalancerAttributesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DescribeLoadBalancerAttributesRequest instance.
 */
DescribeLoadBalancerAttributesRequestPrivate::DescribeLoadBalancerAttributesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeLoadBalancerAttributesRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoadBalancerAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLoadBalancerAttributesRequest instance.
 */
DescribeLoadBalancerAttributesRequestPrivate::DescribeLoadBalancerAttributesRequestPrivate(
    const DescribeLoadBalancerAttributesRequestPrivate &other, DescribeLoadBalancerAttributesRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
