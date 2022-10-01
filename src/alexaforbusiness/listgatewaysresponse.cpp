// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgatewaysresponse.h"
#include "listgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListGatewaysResponse
 * \brief The ListGatewaysResponse class provides an interace for AlexaForBusiness ListGateways responses.
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
 * \sa AlexaForBusinessClient::listGateways
 */

/*!
 * Constructs a ListGatewaysResponse object for \a reply to \a request, with parent \a parent.
 */
ListGatewaysResponse::ListGatewaysResponse(
        const ListGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ListGatewaysResponsePrivate(this), parent)
{
    setRequest(new ListGatewaysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGatewaysRequest * ListGatewaysResponse::request() const
{
    Q_D(const ListGatewaysResponse);
    return static_cast<const ListGatewaysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ListGateways \a response.
 */
void ListGatewaysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGatewaysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ListGatewaysResponsePrivate
 * \brief The ListGatewaysResponsePrivate class provides private implementation for ListGatewaysResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListGatewaysResponsePrivate object with public implementation \a q.
 */
ListGatewaysResponsePrivate::ListGatewaysResponsePrivate(
    ListGatewaysResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ListGateways response element from \a xml.
 */
void ListGatewaysResponsePrivate::parseListGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGatewaysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
