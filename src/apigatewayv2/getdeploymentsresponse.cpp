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

#include "getdeploymentsresponse.h"
#include "getdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetDeploymentsResponse
 * \brief The GetDeploymentsResponse class provides an interace for ApiGatewayV2 GetDeployments responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getDeployments
 */

/*!
 * Constructs a GetDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeploymentsResponse::GetDeploymentsResponse(
        const GetDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetDeploymentsResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeploymentsRequest * GetDeploymentsResponse::request() const
{
    Q_D(const GetDeploymentsResponse);
    return static_cast<const GetDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetDeployments \a response.
 */
void GetDeploymentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetDeploymentsResponsePrivate
 * \brief The GetDeploymentsResponsePrivate class provides private implementation for GetDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetDeploymentsResponsePrivate object with public implementation \a q.
 */
GetDeploymentsResponsePrivate::GetDeploymentsResponsePrivate(
    GetDeploymentsResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetDeployments response element from \a xml.
 */
void GetDeploymentsResponsePrivate::parseGetDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
