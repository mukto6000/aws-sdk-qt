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

#include "deleteintegrationresponseresponse.h"
#include "deleteintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteIntegrationResponseResponse
 * \brief The DeleteIntegrationResponseResponse class provides an interace for ApiGateway DeleteIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteIntegrationResponse
 */

/*!
 * Constructs a DeleteIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIntegrationResponseResponse::DeleteIntegrationResponseResponse(
        const DeleteIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new DeleteIntegrationResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIntegrationResponseRequest * DeleteIntegrationResponseResponse::request() const
{
    Q_D(const DeleteIntegrationResponseResponse);
    return static_cast<const DeleteIntegrationResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteIntegrationResponse \a response.
 */
void DeleteIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteIntegrationResponseResponsePrivate
 * \brief The DeleteIntegrationResponseResponsePrivate class provides private implementation for DeleteIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteIntegrationResponseResponsePrivate object with public implementation \a q.
 */
DeleteIntegrationResponseResponsePrivate::DeleteIntegrationResponseResponsePrivate(
    DeleteIntegrationResponseResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteIntegrationResponse response element from \a xml.
 */
void DeleteIntegrationResponseResponsePrivate::parseDeleteIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
