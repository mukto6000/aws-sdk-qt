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

#include "createchannelmembershipresponse.h"
#include "createchannelmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelMembershipResponse
 * \brief The CreateChannelMembershipResponse class provides an interace for ChimeSdkMessaging CreateChannelMembership responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::createChannelMembership
 */

/*!
 * Constructs a CreateChannelMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
CreateChannelMembershipResponse::CreateChannelMembershipResponse(
        const CreateChannelMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new CreateChannelMembershipResponsePrivate(this), parent)
{
    setRequest(new CreateChannelMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateChannelMembershipRequest * CreateChannelMembershipResponse::request() const
{
    Q_D(const CreateChannelMembershipResponse);
    return static_cast<const CreateChannelMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging CreateChannelMembership \a response.
 */
void CreateChannelMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateChannelMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelMembershipResponsePrivate
 * \brief The CreateChannelMembershipResponsePrivate class provides private implementation for CreateChannelMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a CreateChannelMembershipResponsePrivate object with public implementation \a q.
 */
CreateChannelMembershipResponsePrivate::CreateChannelMembershipResponsePrivate(
    CreateChannelMembershipResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging CreateChannelMembership response element from \a xml.
 */
void CreateChannelMembershipResponsePrivate::parseCreateChannelMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChannelMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
