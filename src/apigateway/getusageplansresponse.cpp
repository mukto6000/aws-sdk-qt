/*
    Copyright 2013-2018 Paul Colby

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

#include "getusageplansresponse.h"
#include "getusageplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetUsagePlansResponse
 * \brief The GetUsagePlansResponse class provides an interace for APIGateway GetUsagePlans responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getUsagePlans
 */

/*!
 * Constructs a GetUsagePlansResponse object for \a reply to \a request, with parent \a parent.
 */
GetUsagePlansResponse::GetUsagePlansResponse(
        const GetUsagePlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetUsagePlansResponsePrivate(this), parent)
{
    setRequest(new GetUsagePlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUsagePlansRequest * GetUsagePlansResponse::request() const
{
    Q_D(const GetUsagePlansResponse);
    return static_cast<const GetUsagePlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetUsagePlans \a response.
 */
void GetUsagePlansResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetUsagePlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetUsagePlansResponsePrivate
 * \brief The GetUsagePlansResponsePrivate class provides private implementation for GetUsagePlansResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetUsagePlansResponsePrivate object with public implementation \a q.
 */
GetUsagePlansResponsePrivate::GetUsagePlansResponsePrivate(
    GetUsagePlansResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetUsagePlans response element from \a xml.
 */
void GetUsagePlansResponsePrivate::parseGetUsagePlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsagePlansResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws