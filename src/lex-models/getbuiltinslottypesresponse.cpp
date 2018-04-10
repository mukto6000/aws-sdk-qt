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

#include "getbuiltinslottypesresponse.h"
#include "getbuiltinslottypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetBuiltinSlotTypesResponse
 *
 * @brief  Handles LexModelBuildingService GetBuiltinSlotTypes responses.
 *
 * @see    LexModelBuildingServiceClient::getBuiltinSlotTypes
 */

/**
 * @brief  Constructs a new GetBuiltinSlotTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBuiltinSlotTypesResponse::GetBuiltinSlotTypesResponse(
        const GetBuiltinSlotTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBuiltinSlotTypesResponsePrivate(this), parent)
{
    setRequest(new GetBuiltinSlotTypesRequest(request));
    setReply(reply);
}

const GetBuiltinSlotTypesRequest * GetBuiltinSlotTypesResponse::request() const
{
    Q_D(const GetBuiltinSlotTypesResponse);
    return static_cast<const GetBuiltinSlotTypesRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetBuiltinSlotTypes response.
 *
 * @param  response  Response to parse.
 */
void GetBuiltinSlotTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBuiltinSlotTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBuiltinSlotTypesResponsePrivate
 *
 * @brief  Private implementation for GetBuiltinSlotTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBuiltinSlotTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBuiltinSlotTypesResponse instance.
 */
GetBuiltinSlotTypesResponsePrivate::GetBuiltinSlotTypesResponsePrivate(
    GetBuiltinSlotTypesResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetBuiltinSlotTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBuiltinSlotTypesResponsePrivate::parseGetBuiltinSlotTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBuiltinSlotTypesResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws