// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchcontactsresponse.h"
#include "searchcontactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchContactsResponse
 * \brief The SearchContactsResponse class provides an interace for AlexaForBusiness SearchContacts responses.
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
 * \sa AlexaForBusinessClient::searchContacts
 */

/*!
 * Constructs a SearchContactsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchContactsResponse::SearchContactsResponse(
        const SearchContactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchContactsResponsePrivate(this), parent)
{
    setRequest(new SearchContactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchContactsRequest * SearchContactsResponse::request() const
{
    Q_D(const SearchContactsResponse);
    return static_cast<const SearchContactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness SearchContacts \a response.
 */
void SearchContactsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchContactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::SearchContactsResponsePrivate
 * \brief The SearchContactsResponsePrivate class provides private implementation for SearchContactsResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchContactsResponsePrivate object with public implementation \a q.
 */
SearchContactsResponsePrivate::SearchContactsResponsePrivate(
    SearchContactsResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness SearchContacts response element from \a xml.
 */
void SearchContactsResponsePrivate::parseSearchContactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchContactsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
