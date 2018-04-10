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

#include "deregistertaskdefinitionresponse.h"
#include "deregistertaskdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  DeregisterTaskDefinitionResponse
 *
 * @brief  Handles ECS DeregisterTaskDefinition responses.
 *
 * @see    ECSClient::deregisterTaskDefinition
 */

/**
 * @brief  Constructs a new DeregisterTaskDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterTaskDefinitionResponse::DeregisterTaskDefinitionResponse(
        const DeregisterTaskDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new DeregisterTaskDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeregisterTaskDefinitionRequest(request));
    setReply(reply);
}

const DeregisterTaskDefinitionRequest * DeregisterTaskDefinitionResponse::request() const
{
    Q_D(const DeregisterTaskDefinitionResponse);
    return static_cast<const DeregisterTaskDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a ECS DeregisterTaskDefinition response.
 *
 * @param  response  Response to parse.
 */
void DeregisterTaskDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeregisterTaskDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterTaskDefinitionResponsePrivate
 *
 * @brief  Private implementation for DeregisterTaskDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTaskDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterTaskDefinitionResponse instance.
 */
DeregisterTaskDefinitionResponsePrivate::DeregisterTaskDefinitionResponsePrivate(
    DeregisterTaskDefinitionResponse * const q) : ECSResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECS DeregisterTaskDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterTaskDefinitionResponsePrivate::parseDeregisterTaskDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterTaskDefinitionResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws