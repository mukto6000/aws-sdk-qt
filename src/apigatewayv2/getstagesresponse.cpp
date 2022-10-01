// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstagesresponse.h"
#include "getstagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetStagesResponse
 * \brief The GetStagesResponse class provides an interace for ApiGatewayV2 GetStages responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getStages
 */

/*!
 * Constructs a GetStagesResponse object for \a reply to \a request, with parent \a parent.
 */
GetStagesResponse::GetStagesResponse(
        const GetStagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetStagesResponsePrivate(this), parent)
{
    setRequest(new GetStagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStagesRequest * GetStagesResponse::request() const
{
    Q_D(const GetStagesResponse);
    return static_cast<const GetStagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetStages \a response.
 */
void GetStagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetStagesResponsePrivate
 * \brief The GetStagesResponsePrivate class provides private implementation for GetStagesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetStagesResponsePrivate object with public implementation \a q.
 */
GetStagesResponsePrivate::GetStagesResponsePrivate(
    GetStagesResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetStages response element from \a xml.
 */
void GetStagesResponsePrivate::parseGetStagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
