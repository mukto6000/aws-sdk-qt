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

#include "deletecacheclusterresponse.h"
#include "deletecacheclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  DeleteCacheClusterResponse
 *
 * @brief  Handles ElastiCache DeleteCacheCluster responses.
 *
 * @see    ElastiCacheClient::deleteCacheCluster
 */

/**
 * @brief  Constructs a new DeleteCacheClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCacheClusterResponse::DeleteCacheClusterResponse(
        const DeleteCacheClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteCacheClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteCacheClusterRequest(request));
    setReply(reply);
}

const DeleteCacheClusterRequest * DeleteCacheClusterResponse::request() const
{
    Q_D(const DeleteCacheClusterResponse);
    return static_cast<const DeleteCacheClusterRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DeleteCacheCluster response.
 *
 * @param  response  Response to parse.
 */
void DeleteCacheClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCacheClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCacheClusterResponsePrivate
 *
 * @brief  Private implementation for DeleteCacheClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCacheClusterResponse instance.
 */
DeleteCacheClusterResponsePrivate::DeleteCacheClusterResponsePrivate(
    DeleteCacheClusterResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DeleteCacheClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCacheClusterResponsePrivate::parseDeleteCacheClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCacheClusterResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws