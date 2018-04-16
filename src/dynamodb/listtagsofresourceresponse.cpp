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

#include "listtagsofresourceresponse.h"
#include "listtagsofresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::ListTagsOfResourceResponse
 *
 * \brief The ListTagsOfResourceResponse class encapsulates DynamoDB ListTagsOfResource responses.
 *
 * \ingroup DynamoDB
 *
 *  <fullname>Amazon DynamoDB</fullname>
 * 
 *  Amazon DynamoDB is a fully managed NoSQL database service that provides fast and predictable performance with seamless
 *  scalability. DynamoDB lets you offload the administrative burdens of operating and scaling a distributed database, so
 *  that you don't have to worry about hardware provisioning, setup and configuration, replication, software patching, or
 *  cluster
 * 
 *  scaling>
 * 
 *  With DynamoDB, you can create database tables that can store and retrieve any amount of data, and serve any level of
 *  request traffic. You can scale up or scale down your tables' throughput capacity without downtime or performance
 *  degradation, and use the AWS Management Console to monitor resource utilization and performance
 * 
 *  metrics>
 * 
 *  DynamoDB automatically spreads the data and traffic for your tables over a sufficient number of servers to handle your
 *  throughput and storage requirements, while maintaining consistent and fast performance. All of your data is stored on
 *  solid state disks (SSDs) and automatically replicated across multiple Availability Zones in an AWS region, providing
 *  built-in high availability and data durability.
 *
 * \sa DynamoDBClient::listTagsOfResource
 */

/*!
 * @brief  Constructs a new ListTagsOfResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsOfResourceResponse::ListTagsOfResourceResponse(
        const ListTagsOfResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new ListTagsOfResourceResponsePrivate(this), parent)
{
    setRequest(new ListTagsOfResourceRequest(request));
    setReply(reply);
}

const ListTagsOfResourceRequest * ListTagsOfResourceResponse::request() const
{
    Q_D(const ListTagsOfResourceResponse);
    return static_cast<const ListTagsOfResourceRequest *>(d->request);
}

/*!
 * @brief  Parse a DynamoDB ListTagsOfResource response.
 *
 * @param  response  Response to parse.
 */
void ListTagsOfResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTagsOfResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListTagsOfResourceResponsePrivate
 *
 * \brief Private implementation for ListTagsOfResourceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTagsOfResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsOfResourceResponse instance.
 */
ListTagsOfResourceResponsePrivate::ListTagsOfResourceResponsePrivate(
    ListTagsOfResourceResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DynamoDB ListTagsOfResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsOfResourceResponsePrivate::parseListTagsOfResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsOfResourceResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
