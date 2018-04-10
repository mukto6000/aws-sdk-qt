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

#include "getsamlproviderresponse.h"
#include "getsamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  GetSAMLProviderResponse
 *
 * @brief  Handles IAM GetSAMLProvider responses.
 *
 * @see    IAMClient::getSAMLProvider
 */

/**
 * @brief  Constructs a new GetSAMLProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSAMLProviderResponse::GetSAMLProviderResponse(
        const GetSAMLProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new GetSAMLProviderRequest(request));
    setReply(reply);
}

const GetSAMLProviderRequest * GetSAMLProviderResponse::request() const
{
    Q_D(const GetSAMLProviderResponse);
    return static_cast<const GetSAMLProviderRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetSAMLProvider response.
 *
 * @param  response  Response to parse.
 */
void GetSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSAMLProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSAMLProviderResponsePrivate
 *
 * @brief  Private implementation for GetSAMLProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSAMLProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSAMLProviderResponse instance.
 */
GetSAMLProviderResponsePrivate::GetSAMLProviderResponsePrivate(
    GetSAMLProviderResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetSAMLProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSAMLProviderResponsePrivate::parseGetSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSAMLProviderResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws