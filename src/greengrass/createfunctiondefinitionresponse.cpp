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

#include "createfunctiondefinitionresponse.h"
#include "createfunctiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateFunctionDefinitionResponse
 *
 * @brief  Handles Greengrass CreateFunctionDefinition responses.
 *
 * @see    GreengrassClient::createFunctionDefinition
 */

/**
 * @brief  Constructs a new CreateFunctionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFunctionDefinitionResponse::CreateFunctionDefinitionResponse(
        const CreateFunctionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateFunctionDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateFunctionDefinitionRequest(request));
    setReply(reply);
}

const CreateFunctionDefinitionRequest * CreateFunctionDefinitionResponse::request() const
{
    Q_D(const CreateFunctionDefinitionResponse);
    return static_cast<const CreateFunctionDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateFunctionDefinition response.
 *
 * @param  response  Response to parse.
 */
void CreateFunctionDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFunctionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFunctionDefinitionResponsePrivate
 *
 * @brief  Private implementation for CreateFunctionDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFunctionDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFunctionDefinitionResponse instance.
 */
CreateFunctionDefinitionResponsePrivate::CreateFunctionDefinitionResponsePrivate(
    CreateFunctionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateFunctionDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFunctionDefinitionResponsePrivate::parseCreateFunctionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFunctionDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws