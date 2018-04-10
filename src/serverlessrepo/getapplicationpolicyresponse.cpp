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

#include "getapplicationpolicyresponse.h"
#include "getapplicationpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServerlessApplicationRepository {

/**
 * @class  GetApplicationPolicyResponse
 *
 * @brief  Handles ServerlessApplicationRepository GetApplicationPolicy responses.
 *
 * @see    ServerlessApplicationRepositoryClient::getApplicationPolicy
 */

/**
 * @brief  Constructs a new GetApplicationPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApplicationPolicyResponse::GetApplicationPolicyResponse(
        const GetApplicationPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServerlessApplicationRepositoryResponse(new GetApplicationPolicyResponsePrivate(this), parent)
{
    setRequest(new GetApplicationPolicyRequest(request));
    setReply(reply);
}

const GetApplicationPolicyRequest * GetApplicationPolicyResponse::request() const
{
    Q_D(const GetApplicationPolicyResponse);
    return static_cast<const GetApplicationPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ServerlessApplicationRepository GetApplicationPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetApplicationPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetApplicationPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetApplicationPolicyResponsePrivate
 *
 * @brief  Private implementation for GetApplicationPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApplicationPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetApplicationPolicyResponse instance.
 */
GetApplicationPolicyResponsePrivate::GetApplicationPolicyResponsePrivate(
    GetApplicationPolicyResponse * const q) : ServerlessApplicationRepositoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServerlessApplicationRepository GetApplicationPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetApplicationPolicyResponsePrivate::parseGetApplicationPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationPolicyResponse"));
    /// @todo
}

} // namespace ServerlessApplicationRepository
} // namespace QtAws