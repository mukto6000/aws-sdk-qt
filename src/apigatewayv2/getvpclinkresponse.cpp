// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvpclinkresponse.h"
#include "getvpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetVpcLinkResponse
 * \brief The GetVpcLinkResponse class provides an interace for ApiGatewayV2 GetVpcLink responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getVpcLink
 */

/*!
 * Constructs a GetVpcLinkResponse object for \a reply to \a request, with parent \a parent.
 */
GetVpcLinkResponse::GetVpcLinkResponse(
        const GetVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetVpcLinkResponsePrivate(this), parent)
{
    setRequest(new GetVpcLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVpcLinkRequest * GetVpcLinkResponse::request() const
{
    Q_D(const GetVpcLinkResponse);
    return static_cast<const GetVpcLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetVpcLink \a response.
 */
void GetVpcLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetVpcLinkResponsePrivate
 * \brief The GetVpcLinkResponsePrivate class provides private implementation for GetVpcLinkResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetVpcLinkResponsePrivate object with public implementation \a q.
 */
GetVpcLinkResponsePrivate::GetVpcLinkResponsePrivate(
    GetVpcLinkResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetVpcLink response element from \a xml.
 */
void GetVpcLinkResponsePrivate::parseGetVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVpcLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
