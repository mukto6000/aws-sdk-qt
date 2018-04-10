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

#include "deleteroleresponse.h"
#include "deleteroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteRoleResponse
 *
 * @brief  Handles IAM DeleteRole responses.
 *
 * @see    IAMClient::deleteRole
 */

/**
 * @brief  Constructs a new DeleteRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRoleResponse::DeleteRoleResponse(
        const DeleteRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteRoleResponsePrivate(this), parent)
{
    setRequest(new DeleteRoleRequest(request));
    setReply(reply);
}

const DeleteRoleRequest * DeleteRoleResponse::request() const
{
    Q_D(const DeleteRoleResponse);
    return static_cast<const DeleteRoleRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteRole response.
 *
 * @param  response  Response to parse.
 */
void DeleteRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRoleResponsePrivate
 *
 * @brief  Private implementation for DeleteRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRoleResponse instance.
 */
DeleteRoleResponsePrivate::DeleteRoleResponsePrivate(
    DeleteRoleResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRoleResponsePrivate::parseDeleteRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRoleResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws