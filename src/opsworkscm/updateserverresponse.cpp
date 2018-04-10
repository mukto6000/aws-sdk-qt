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

#include "updateserverresponse.h"
#include "updateserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorksCM {

/**
 * @class  UpdateServerResponse
 *
 * @brief  Handles OpsWorksCM UpdateServer responses.
 *
 * @see    OpsWorksCMClient::updateServer
 */

/**
 * @brief  Constructs a new UpdateServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateServerResponse::UpdateServerResponse(
        const UpdateServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCMResponse(new UpdateServerResponsePrivate(this), parent)
{
    setRequest(new UpdateServerRequest(request));
    setReply(reply);
}

const UpdateServerRequest * UpdateServerResponse::request() const
{
    Q_D(const UpdateServerResponse);
    return static_cast<const UpdateServerRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM UpdateServer response.
 *
 * @param  response  Response to parse.
 */
void UpdateServerResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateServerResponsePrivate
 *
 * @brief  Private implementation for UpdateServerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateServerResponse instance.
 */
UpdateServerResponsePrivate::UpdateServerResponsePrivate(
    UpdateServerResponse * const q) : OpsWorksCMResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM UpdateServerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateServerResponsePrivate::parseUpdateServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServerResponse"));
    /// @todo
}

} // namespace OpsWorksCM
} // namespace QtAws