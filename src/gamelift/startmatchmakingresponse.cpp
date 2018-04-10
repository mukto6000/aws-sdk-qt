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

#include "startmatchmakingresponse.h"
#include "startmatchmakingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  StartMatchmakingResponse
 *
 * @brief  Handles GameLift StartMatchmaking responses.
 *
 * @see    GameLiftClient::startMatchmaking
 */

/**
 * @brief  Constructs a new StartMatchmakingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartMatchmakingResponse::StartMatchmakingResponse(
        const StartMatchmakingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new StartMatchmakingResponsePrivate(this), parent)
{
    setRequest(new StartMatchmakingRequest(request));
    setReply(reply);
}

const StartMatchmakingRequest * StartMatchmakingResponse::request() const
{
    Q_D(const StartMatchmakingResponse);
    return static_cast<const StartMatchmakingRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift StartMatchmaking response.
 *
 * @param  response  Response to parse.
 */
void StartMatchmakingResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartMatchmakingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartMatchmakingResponsePrivate
 *
 * @brief  Private implementation for StartMatchmakingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartMatchmakingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartMatchmakingResponse instance.
 */
StartMatchmakingResponsePrivate::StartMatchmakingResponsePrivate(
    StartMatchmakingResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift StartMatchmakingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartMatchmakingResponsePrivate::parseStartMatchmakingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMatchmakingResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws