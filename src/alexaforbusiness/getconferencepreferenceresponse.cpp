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

#include "getconferencepreferenceresponse.h"
#include "getconferencepreferenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetConferencePreferenceResponse
 * \brief The GetConferencePreferenceResponse class provides an interace for AlexaForBusiness GetConferencePreference responses.
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
 * \sa AlexaForBusinessClient::getConferencePreference
 */

/*!
 * Constructs a GetConferencePreferenceResponse object for \a reply to \a request, with parent \a parent.
 */
GetConferencePreferenceResponse::GetConferencePreferenceResponse(
        const GetConferencePreferenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetConferencePreferenceResponsePrivate(this), parent)
{
    setRequest(new GetConferencePreferenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConferencePreferenceRequest * GetConferencePreferenceResponse::request() const
{
    Q_D(const GetConferencePreferenceResponse);
    return static_cast<const GetConferencePreferenceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness GetConferencePreference \a response.
 */
void GetConferencePreferenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConferencePreferenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::GetConferencePreferenceResponsePrivate
 * \brief The GetConferencePreferenceResponsePrivate class provides private implementation for GetConferencePreferenceResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetConferencePreferenceResponsePrivate object with public implementation \a q.
 */
GetConferencePreferenceResponsePrivate::GetConferencePreferenceResponsePrivate(
    GetConferencePreferenceResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness GetConferencePreference response element from \a xml.
 */
void GetConferencePreferenceResponsePrivate::parseGetConferencePreferenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConferencePreferenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
