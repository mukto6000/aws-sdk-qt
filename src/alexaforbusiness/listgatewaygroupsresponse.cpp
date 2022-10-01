// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgatewaygroupsresponse.h"
#include "listgatewaygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListGatewayGroupsResponse
 * \brief The ListGatewayGroupsResponse class provides an interace for AlexaForBusiness ListGatewayGroups responses.
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
 * \sa AlexaForBusinessClient::listGatewayGroups
 */

/*!
 * Constructs a ListGatewayGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGatewayGroupsResponse::ListGatewayGroupsResponse(
        const ListGatewayGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ListGatewayGroupsResponsePrivate(this), parent)
{
    setRequest(new ListGatewayGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGatewayGroupsRequest * ListGatewayGroupsResponse::request() const
{
    Q_D(const ListGatewayGroupsResponse);
    return static_cast<const ListGatewayGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ListGatewayGroups \a response.
 */
void ListGatewayGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGatewayGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ListGatewayGroupsResponsePrivate
 * \brief The ListGatewayGroupsResponsePrivate class provides private implementation for ListGatewayGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListGatewayGroupsResponsePrivate object with public implementation \a q.
 */
ListGatewayGroupsResponsePrivate::ListGatewayGroupsResponsePrivate(
    ListGatewayGroupsResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ListGatewayGroups response element from \a xml.
 */
void ListGatewayGroupsResponsePrivate::parseListGatewayGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGatewayGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
