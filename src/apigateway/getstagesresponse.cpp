// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstagesresponse.h"
#include "getstagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetStagesResponse
 * \brief The GetStagesResponse class provides an interace for ApiGateway GetStages responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getStages
 */

/*!
 * Constructs a GetStagesResponse object for \a reply to \a request, with parent \a parent.
 */
GetStagesResponse::GetStagesResponse(
        const GetStagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetStagesResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway GetStages \a response.
 */
void GetStagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetStagesResponsePrivate
 * \brief The GetStagesResponsePrivate class provides private implementation for GetStagesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetStagesResponsePrivate object with public implementation \a q.
 */
GetStagesResponsePrivate::GetStagesResponsePrivate(
    GetStagesResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetStages response element from \a xml.
 */
void GetStagesResponsePrivate::parseGetStagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
