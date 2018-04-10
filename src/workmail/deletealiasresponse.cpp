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

#include "deletealiasresponse.h"
#include "deletealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  DeleteAliasResponse
 *
 * @brief  Handles WorkMail DeleteAlias responses.
 *
 * @see    WorkMailClient::deleteAlias
 */

/**
 * @brief  Constructs a new DeleteAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAliasResponse::DeleteAliasResponse(
        const DeleteAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DeleteAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteAliasRequest(request));
    setReply(reply);
}

const DeleteAliasRequest * DeleteAliasResponse::request() const
{
    Q_D(const DeleteAliasResponse);
    return static_cast<const DeleteAliasRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DeleteAlias response.
 *
 * @param  response  Response to parse.
 */
void DeleteAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAliasResponsePrivate
 *
 * @brief  Private implementation for DeleteAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAliasResponse instance.
 */
DeleteAliasResponsePrivate::DeleteAliasResponsePrivate(
    DeleteAliasResponse * const q) : WorkMailResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DeleteAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAliasResponsePrivate::parseDeleteAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAliasResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws