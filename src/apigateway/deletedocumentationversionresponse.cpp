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

#include "deletedocumentationversionresponse.h"
#include "deletedocumentationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteDocumentationVersionResponse
 * \brief The DeleteDocumentationVersionResponse class provides an interace for APIGateway DeleteDocumentationVersion responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteDocumentationVersion
 */

/*!
 * Constructs a DeleteDocumentationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDocumentationVersionResponse::DeleteDocumentationVersionResponse(
        const DeleteDocumentationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteDocumentationVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteDocumentationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDocumentationVersionRequest * DeleteDocumentationVersionResponse::request() const
{
    return static_cast<const DeleteDocumentationVersionRequest *>(APIGatewayResponse::request());
}

/*!
 * \reimp
 * Parses a successful APIGateway DeleteDocumentationVersion \a response.
 */
void DeleteDocumentationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDocumentationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteDocumentationVersionResponsePrivate
 * \brief The DeleteDocumentationVersionResponsePrivate class provides private implementation for DeleteDocumentationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteDocumentationVersionResponsePrivate object with public implementation \a q.
 */
DeleteDocumentationVersionResponsePrivate::DeleteDocumentationVersionResponsePrivate(
    DeleteDocumentationVersionResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteDocumentationVersion response element from \a xml.
 */
void DeleteDocumentationVersionResponsePrivate::parseDeleteDocumentationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDocumentationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
