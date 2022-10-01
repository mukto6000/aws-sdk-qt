// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlambdafunctionrecommendationsrequest.h"
#include "getlambdafunctionrecommendationsrequest_p.h"
#include "getlambdafunctionrecommendationsresponse.h"
#include "computeoptimizerrequest_p.h"

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetLambdaFunctionRecommendationsRequest
 * \brief The GetLambdaFunctionRecommendationsRequest class provides an interface for ComputeOptimizer GetLambdaFunctionRecommendations requests.
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
 * \sa ComputeOptimizerClient::getLambdaFunctionRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
GetLambdaFunctionRecommendationsRequest::GetLambdaFunctionRecommendationsRequest(const GetLambdaFunctionRecommendationsRequest &other)
    : ComputeOptimizerRequest(new GetLambdaFunctionRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLambdaFunctionRecommendationsRequest object.
 */
GetLambdaFunctionRecommendationsRequest::GetLambdaFunctionRecommendationsRequest()
    : ComputeOptimizerRequest(new GetLambdaFunctionRecommendationsRequestPrivate(ComputeOptimizerRequest::GetLambdaFunctionRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetLambdaFunctionRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLambdaFunctionRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLambdaFunctionRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new GetLambdaFunctionRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::ComputeOptimizer::GetLambdaFunctionRecommendationsRequestPrivate
 * \brief The GetLambdaFunctionRecommendationsRequestPrivate class provides private implementation for GetLambdaFunctionRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetLambdaFunctionRecommendationsRequestPrivate object for ComputeOptimizer \a action,
 * with public implementation \a q.
 */
GetLambdaFunctionRecommendationsRequestPrivate::GetLambdaFunctionRecommendationsRequestPrivate(
    const ComputeOptimizerRequest::Action action, GetLambdaFunctionRecommendationsRequest * const q)
    : ComputeOptimizerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLambdaFunctionRecommendationsRequest
 * class' copy constructor.
 */
GetLambdaFunctionRecommendationsRequestPrivate::GetLambdaFunctionRecommendationsRequestPrivate(
    const GetLambdaFunctionRecommendationsRequestPrivate &other, GetLambdaFunctionRecommendationsRequest * const q)
    : ComputeOptimizerRequestPrivate(other, q)
{

}

} // namespace ComputeOptimizer
} // namespace QtAws
