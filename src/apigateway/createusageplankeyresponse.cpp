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

#include "createusageplankeyresponse.h"
#include "createusageplankeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateUsagePlanKeyResponse
 * \brief The CreateUsagePlanKeyResponse class provides an interace for ApiGateway CreateUsagePlanKey responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createUsagePlanKey
 */

/*!
 * Constructs a CreateUsagePlanKeyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUsagePlanKeyResponse::CreateUsagePlanKeyResponse(
        const CreateUsagePlanKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateUsagePlanKeyResponsePrivate(this), parent)
{
    setRequest(new CreateUsagePlanKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUsagePlanKeyRequest * CreateUsagePlanKeyResponse::request() const
{
    Q_D(const CreateUsagePlanKeyResponse);
    return static_cast<const CreateUsagePlanKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateUsagePlanKey \a response.
 */
void CreateUsagePlanKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUsagePlanKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateUsagePlanKeyResponsePrivate
 * \brief The CreateUsagePlanKeyResponsePrivate class provides private implementation for CreateUsagePlanKeyResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateUsagePlanKeyResponsePrivate object with public implementation \a q.
 */
CreateUsagePlanKeyResponsePrivate::CreateUsagePlanKeyResponsePrivate(
    CreateUsagePlanKeyResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateUsagePlanKey response element from \a xml.
 */
void CreateUsagePlanKeyResponsePrivate::parseCreateUsagePlanKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUsagePlanKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
