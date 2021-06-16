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

#include "getdnssecresponse.h"
#include "getdnssecresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetDNSSECResponse
 * \brief The GetDNSSECResponse class provides an interace for Route53 GetDNSSEC responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getDNSSEC
 */

/*!
 * Constructs a GetDNSSECResponse object for \a reply to \a request, with parent \a parent.
 */
GetDNSSECResponse::GetDNSSECResponse(
        const GetDNSSECRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetDNSSECResponsePrivate(this), parent)
{
    setRequest(new GetDNSSECRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDNSSECRequest * GetDNSSECResponse::request() const
{
    Q_D(const GetDNSSECResponse);
    return static_cast<const GetDNSSECRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetDNSSEC \a response.
 */
void GetDNSSECResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDNSSECResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetDNSSECResponsePrivate
 * \brief The GetDNSSECResponsePrivate class provides private implementation for GetDNSSECResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetDNSSECResponsePrivate object with public implementation \a q.
 */
GetDNSSECResponsePrivate::GetDNSSECResponsePrivate(
    GetDNSSECResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetDNSSEC response element from \a xml.
 */
void GetDNSSECResponsePrivate::parseGetDNSSECResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDNSSECResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
