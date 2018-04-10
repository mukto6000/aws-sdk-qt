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

#include "deregisterfromworkmailresponse.h"
#include "deregisterfromworkmailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  DeregisterFromWorkMailResponse
 *
 * @brief  Handles WorkMail DeregisterFromWorkMail responses.
 *
 * @see    WorkMailClient::deregisterFromWorkMail
 */

/**
 * @brief  Constructs a new DeregisterFromWorkMailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterFromWorkMailResponse::DeregisterFromWorkMailResponse(
        const DeregisterFromWorkMailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DeregisterFromWorkMailResponsePrivate(this), parent)
{
    setRequest(new DeregisterFromWorkMailRequest(request));
    setReply(reply);
}

const DeregisterFromWorkMailRequest * DeregisterFromWorkMailResponse::request() const
{
    Q_D(const DeregisterFromWorkMailResponse);
    return static_cast<const DeregisterFromWorkMailRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DeregisterFromWorkMail response.
 *
 * @param  response  Response to parse.
 */
void DeregisterFromWorkMailResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeregisterFromWorkMailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterFromWorkMailResponsePrivate
 *
 * @brief  Private implementation for DeregisterFromWorkMailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterFromWorkMailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterFromWorkMailResponse instance.
 */
DeregisterFromWorkMailResponsePrivate::DeregisterFromWorkMailResponsePrivate(
    DeregisterFromWorkMailResponse * const q) : WorkMailResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DeregisterFromWorkMailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterFromWorkMailResponsePrivate::parseDeregisterFromWorkMailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterFromWorkMailResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws