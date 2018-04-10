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

#include "describestackresourcesresponse.h"
#include "describestackresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  DescribeStackResourcesResponse
 *
 * @brief  Handles CloudFormation DescribeStackResources responses.
 *
 * @see    CloudFormationClient::describeStackResources
 */

/**
 * @brief  Constructs a new DescribeStackResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStackResourcesResponse::DescribeStackResourcesResponse(
        const DescribeStackResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DescribeStackResourcesResponsePrivate(this), parent)
{
    setRequest(new DescribeStackResourcesRequest(request));
    setReply(reply);
}

const DescribeStackResourcesRequest * DescribeStackResourcesResponse::request() const
{
    Q_D(const DescribeStackResourcesResponse);
    return static_cast<const DescribeStackResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation DescribeStackResources response.
 *
 * @param  response  Response to parse.
 */
void DescribeStackResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeStackResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStackResourcesResponsePrivate
 *
 * @brief  Private implementation for DescribeStackResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStackResourcesResponse instance.
 */
DescribeStackResourcesResponsePrivate::DescribeStackResourcesResponsePrivate(
    DescribeStackResourcesResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation DescribeStackResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStackResourcesResponsePrivate::parseDescribeStackResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStackResourcesResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws