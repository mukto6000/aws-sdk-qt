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

#include "getvaultaccesspolicyresponse.h"
#include "getvaultaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  GetVaultAccessPolicyResponse
 *
 * @brief  Handles Glacier GetVaultAccessPolicy responses.
 *
 * @see    GlacierClient::getVaultAccessPolicy
 */

/**
 * @brief  Constructs a new GetVaultAccessPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVaultAccessPolicyResponse::GetVaultAccessPolicyResponse(
        const GetVaultAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new GetVaultAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new GetVaultAccessPolicyRequest(request));
    setReply(reply);
}

const GetVaultAccessPolicyRequest * GetVaultAccessPolicyResponse::request() const
{
    Q_D(const GetVaultAccessPolicyResponse);
    return static_cast<const GetVaultAccessPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier GetVaultAccessPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetVaultAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetVaultAccessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetVaultAccessPolicyResponsePrivate
 *
 * @brief  Private implementation for GetVaultAccessPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetVaultAccessPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetVaultAccessPolicyResponse instance.
 */
GetVaultAccessPolicyResponsePrivate::GetVaultAccessPolicyResponsePrivate(
    GetVaultAccessPolicyResponse * const q) : GlacierResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glacier GetVaultAccessPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetVaultAccessPolicyResponsePrivate::parseGetVaultAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVaultAccessPolicyResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws