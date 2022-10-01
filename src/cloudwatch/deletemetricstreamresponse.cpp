// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemetricstreamresponse.h"
#include "deletemetricstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DeleteMetricStreamResponse
 * \brief The DeleteMetricStreamResponse class provides an interace for CloudWatch DeleteMetricStream responses.
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
 * \sa CloudWatchClient::deleteMetricStream
 */

/*!
 * Constructs a DeleteMetricStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMetricStreamResponse::DeleteMetricStreamResponse(
        const DeleteMetricStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DeleteMetricStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteMetricStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMetricStreamRequest * DeleteMetricStreamResponse::request() const
{
    Q_D(const DeleteMetricStreamResponse);
    return static_cast<const DeleteMetricStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch DeleteMetricStream \a response.
 */
void DeleteMetricStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMetricStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::DeleteMetricStreamResponsePrivate
 * \brief The DeleteMetricStreamResponsePrivate class provides private implementation for DeleteMetricStreamResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DeleteMetricStreamResponsePrivate object with public implementation \a q.
 */
DeleteMetricStreamResponsePrivate::DeleteMetricStreamResponsePrivate(
    DeleteMetricStreamResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch DeleteMetricStream response element from \a xml.
 */
void DeleteMetricStreamResponsePrivate::parseDeleteMetricStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMetricStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
