// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecommendationsummariesresponse.h"
#include "getrecommendationsummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetRecommendationSummariesResponse
 * \brief The GetRecommendationSummariesResponse class provides an interace for ComputeOptimizer GetRecommendationSummaries responses.
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
 * \sa ComputeOptimizerClient::getRecommendationSummaries
 */

/*!
 * Constructs a GetRecommendationSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecommendationSummariesResponse::GetRecommendationSummariesResponse(
        const GetRecommendationSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new GetRecommendationSummariesResponsePrivate(this), parent)
{
    setRequest(new GetRecommendationSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecommendationSummariesRequest * GetRecommendationSummariesResponse::request() const
{
    Q_D(const GetRecommendationSummariesResponse);
    return static_cast<const GetRecommendationSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer GetRecommendationSummaries \a response.
 */
void GetRecommendationSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecommendationSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::GetRecommendationSummariesResponsePrivate
 * \brief The GetRecommendationSummariesResponsePrivate class provides private implementation for GetRecommendationSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetRecommendationSummariesResponsePrivate object with public implementation \a q.
 */
GetRecommendationSummariesResponsePrivate::GetRecommendationSummariesResponsePrivate(
    GetRecommendationSummariesResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer GetRecommendationSummaries response element from \a xml.
 */
void GetRecommendationSummariesResponsePrivate::parseGetRecommendationSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecommendationSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
