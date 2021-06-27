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

#include "getcontactreachabilitystatusresponse.h"
#include "getcontactreachabilitystatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetContactReachabilityStatusResponse
 * \brief The GetContactReachabilityStatusResponse class provides an interace for Route53Domains GetContactReachabilityStatus responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getContactReachabilityStatus
 */

/*!
 * Constructs a GetContactReachabilityStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactReachabilityStatusResponse::GetContactReachabilityStatusResponse(
        const GetContactReachabilityStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new GetContactReachabilityStatusResponsePrivate(this), parent)
{
    setRequest(new GetContactReachabilityStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactReachabilityStatusRequest * GetContactReachabilityStatusResponse::request() const
{
    return static_cast<const GetContactReachabilityStatusRequest *>(Route53DomainsResponse::request());
}

/*!
 * \reimp
 * Parses a successful Route53Domains GetContactReachabilityStatus \a response.
 */
void GetContactReachabilityStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactReachabilityStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::GetContactReachabilityStatusResponsePrivate
 * \brief The GetContactReachabilityStatusResponsePrivate class provides private implementation for GetContactReachabilityStatusResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a GetContactReachabilityStatusResponsePrivate object with public implementation \a q.
 */
GetContactReachabilityStatusResponsePrivate::GetContactReachabilityStatusResponsePrivate(
    GetContactReachabilityStatusResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains GetContactReachabilityStatus response element from \a xml.
 */
void GetContactReachabilityStatusResponsePrivate::parseGetContactReachabilityStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactReachabilityStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
