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

#include "registertaskdefinitionresponse.h"
#include "registertaskdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  RegisterTaskDefinitionResponse
 *
 * @brief  Handles ECS RegisterTaskDefinition responses.
 *
 * @see    ECSClient::registerTaskDefinition
 */

/**
 * @brief  Constructs a new RegisterTaskDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterTaskDefinitionResponse::RegisterTaskDefinitionResponse(
        const RegisterTaskDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new RegisterTaskDefinitionResponsePrivate(this), parent)
{
    setRequest(new RegisterTaskDefinitionRequest(request));
    setReply(reply);
}

const RegisterTaskDefinitionRequest * RegisterTaskDefinitionResponse::request() const
{
    Q_D(const RegisterTaskDefinitionResponse);
    return static_cast<const RegisterTaskDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a ECS RegisterTaskDefinition response.
 *
 * @param  response  Response to parse.
 */
void RegisterTaskDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterTaskDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterTaskDefinitionResponsePrivate
 *
 * @brief  Private implementation for RegisterTaskDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTaskDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterTaskDefinitionResponse instance.
 */
RegisterTaskDefinitionResponsePrivate::RegisterTaskDefinitionResponsePrivate(
    RegisterTaskDefinitionResponse * const q) : ECSResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECS RegisterTaskDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterTaskDefinitionResponsePrivate::parseRegisterTaskDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterTaskDefinitionResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws