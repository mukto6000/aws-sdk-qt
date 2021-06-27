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

#include "listtrafficpolicyinstancesbyhostedzoneresponse.h"
#include "listtrafficpolicyinstancesbyhostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByHostedZoneResponse
 * \brief The ListTrafficPolicyInstancesByHostedZoneResponse class provides an interace for Route53 ListTrafficPolicyInstancesByHostedZone responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listTrafficPolicyInstancesByHostedZone
 */

/*!
 * Constructs a ListTrafficPolicyInstancesByHostedZoneResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrafficPolicyInstancesByHostedZoneResponse::ListTrafficPolicyInstancesByHostedZoneResponse(
        const ListTrafficPolicyInstancesByHostedZoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPolicyInstancesByHostedZoneResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPolicyInstancesByHostedZoneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrafficPolicyInstancesByHostedZoneRequest * ListTrafficPolicyInstancesByHostedZoneResponse::request() const
{
    return static_cast<const ListTrafficPolicyInstancesByHostedZoneRequest *>(Route53Response::request());
}

/*!
 * \reimp
 * Parses a successful Route53 ListTrafficPolicyInstancesByHostedZone \a response.
 */
void ListTrafficPolicyInstancesByHostedZoneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrafficPolicyInstancesByHostedZoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByHostedZoneResponsePrivate
 * \brief The ListTrafficPolicyInstancesByHostedZoneResponsePrivate class provides private implementation for ListTrafficPolicyInstancesByHostedZoneResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPolicyInstancesByHostedZoneResponsePrivate object with public implementation \a q.
 */
ListTrafficPolicyInstancesByHostedZoneResponsePrivate::ListTrafficPolicyInstancesByHostedZoneResponsePrivate(
    ListTrafficPolicyInstancesByHostedZoneResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListTrafficPolicyInstancesByHostedZone response element from \a xml.
 */
void ListTrafficPolicyInstancesByHostedZoneResponsePrivate::parseListTrafficPolicyInstancesByHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPolicyInstancesByHostedZoneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
