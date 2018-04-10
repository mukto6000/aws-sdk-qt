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

#include "describereservedcachenodesofferingsresponse.h"
#include "describereservedcachenodesofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  DescribeReservedCacheNodesOfferingsResponse
 *
 * @brief  Handles ElastiCache DescribeReservedCacheNodesOfferings responses.
 *
 * @see    ElastiCacheClient::describeReservedCacheNodesOfferings
 */

/**
 * @brief  Constructs a new DescribeReservedCacheNodesOfferingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedCacheNodesOfferingsResponse::DescribeReservedCacheNodesOfferingsResponse(
        const DescribeReservedCacheNodesOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeReservedCacheNodesOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedCacheNodesOfferingsRequest(request));
    setReply(reply);
}

const DescribeReservedCacheNodesOfferingsRequest * DescribeReservedCacheNodesOfferingsResponse::request() const
{
    Q_D(const DescribeReservedCacheNodesOfferingsResponse);
    return static_cast<const DescribeReservedCacheNodesOfferingsRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DescribeReservedCacheNodesOfferings response.
 *
 * @param  response  Response to parse.
 */
void DescribeReservedCacheNodesOfferingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReservedCacheNodesOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReservedCacheNodesOfferingsResponsePrivate
 *
 * @brief  Private implementation for DescribeReservedCacheNodesOfferingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedCacheNodesOfferingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReservedCacheNodesOfferingsResponse instance.
 */
DescribeReservedCacheNodesOfferingsResponsePrivate::DescribeReservedCacheNodesOfferingsResponsePrivate(
    DescribeReservedCacheNodesOfferingsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DescribeReservedCacheNodesOfferingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReservedCacheNodesOfferingsResponsePrivate::parseDescribeReservedCacheNodesOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedCacheNodesOfferingsResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws