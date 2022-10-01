// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getautoscalinggrouprecommendationsrequest.h"
#include "getautoscalinggrouprecommendationsrequest_p.h"
#include "getautoscalinggrouprecommendationsresponse.h"
#include "computeoptimizerrequest_p.h"

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetAutoScalingGroupRecommendationsRequest
 * \brief The GetAutoScalingGroupRecommendationsRequest class provides an interface for ComputeOptimizer GetAutoScalingGroupRecommendations requests.
 *
 * \inmodule QtAwsComputeOptimizer
 *
 *  Compute Optimizer is a service that analyzes the configuration and utilization metrics of your Amazon Web Services
 *  compute resources, such as Amazon EC2 instances, Amazon EC2 Auto Scaling groups, Lambda functions, and Amazon EBS
 *  volumes. It reports whether your resources are optimal, and generates optimization recommendations to reduce the cost
 *  and improve the performance of your workloads. Compute Optimizer also provides recent utilization metric data, in
 *  addition to projected utilization metric data for the recommendations, which you can use to evaluate which
 *  recommendation provides the best price-performance trade-off. The analysis of your usage patterns can help you decide
 *  when to move or resize your running resources, and still meet your performance and capacity requirements. For more
 *  information about Compute Optimizer, including the required permissions to use the service, see the <a
 *  href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/">Compute Optimizer User
 *
 * \sa ComputeOptimizerClient::getAutoScalingGroupRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
GetAutoScalingGroupRecommendationsRequest::GetAutoScalingGroupRecommendationsRequest(const GetAutoScalingGroupRecommendationsRequest &other)
    : ComputeOptimizerRequest(new GetAutoScalingGroupRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAutoScalingGroupRecommendationsRequest object.
 */
GetAutoScalingGroupRecommendationsRequest::GetAutoScalingGroupRecommendationsRequest()
    : ComputeOptimizerRequest(new GetAutoScalingGroupRecommendationsRequestPrivate(ComputeOptimizerRequest::GetAutoScalingGroupRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetAutoScalingGroupRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAutoScalingGroupRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAutoScalingGroupRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new GetAutoScalingGroupRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::ComputeOptimizer::GetAutoScalingGroupRecommendationsRequestPrivate
 * \brief The GetAutoScalingGroupRecommendationsRequestPrivate class provides private implementation for GetAutoScalingGroupRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetAutoScalingGroupRecommendationsRequestPrivate object for ComputeOptimizer \a action,
 * with public implementation \a q.
 */
GetAutoScalingGroupRecommendationsRequestPrivate::GetAutoScalingGroupRecommendationsRequestPrivate(
    const ComputeOptimizerRequest::Action action, GetAutoScalingGroupRecommendationsRequest * const q)
    : ComputeOptimizerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAutoScalingGroupRecommendationsRequest
 * class' copy constructor.
 */
GetAutoScalingGroupRecommendationsRequestPrivate::GetAutoScalingGroupRecommendationsRequestPrivate(
    const GetAutoScalingGroupRecommendationsRequestPrivate &other, GetAutoScalingGroupRecommendationsRequest * const q)
    : ComputeOptimizerRequestPrivate(other, q)
{

}

} // namespace ComputeOptimizer
} // namespace QtAws
