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

#include "deletebaiduchannelresponse.h"
#include "deletebaiduchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  DeleteBaiduChannelResponse
 *
 * @brief  Handles Pinpoint DeleteBaiduChannel responses.
 *
 * @see    PinpointClient::deleteBaiduChannel
 */

/**
 * @brief  Constructs a new DeleteBaiduChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBaiduChannelResponse::DeleteBaiduChannelResponse(
        const DeleteBaiduChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteBaiduChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteBaiduChannelRequest(request));
    setReply(reply);
}

const DeleteBaiduChannelRequest * DeleteBaiduChannelResponse::request() const
{
    Q_D(const DeleteBaiduChannelResponse);
    return static_cast<const DeleteBaiduChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint DeleteBaiduChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteBaiduChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBaiduChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBaiduChannelResponsePrivate
 *
 * @brief  Private implementation for DeleteBaiduChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBaiduChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBaiduChannelResponse instance.
 */
DeleteBaiduChannelResponsePrivate::DeleteBaiduChannelResponsePrivate(
    DeleteBaiduChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint DeleteBaiduChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBaiduChannelResponsePrivate::parseDeleteBaiduChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBaiduChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws