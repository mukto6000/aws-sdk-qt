// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainnameresponse.h"
#include "getdomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDomainNameResponse
 * \brief The GetDomainNameResponse class provides an interace for ApiGateway GetDomainName responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDomainName
 */

/*!
 * Constructs a GetDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainNameResponse::GetDomainNameResponse(
        const GetDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new GetDomainNameResponsePrivate(this), parent)
{
    setRequest(new GetDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainNameRequest * GetDomainNameResponse::request() const
{
    Q_D(const GetDomainNameResponse);
    return static_cast<const GetDomainNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway GetDomainName \a response.
 */
void GetDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::GetDomainNameResponsePrivate
 * \brief The GetDomainNameResponsePrivate class provides private implementation for GetDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDomainNameResponsePrivate object with public implementation \a q.
 */
GetDomainNameResponsePrivate::GetDomainNameResponsePrivate(
    GetDomainNameResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway GetDomainName response element from \a xml.
 */
void GetDomainNameResponsePrivate::parseGetDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
