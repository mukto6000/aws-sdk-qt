// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrestapiresponse.h"
#include "getrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetRestApiResponse
 * \brief The GetRestApiResponse class provides an interace for ApiGateway GetRestApi responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getRestApi
 */

/*!
 * Constructs a GetRestApiResponse object for \a reply to \a request, with parent \a parent.
 */
GetRestApiResponse::GetRestApiResponse(
        const GetRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetRestApiResponsePrivate(this), parent)
{
    setRequest(new GetRestApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRestApiRequest * GetRestApiResponse::request() const
{
    Q_D(const GetRestApiResponse);
    return static_cast<const GetRestApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetRestApi \a response.
 */
void GetRestApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetRestApiResponsePrivate
 * \brief The GetRestApiResponsePrivate class provides private implementation for GetRestApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetRestApiResponsePrivate object with public implementation \a q.
 */
GetRestApiResponsePrivate::GetRestApiResponsePrivate(
    GetRestApiResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetRestApi response element from \a xml.
 */
void GetRestApiResponsePrivate::parseGetRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRestApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
