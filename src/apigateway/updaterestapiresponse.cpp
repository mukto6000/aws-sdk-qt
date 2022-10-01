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

#include "updaterestapiresponse.h"
#include "updaterestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateRestApiResponse
 * \brief The UpdateRestApiResponse class provides an interace for ApiGateway UpdateRestApi responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateRestApi
 */

/*!
 * Constructs a UpdateRestApiResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRestApiResponse::UpdateRestApiResponse(
        const UpdateRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateRestApiResponsePrivate(this), parent)
{
    setRequest(new UpdateRestApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRestApiRequest * UpdateRestApiResponse::request() const
{
    Q_D(const UpdateRestApiResponse);
    return static_cast<const UpdateRestApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateRestApi \a response.
 */
void UpdateRestApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateRestApiResponsePrivate
 * \brief The UpdateRestApiResponsePrivate class provides private implementation for UpdateRestApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateRestApiResponsePrivate object with public implementation \a q.
 */
UpdateRestApiResponsePrivate::UpdateRestApiResponsePrivate(
    UpdateRestApiResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateRestApi response element from \a xml.
 */
void UpdateRestApiResponsePrivate::parseUpdateRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRestApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
