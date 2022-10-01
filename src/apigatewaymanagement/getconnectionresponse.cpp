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

#include "getconnectionresponse.h"
#include "getconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayManagement {

/*!
 * \class QtAws::ApiGatewayManagement::GetConnectionResponse
 * \brief The GetConnectionResponse class provides an interace for ApiGatewayManagement GetConnection responses.
 *
 * \inmodule QtAwsApiGatewayManagement
 *
 *  The Amazon API Gateway Management API allows you to directly manage runtime aspects of your deployed APIs. To use it,
 *  you must explicitly set the SDK's endpoint to point to the endpoint of your deployed API. The endpoint will be of the
 *  form https://{api-id}.execute-api.{region}.amazonaws.com/{stage}, or will be the endpoint corresponding to your API's
 *  custom domain and base path, if
 *
 * \sa ApiGatewayManagementClient::getConnection
 */

/*!
 * Constructs a GetConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectionResponse::GetConnectionResponse(
        const GetConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayManagementResponse(new GetConnectionResponsePrivate(this), parent)
{
    setRequest(new GetConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectionRequest * GetConnectionResponse::request() const
{
    Q_D(const GetConnectionResponse);
    return static_cast<const GetConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayManagement GetConnection \a response.
 */
void GetConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayManagement::GetConnectionResponsePrivate
 * \brief The GetConnectionResponsePrivate class provides private implementation for GetConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayManagement
 */

/*!
 * Constructs a GetConnectionResponsePrivate object with public implementation \a q.
 */
GetConnectionResponsePrivate::GetConnectionResponsePrivate(
    GetConnectionResponse * const q) : ApiGatewayManagementResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayManagement GetConnection response element from \a xml.
 */
void GetConnectionResponsePrivate::parseGetConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayManagement
} // namespace QtAws
