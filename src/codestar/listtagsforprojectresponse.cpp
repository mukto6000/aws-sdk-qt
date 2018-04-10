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

#include "listtagsforprojectresponse.h"
#include "listtagsforprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/**
 * @class  ListTagsForProjectResponse
 *
 * @brief  Handles CodeStar ListTagsForProject responses.
 *
 * @see    CodeStarClient::listTagsForProject
 */

/**
 * @brief  Constructs a new ListTagsForProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsForProjectResponse::ListTagsForProjectResponse(
        const ListTagsForProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new ListTagsForProjectResponsePrivate(this), parent)
{
    setRequest(new ListTagsForProjectRequest(request));
    setReply(reply);
}

const ListTagsForProjectRequest * ListTagsForProjectResponse::request() const
{
    Q_D(const ListTagsForProjectResponse);
    return static_cast<const ListTagsForProjectRequest *>(d->request);
}

/**
 * @brief  Parse a CodeStar ListTagsForProject response.
 *
 * @param  response  Response to parse.
 */
void ListTagsForProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTagsForProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTagsForProjectResponsePrivate
 *
 * @brief  Private implementation for ListTagsForProjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsForProjectResponse instance.
 */
ListTagsForProjectResponsePrivate::ListTagsForProjectResponsePrivate(
    ListTagsForProjectResponse * const q) : CodeStarResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeStar ListTagsForProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsForProjectResponsePrivate::parseListTagsForProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForProjectResponse"));
    /// @todo
}

} // namespace CodeStar
} // namespace QtAws