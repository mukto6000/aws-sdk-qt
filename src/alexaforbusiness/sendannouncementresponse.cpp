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

#include "sendannouncementresponse.h"
#include "sendannouncementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SendAnnouncementResponse
 * \brief The SendAnnouncementResponse class provides an interace for AlexaForBusiness SendAnnouncement responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::sendAnnouncement
 */

/*!
 * Constructs a SendAnnouncementResponse object for \a reply to \a request, with parent \a parent.
 */
SendAnnouncementResponse::SendAnnouncementResponse(
        const SendAnnouncementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SendAnnouncementResponsePrivate(this), parent)
{
    setRequest(new SendAnnouncementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendAnnouncementRequest * SendAnnouncementResponse::request() const
{
    return static_cast<const SendAnnouncementRequest *>(AlexaForBusinessResponse::request());
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness SendAnnouncement \a response.
 */
void SendAnnouncementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendAnnouncementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::SendAnnouncementResponsePrivate
 * \brief The SendAnnouncementResponsePrivate class provides private implementation for SendAnnouncementResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SendAnnouncementResponsePrivate object with public implementation \a q.
 */
SendAnnouncementResponsePrivate::SendAnnouncementResponsePrivate(
    SendAnnouncementResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness SendAnnouncement response element from \a xml.
 */
void SendAnnouncementResponsePrivate::parseSendAnnouncementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendAnnouncementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
