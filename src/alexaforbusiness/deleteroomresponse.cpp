// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteroomresponse.h"
#include "deleteroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomResponse
 * \brief The DeleteRoomResponse class provides an interace for AlexaForBusiness DeleteRoom responses.
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
 * \sa AlexaForBusinessClient::deleteRoom
 */

/*!
 * Constructs a DeleteRoomResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRoomResponse::DeleteRoomResponse(
        const DeleteRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteRoomResponsePrivate(this), parent)
{
    setRequest(new DeleteRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRoomRequest * DeleteRoomResponse::request() const
{
    Q_D(const DeleteRoomResponse);
    return static_cast<const DeleteRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteRoom \a response.
 */
void DeleteRoomResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomResponsePrivate
 * \brief The DeleteRoomResponsePrivate class provides private implementation for DeleteRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteRoomResponsePrivate object with public implementation \a q.
 */
DeleteRoomResponsePrivate::DeleteRoomResponsePrivate(
    DeleteRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteRoom response element from \a xml.
 */
void DeleteRoomResponsePrivate::parseDeleteRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRoomResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
