// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationresponse.h"
#include "describeapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DescribeApplicationResponse
 * \brief The DescribeApplicationResponse class provides an interace for KinesisAnalytics DescribeApplication responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *  <fullname>Amazon Kinesis Analytics</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p <note>
 * 
 *  This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 *  Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 *  href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 * 
 *  Documentation</a>> </note>
 * 
 *  This is the <i>Amazon Kinesis Analytics v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
 *  additional information.
 *
 * \sa KinesisAnalyticsClient::describeApplication
 */

/*!
 * Constructs a DescribeApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationResponse::DescribeApplicationResponse(
        const DescribeApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DescribeApplicationResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationRequest * DescribeApplicationResponse::request() const
{
    Q_D(const DescribeApplicationResponse);
    return static_cast<const DescribeApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics DescribeApplication \a response.
 */
void DescribeApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::DescribeApplicationResponsePrivate
 * \brief The DescribeApplicationResponsePrivate class provides private implementation for DescribeApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DescribeApplicationResponsePrivate object with public implementation \a q.
 */
DescribeApplicationResponsePrivate::DescribeApplicationResponsePrivate(
    DescribeApplicationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics DescribeApplication response element from \a xml.
 */
void DescribeApplicationResponsePrivate::parseDescribeApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
