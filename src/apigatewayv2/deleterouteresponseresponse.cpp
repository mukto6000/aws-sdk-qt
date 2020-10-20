/*
    Copyright 2013-2020 Paul Colby

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

#include "deleterouteresponseresponse.h"
#include "deleterouteresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteResponseResponse
 * \brief The DeleteRouteResponseResponse class provides an interace for ApiGatewayV2 DeleteRouteResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRouteResponse
 */

/*!
 * Constructs a DeleteRouteResponseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRouteResponseResponse::DeleteRouteResponseResponse(
        const DeleteRouteResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteRouteResponseResponsePrivate(this), parent)
{
    setRequest(new DeleteRouteResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRouteResponseRequest * DeleteRouteResponseResponse::request() const
{
    Q_D(const DeleteRouteResponseResponse);
    return static_cast<const DeleteRouteResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteRouteResponse \a response.
 */
void DeleteRouteResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRouteResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteResponseResponsePrivate
 * \brief The DeleteRouteResponseResponsePrivate class provides private implementation for DeleteRouteResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteResponseResponsePrivate object with public implementation \a q.
 */
DeleteRouteResponseResponsePrivate::DeleteRouteResponseResponsePrivate(
    DeleteRouteResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteRouteResponse response element from \a xml.
 */
void DeleteRouteResponseResponsePrivate::parseDeleteRouteResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
