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

#include "getserversresponse.h"
#include "getserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/**
 * @class  GetServersResponse
 *
 * @brief  Handles SMS GetServers responses.
 *
 * @see    SMSClient::getServers
 */

/**
 * @brief  Constructs a new GetServersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetServersResponse::GetServersResponse(
        const GetServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new GetServersResponsePrivate(this), parent)
{
    setRequest(new GetServersRequest(request));
    setReply(reply);
}

const GetServersRequest * GetServersResponse::request() const
{
    Q_D(const GetServersResponse);
    return static_cast<const GetServersRequest *>(d->request);
}

/**
 * @brief  Parse a SMS GetServers response.
 *
 * @param  response  Response to parse.
 */
void GetServersResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetServersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetServersResponsePrivate
 *
 * @brief  Private implementation for GetServersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetServersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetServersResponse instance.
 */
GetServersResponsePrivate::GetServersResponsePrivate(
    GetServersResponse * const q) : SMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SMS GetServersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetServersResponsePrivate::parseGetServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServersResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws