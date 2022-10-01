// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getroutesresponse.h"
#include "getroutesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRoutesResponse
 * \brief The GetRoutesResponse class provides an interace for ApiGatewayV2 GetRoutes responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRoutes
 */

/*!
 * Constructs a GetRoutesResponse object for \a reply to \a request, with parent \a parent.
 */
GetRoutesResponse::GetRoutesResponse(
        const GetRoutesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetRoutesResponsePrivate(this), parent)
{
    setRequest(new GetRoutesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRoutesRequest * GetRoutesResponse::request() const
{
    Q_D(const GetRoutesResponse);
    return static_cast<const GetRoutesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetRoutes \a response.
 */
void GetRoutesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRoutesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetRoutesResponsePrivate
 * \brief The GetRoutesResponsePrivate class provides private implementation for GetRoutesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRoutesResponsePrivate object with public implementation \a q.
 */
GetRoutesResponsePrivate::GetRoutesResponsePrivate(
    GetRoutesResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetRoutes response element from \a xml.
 */
void GetRoutesResponsePrivate::parseGetRoutesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoutesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
