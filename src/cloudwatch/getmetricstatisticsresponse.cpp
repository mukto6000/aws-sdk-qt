// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmetricstatisticsresponse.h"
#include "getmetricstatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::GetMetricStatisticsResponse
 * \brief The GetMetricStatisticsResponse class provides an interace for CloudWatch GetMetricStatistics responses.
 *
 * \inmodule QtAwsCloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (Amazon Web Services) resources and the applications you run on
 *  Amazon Web Services in real time. You can use CloudWatch to collect and track metrics, which are the variables you want
 *  to measure for your resources and
 * 
 *  applications>
 * 
 *  CloudWatch alarms send notifications or automatically change the resources you are monitoring based on rules that you
 *  define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon EC2 instances. Then, use
 *  this data to determine whether you should launch additional instances to handle increased load. You can also use this
 *  data to stop under-used instances to save
 * 
 *  money>
 * 
 *  In addition to monitoring the built-in metrics that come with Amazon Web Services, you can monitor your own custom
 *  metrics. With CloudWatch, you gain system-wide visibility into resource utilization, application performance, and
 *  operational
 *
 * \sa CloudWatchClient::getMetricStatistics
 */

/*!
 * Constructs a GetMetricStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
GetMetricStatisticsResponse::GetMetricStatisticsResponse(
        const GetMetricStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new GetMetricStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetMetricStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMetricStatisticsRequest * GetMetricStatisticsResponse::request() const
{
    Q_D(const GetMetricStatisticsResponse);
    return static_cast<const GetMetricStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch GetMetricStatistics \a response.
 */
void GetMetricStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMetricStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::GetMetricStatisticsResponsePrivate
 * \brief The GetMetricStatisticsResponsePrivate class provides private implementation for GetMetricStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a GetMetricStatisticsResponsePrivate object with public implementation \a q.
 */
GetMetricStatisticsResponsePrivate::GetMetricStatisticsResponsePrivate(
    GetMetricStatisticsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch GetMetricStatistics response element from \a xml.
 */
void GetMetricStatisticsResponsePrivate::parseGetMetricStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMetricStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
