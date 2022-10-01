// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchroomsresponse.h"
#include "searchroomsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchRoomsResponse
 * \brief The SearchRoomsResponse class provides an interace for AlexaForBusiness SearchRooms responses.
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
 * \sa AlexaForBusinessClient::searchRooms
 */

/*!
 * Constructs a SearchRoomsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchRoomsResponse::SearchRoomsResponse(
        const SearchRoomsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchRoomsResponsePrivate(this), parent)
{
    setRequest(new SearchRoomsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchRoomsRequest * SearchRoomsResponse::request() const
{
    Q_D(const SearchRoomsResponse);
    return static_cast<const SearchRoomsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness SearchRooms \a response.
 */
void SearchRoomsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchRoomsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::SearchRoomsResponsePrivate
 * \brief The SearchRoomsResponsePrivate class provides private implementation for SearchRoomsResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchRoomsResponsePrivate object with public implementation \a q.
 */
SearchRoomsResponsePrivate::SearchRoomsResponsePrivate(
    SearchRoomsResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness SearchRooms response element from \a xml.
 */
void SearchRoomsResponsePrivate::parseSearchRoomsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchRoomsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
