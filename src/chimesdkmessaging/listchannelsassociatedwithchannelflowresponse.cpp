/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listchannelsassociatedwithchannelflowresponse.h"
#include "listchannelsassociatedwithchannelflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelsAssociatedWithChannelFlowResponse
 * \brief The ListChannelsAssociatedWithChannelFlowResponse class provides an interace for ChimeSdkMessaging ListChannelsAssociatedWithChannelFlow responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelsAssociatedWithChannelFlow
 */

/*!
 * Constructs a ListChannelsAssociatedWithChannelFlowResponse object for \a reply to \a request, with parent \a parent.
 */
ListChannelsAssociatedWithChannelFlowResponse::ListChannelsAssociatedWithChannelFlowResponse(
        const ListChannelsAssociatedWithChannelFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new ListChannelsAssociatedWithChannelFlowResponsePrivate(this), parent)
{
    setRequest(new ListChannelsAssociatedWithChannelFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChannelsAssociatedWithChannelFlowRequest * ListChannelsAssociatedWithChannelFlowResponse::request() const
{
    Q_D(const ListChannelsAssociatedWithChannelFlowResponse);
    return static_cast<const ListChannelsAssociatedWithChannelFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging ListChannelsAssociatedWithChannelFlow \a response.
 */
void ListChannelsAssociatedWithChannelFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChannelsAssociatedWithChannelFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelsAssociatedWithChannelFlowResponsePrivate
 * \brief The ListChannelsAssociatedWithChannelFlowResponsePrivate class provides private implementation for ListChannelsAssociatedWithChannelFlowResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelsAssociatedWithChannelFlowResponsePrivate object with public implementation \a q.
 */
ListChannelsAssociatedWithChannelFlowResponsePrivate::ListChannelsAssociatedWithChannelFlowResponsePrivate(
    ListChannelsAssociatedWithChannelFlowResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging ListChannelsAssociatedWithChannelFlow response element from \a xml.
 */
void ListChannelsAssociatedWithChannelFlowResponsePrivate::parseListChannelsAssociatedWithChannelFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChannelsAssociatedWithChannelFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
