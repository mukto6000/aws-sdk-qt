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

#include "comparefacesresponse.h"
#include "comparefacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  CompareFacesResponse
 *
 * @brief  Handles Rekognition CompareFaces responses.
 *
 * @see    RekognitionClient::compareFaces
 */

/**
 * @brief  Constructs a new CompareFacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompareFacesResponse::CompareFacesResponse(
        const CompareFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new CompareFacesResponsePrivate(this), parent)
{
    setRequest(new CompareFacesRequest(request));
    setReply(reply);
}

const CompareFacesRequest * CompareFacesResponse::request() const
{
    Q_D(const CompareFacesResponse);
    return static_cast<const CompareFacesRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition CompareFaces response.
 *
 * @param  response  Response to parse.
 */
void CompareFacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(CompareFacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CompareFacesResponsePrivate
 *
 * @brief  Private implementation for CompareFacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompareFacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CompareFacesResponse instance.
 */
CompareFacesResponsePrivate::CompareFacesResponsePrivate(
    CompareFacesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition CompareFacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CompareFacesResponsePrivate::parseCompareFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompareFacesResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws