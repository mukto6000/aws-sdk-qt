/*
    Copyright 2013-2020 Paul Colby

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

#include "putmethodresponse.h"
#include "putmethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutMethodResponse
 * \brief The PutMethodResponse class provides an interace for APIGateway PutMethod responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putMethod
 */

/*!
 * Constructs a PutMethodResponse object for \a reply to \a request, with parent \a parent.
 */
PutMethodResponse::PutMethodResponse(
        const PutMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutMethodResponsePrivate(this), parent)
{
    setRequest(new PutMethodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutMethodRequest * PutMethodResponse::request() const
{
    Q_D(const PutMethodResponse);
    return static_cast<const PutMethodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway PutMethod \a response.
 */
void PutMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::PutMethodResponsePrivate
 * \brief The PutMethodResponsePrivate class provides private implementation for PutMethodResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutMethodResponsePrivate object with public implementation \a q.
 */
PutMethodResponsePrivate::PutMethodResponsePrivate(
    PutMethodResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway PutMethod response element from \a xml.
 */
void PutMethodResponsePrivate::parsePutMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
