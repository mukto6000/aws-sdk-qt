// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlambdafunctionrecommendationsresponse.h"
#include "getlambdafunctionrecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetLambdaFunctionRecommendationsResponse
 * \brief The GetLambdaFunctionRecommendationsResponse class provides an interace for ComputeOptimizer GetLambdaFunctionRecommendations responses.
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
 * Constructs a GetLambdaFunctionRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetLambdaFunctionRecommendationsResponse::GetLambdaFunctionRecommendationsResponse(
        const GetLambdaFunctionRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new GetLambdaFunctionRecommendationsResponsePrivate(this), parent)
{
    setRequest(new GetLambdaFunctionRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLambdaFunctionRecommendationsRequest * GetLambdaFunctionRecommendationsResponse::request() const
{
    Q_D(const GetLambdaFunctionRecommendationsResponse);
    return static_cast<const GetLambdaFunctionRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer GetLambdaFunctionRecommendations \a response.
 */
void GetLambdaFunctionRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLambdaFunctionRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::GetLambdaFunctionRecommendationsResponsePrivate
 * \brief The GetLambdaFunctionRecommendationsResponsePrivate class provides private implementation for GetLambdaFunctionRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetLambdaFunctionRecommendationsResponsePrivate object with public implementation \a q.
 */
GetLambdaFunctionRecommendationsResponsePrivate::GetLambdaFunctionRecommendationsResponsePrivate(
    GetLambdaFunctionRecommendationsResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer GetLambdaFunctionRecommendations response element from \a xml.
 */
void GetLambdaFunctionRecommendationsResponsePrivate::parseGetLambdaFunctionRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLambdaFunctionRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
