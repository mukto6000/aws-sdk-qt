// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getautoscalinggrouprecommendationsresponse.h"
#include "getautoscalinggrouprecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetAutoScalingGroupRecommendationsResponse
 * \brief The GetAutoScalingGroupRecommendationsResponse class provides an interace for ComputeOptimizer GetAutoScalingGroupRecommendations responses.
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
 * Constructs a GetAutoScalingGroupRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetAutoScalingGroupRecommendationsResponse::GetAutoScalingGroupRecommendationsResponse(
        const GetAutoScalingGroupRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new GetAutoScalingGroupRecommendationsResponsePrivate(this), parent)
{
    setRequest(new GetAutoScalingGroupRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAutoScalingGroupRecommendationsRequest * GetAutoScalingGroupRecommendationsResponse::request() const
{
    Q_D(const GetAutoScalingGroupRecommendationsResponse);
    return static_cast<const GetAutoScalingGroupRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer GetAutoScalingGroupRecommendations \a response.
 */
void GetAutoScalingGroupRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAutoScalingGroupRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::GetAutoScalingGroupRecommendationsResponsePrivate
 * \brief The GetAutoScalingGroupRecommendationsResponsePrivate class provides private implementation for GetAutoScalingGroupRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetAutoScalingGroupRecommendationsResponsePrivate object with public implementation \a q.
 */
GetAutoScalingGroupRecommendationsResponsePrivate::GetAutoScalingGroupRecommendationsResponsePrivate(
    GetAutoScalingGroupRecommendationsResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer GetAutoScalingGroupRecommendations response element from \a xml.
 */
void GetAutoScalingGroupRecommendationsResponsePrivate::parseGetAutoScalingGroupRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAutoScalingGroupRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
