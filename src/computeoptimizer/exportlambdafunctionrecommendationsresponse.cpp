// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportlambdafunctionrecommendationsresponse.h"
#include "exportlambdafunctionrecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::ExportLambdaFunctionRecommendationsResponse
 * \brief The ExportLambdaFunctionRecommendationsResponse class provides an interace for ComputeOptimizer ExportLambdaFunctionRecommendations responses.
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
 * \sa ComputeOptimizerClient::exportLambdaFunctionRecommendations
 */

/*!
 * Constructs a ExportLambdaFunctionRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
ExportLambdaFunctionRecommendationsResponse::ExportLambdaFunctionRecommendationsResponse(
        const ExportLambdaFunctionRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new ExportLambdaFunctionRecommendationsResponsePrivate(this), parent)
{
    setRequest(new ExportLambdaFunctionRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportLambdaFunctionRecommendationsRequest * ExportLambdaFunctionRecommendationsResponse::request() const
{
    Q_D(const ExportLambdaFunctionRecommendationsResponse);
    return static_cast<const ExportLambdaFunctionRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer ExportLambdaFunctionRecommendations \a response.
 */
void ExportLambdaFunctionRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportLambdaFunctionRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::ExportLambdaFunctionRecommendationsResponsePrivate
 * \brief The ExportLambdaFunctionRecommendationsResponsePrivate class provides private implementation for ExportLambdaFunctionRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a ExportLambdaFunctionRecommendationsResponsePrivate object with public implementation \a q.
 */
ExportLambdaFunctionRecommendationsResponsePrivate::ExportLambdaFunctionRecommendationsResponsePrivate(
    ExportLambdaFunctionRecommendationsResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer ExportLambdaFunctionRecommendations response element from \a xml.
 */
void ExportLambdaFunctionRecommendationsResponsePrivate::parseExportLambdaFunctionRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportLambdaFunctionRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
