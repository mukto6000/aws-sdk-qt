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

#include "updateintegrationresponse.h"
#include "updateintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateIntegrationResponse
 * \brief The UpdateIntegrationResponse class provides an interace for ApiGateway UpdateIntegration responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateIntegration
 */

/*!
 * Constructs a UpdateIntegrationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIntegrationResponse::UpdateIntegrationResponse(
        const UpdateIntegrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateIntegrationResponsePrivate(this), parent)
{
    setRequest(new UpdateIntegrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIntegrationRequest * UpdateIntegrationResponse::request() const
{
    Q_D(const UpdateIntegrationResponse);
    return static_cast<const UpdateIntegrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateIntegration \a response.
 */
void UpdateIntegrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIntegrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateIntegrationResponsePrivate
 * \brief The UpdateIntegrationResponsePrivate class provides private implementation for UpdateIntegrationResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateIntegrationResponsePrivate object with public implementation \a q.
 */
UpdateIntegrationResponsePrivate::UpdateIntegrationResponsePrivate(
    UpdateIntegrationResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateIntegration response element from \a xml.
 */
void UpdateIntegrationResponsePrivate::parseUpdateIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIntegrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
