/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeapplicationsnapshotresponse.h"
#include "describeapplicationsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationSnapshotResponse
 * \brief The DescribeApplicationSnapshotResponse class provides an interace for KinesisAnalyticsV2 DescribeApplicationSnapshot responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  SQL or Java. The service enables you to quickly author and run SQL or Java code against streaming sources to perform
 *  time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::describeApplicationSnapshot
 */

/*!
 * Constructs a DescribeApplicationSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationSnapshotResponse::DescribeApplicationSnapshotResponse(
        const DescribeApplicationSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DescribeApplicationSnapshotResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationSnapshotRequest * DescribeApplicationSnapshotResponse::request() const
{
    Q_D(const DescribeApplicationSnapshotResponse);
    return static_cast<const DescribeApplicationSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DescribeApplicationSnapshot \a response.
 */
void DescribeApplicationSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicationSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationSnapshotResponsePrivate
 * \brief The DescribeApplicationSnapshotResponsePrivate class provides private implementation for DescribeApplicationSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DescribeApplicationSnapshotResponsePrivate object with public implementation \a q.
 */
DescribeApplicationSnapshotResponsePrivate::DescribeApplicationSnapshotResponsePrivate(
    DescribeApplicationSnapshotResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DescribeApplicationSnapshot response element from \a xml.
 */
void DescribeApplicationSnapshotResponsePrivate::parseDescribeApplicationSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
