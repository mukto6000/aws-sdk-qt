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

#include "getintegrationresponseresponse.h"
#include "getintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetIntegrationResponseResponse
 * \brief The GetIntegrationResponseResponse class provides an interace for ApiGateway GetIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getIntegrationResponse
 */

/*!
 * Constructs a GetIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntegrationResponseResponse::GetIntegrationResponseResponse(
        const GetIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new GetIntegrationResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntegrationResponseRequest * GetIntegrationResponseResponse::request() const
{
    Q_D(const GetIntegrationResponseResponse);
    return static_cast<const GetIntegrationResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetIntegrationResponse \a response.
 */
void GetIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetIntegrationResponseResponsePrivate
 * \brief The GetIntegrationResponseResponsePrivate class provides private implementation for GetIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetIntegrationResponseResponsePrivate object with public implementation \a q.
 */
GetIntegrationResponseResponsePrivate::GetIntegrationResponseResponsePrivate(
    GetIntegrationResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetIntegrationResponse response element from \a xml.
 */
void GetIntegrationResponseResponsePrivate::parseGetIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
