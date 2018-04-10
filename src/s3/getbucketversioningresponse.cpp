/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbucketversioningresponse.h"
#include "getbucketversioningresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  GetBucketVersioningResponse
 *
 * @brief  Handles S3 GetBucketVersioning responses.
 *
 * @see    S3Client::getBucketVersioning
 */

/**
 * @brief  Constructs a new GetBucketVersioningResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketVersioningResponse::GetBucketVersioningResponse(
        const GetBucketVersioningRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketVersioningResponsePrivate(this), parent)
{
    setRequest(new GetBucketVersioningRequest(request));
    setReply(reply);
}

const GetBucketVersioningRequest * GetBucketVersioningResponse::request() const
{
    Q_D(const GetBucketVersioningResponse);
    return static_cast<const GetBucketVersioningRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketVersioning response.
 *
 * @param  response  Response to parse.
 */
void GetBucketVersioningResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketVersioningResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketVersioningResponsePrivate
 *
 * @brief  Private implementation for GetBucketVersioningResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketVersioningResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketVersioningResponse instance.
 */
GetBucketVersioningResponsePrivate::GetBucketVersioningResponsePrivate(
    GetBucketVersioningResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketVersioningResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketVersioningResponsePrivate::parseGetBucketVersioningResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketVersioningResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws