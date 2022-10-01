// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportautoscalinggrouprecommendationsresponse.h"
#include "exportautoscalinggrouprecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::ExportAutoScalingGroupRecommendationsResponse
 * \brief The ExportAutoScalingGroupRecommendationsResponse class provides an interace for ComputeOptimizer ExportAutoScalingGroupRecommendations responses.
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
 * \sa ComputeOptimizerClient::exportAutoScalingGroupRecommendations
 */

/*!
 * Constructs a ExportAutoScalingGroupRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
ExportAutoScalingGroupRecommendationsResponse::ExportAutoScalingGroupRecommendationsResponse(
        const ExportAutoScalingGroupRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new ExportAutoScalingGroupRecommendationsResponsePrivate(this), parent)
{
    setRequest(new ExportAutoScalingGroupRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportAutoScalingGroupRecommendationsRequest * ExportAutoScalingGroupRecommendationsResponse::request() const
{
    Q_D(const ExportAutoScalingGroupRecommendationsResponse);
    return static_cast<const ExportAutoScalingGroupRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer ExportAutoScalingGroupRecommendations \a response.
 */
void ExportAutoScalingGroupRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportAutoScalingGroupRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::ExportAutoScalingGroupRecommendationsResponsePrivate
 * \brief The ExportAutoScalingGroupRecommendationsResponsePrivate class provides private implementation for ExportAutoScalingGroupRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a ExportAutoScalingGroupRecommendationsResponsePrivate object with public implementation \a q.
 */
ExportAutoScalingGroupRecommendationsResponsePrivate::ExportAutoScalingGroupRecommendationsResponsePrivate(
    ExportAutoScalingGroupRecommendationsResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer ExportAutoScalingGroupRecommendations response element from \a xml.
 */
void ExportAutoScalingGroupRecommendationsResponsePrivate::parseExportAutoScalingGroupRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportAutoScalingGroupRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
