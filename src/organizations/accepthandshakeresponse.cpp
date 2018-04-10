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

#include "accepthandshakeresponse.h"
#include "accepthandshakeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  AcceptHandshakeResponse
 *
 * @brief  Handles Organizations AcceptHandshake responses.
 *
 * @see    OrganizationsClient::acceptHandshake
 */

/**
 * @brief  Constructs a new AcceptHandshakeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptHandshakeResponse::AcceptHandshakeResponse(
        const AcceptHandshakeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new AcceptHandshakeResponsePrivate(this), parent)
{
    setRequest(new AcceptHandshakeRequest(request));
    setReply(reply);
}

const AcceptHandshakeRequest * AcceptHandshakeResponse::request() const
{
    Q_D(const AcceptHandshakeResponse);
    return static_cast<const AcceptHandshakeRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations AcceptHandshake response.
 *
 * @param  response  Response to parse.
 */
void AcceptHandshakeResponse::parseSuccess(QIODevice &response)
{
    Q_D(AcceptHandshakeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AcceptHandshakeResponsePrivate
 *
 * @brief  Private implementation for AcceptHandshakeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptHandshakeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcceptHandshakeResponse instance.
 */
AcceptHandshakeResponsePrivate::AcceptHandshakeResponsePrivate(
    AcceptHandshakeResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations AcceptHandshakeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcceptHandshakeResponsePrivate::parseAcceptHandshakeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptHandshakeResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws