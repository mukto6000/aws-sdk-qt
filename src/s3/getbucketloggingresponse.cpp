/*
    Copyright 2013-2021 Paul Colby

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

#include "getbucketloggingresponse.h"
#include "getbucketloggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLoggingResponse
 * \brief The GetBucketLoggingResponse class provides an interace for S3 GetBucketLogging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLogging
 */

/*!
 * Constructs a GetBucketLoggingResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketLoggingResponse::GetBucketLoggingResponse(
        const GetBucketLoggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketLoggingResponsePrivate(this), parent)
{
    setRequest(new GetBucketLoggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketLoggingRequest * GetBucketLoggingResponse::request() const
{
    Q_D(const GetBucketLoggingResponse);
    return static_cast<const GetBucketLoggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketLogging \a response.
 */
void GetBucketLoggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketLoggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketLoggingResponsePrivate
 * \brief The GetBucketLoggingResponsePrivate class provides private implementation for GetBucketLoggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLoggingResponsePrivate object with public implementation \a q.
 */
GetBucketLoggingResponsePrivate::GetBucketLoggingResponsePrivate(
    GetBucketLoggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketLogging response element from \a xml.
 */
void GetBucketLoggingResponsePrivate::parseGetBucketLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLoggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
