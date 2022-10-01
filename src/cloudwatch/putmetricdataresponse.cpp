// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmetricdataresponse.h"
#include "putmetricdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutMetricDataResponse
 * \brief The PutMetricDataResponse class provides an interace for CloudWatch PutMetricData responses.
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
 * \sa CloudWatchClient::putMetricData
 */

/*!
 * Constructs a PutMetricDataResponse object for \a reply to \a request, with parent \a parent.
 */
PutMetricDataResponse::PutMetricDataResponse(
        const PutMetricDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new PutMetricDataResponsePrivate(this), parent)
{
    setRequest(new PutMetricDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutMetricDataRequest * PutMetricDataResponse::request() const
{
    Q_D(const PutMetricDataResponse);
    return static_cast<const PutMetricDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch PutMetricData \a response.
 */
void PutMetricDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutMetricDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::PutMetricDataResponsePrivate
 * \brief The PutMetricDataResponsePrivate class provides private implementation for PutMetricDataResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutMetricDataResponsePrivate object with public implementation \a q.
 */
PutMetricDataResponsePrivate::PutMetricDataResponsePrivate(
    PutMetricDataResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch PutMetricData response element from \a xml.
 */
void PutMetricDataResponsePrivate::parsePutMetricDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMetricDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
