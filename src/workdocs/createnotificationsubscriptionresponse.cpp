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

#include "createnotificationsubscriptionresponse.h"
#include "createnotificationsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  CreateNotificationSubscriptionResponse
 *
 * @brief  Handles WorkDocs CreateNotificationSubscription responses.
 *
 * @see    WorkDocsClient::createNotificationSubscription
 */

/**
 * @brief  Constructs a new CreateNotificationSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNotificationSubscriptionResponse::CreateNotificationSubscriptionResponse(
        const CreateNotificationSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new CreateNotificationSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateNotificationSubscriptionRequest(request));
    setReply(reply);
}

const CreateNotificationSubscriptionRequest * CreateNotificationSubscriptionResponse::request() const
{
    Q_D(const CreateNotificationSubscriptionResponse);
    return static_cast<const CreateNotificationSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs CreateNotificationSubscription response.
 *
 * @param  response  Response to parse.
 */
void CreateNotificationSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateNotificationSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateNotificationSubscriptionResponsePrivate
 *
 * @brief  Private implementation for CreateNotificationSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNotificationSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNotificationSubscriptionResponse instance.
 */
CreateNotificationSubscriptionResponsePrivate::CreateNotificationSubscriptionResponsePrivate(
    CreateNotificationSubscriptionResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs CreateNotificationSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNotificationSubscriptionResponsePrivate::parseCreateNotificationSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNotificationSubscriptionResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws