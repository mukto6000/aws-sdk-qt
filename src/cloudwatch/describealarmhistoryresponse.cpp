// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealarmhistoryresponse.h"
#include "describealarmhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DescribeAlarmHistoryResponse
 * \brief The DescribeAlarmHistoryResponse class provides an interace for CloudWatch DescribeAlarmHistory responses.
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
 * \sa CloudWatchClient::describeAlarmHistory
 */

/*!
 * Constructs a DescribeAlarmHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAlarmHistoryResponse::DescribeAlarmHistoryResponse(
        const DescribeAlarmHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DescribeAlarmHistoryResponsePrivate(this), parent)
{
    setRequest(new DescribeAlarmHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAlarmHistoryRequest * DescribeAlarmHistoryResponse::request() const
{
    Q_D(const DescribeAlarmHistoryResponse);
    return static_cast<const DescribeAlarmHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch DescribeAlarmHistory \a response.
 */
void DescribeAlarmHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAlarmHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::DescribeAlarmHistoryResponsePrivate
 * \brief The DescribeAlarmHistoryResponsePrivate class provides private implementation for DescribeAlarmHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DescribeAlarmHistoryResponsePrivate object with public implementation \a q.
 */
DescribeAlarmHistoryResponsePrivate::DescribeAlarmHistoryResponsePrivate(
    DescribeAlarmHistoryResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch DescribeAlarmHistory response element from \a xml.
 */
void DescribeAlarmHistoryResponsePrivate::parseDescribeAlarmHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlarmHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
