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

#include "deleteattributesresponse.h"
#include "deleteattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::DeleteAttributesResponse
 *
 * \brief The DeleteAttributesResponse class encapsulates ECS DeleteAttributes responses.
 *
 * \ingroup ECS
 *
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it
 *  easy to run, stop, and manage Docker containers on a cluster. You can host your cluster on a serverless infrastructure
 *  that is managed by Amazon ECS by launching your services or tasks using the Fargate launch type. For more control, you
 *  can host your tasks on a cluster of Amazon Elastic Compute Cloud (Amazon EC2) instances that you manage by using the EC2
 *  launch type. For more information about launch types, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon ECS Launch
 * 
 *  Types</a>>
 * 
 *  Amazon ECS lets you launch and stop container-based applications with simple API calls, allows you to get the state of
 *  your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. Amazon ECS eliminates the need for you to operate your own cluster
 *  management and configuration management systems or worry about scaling your management
 *
 * \sa ECSClient::deleteAttributes
 */

/*!
 * @brief  Constructs a new DeleteAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAttributesResponse::DeleteAttributesResponse(
        const DeleteAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new DeleteAttributesResponsePrivate(this), parent)
{
    setRequest(new DeleteAttributesRequest(request));
    setReply(reply);
}

const DeleteAttributesRequest * DeleteAttributesResponse::request() const
{
    Q_D(const DeleteAttributesResponse);
    return static_cast<const DeleteAttributesRequest *>(d->request);
}

/*!
 * @brief  Parse a ECS DeleteAttributes response.
 *
 * @param  response  Response to parse.
 */
void DeleteAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteAttributesResponsePrivate
 *
 * \brief Private implementation for DeleteAttributesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAttributesResponse instance.
 */
DeleteAttributesResponsePrivate::DeleteAttributesResponsePrivate(
    DeleteAttributesResponse * const q) : ECSResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ECS DeleteAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAttributesResponsePrivate::parseDeleteAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAttributesResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
