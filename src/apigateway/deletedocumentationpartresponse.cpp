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

#include "deletedocumentationpartresponse.h"
#include "deletedocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteDocumentationPartResponse
 * \brief The DeleteDocumentationPartResponse class provides an interace for APIGateway DeleteDocumentationPart responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteDocumentationPart
 */

/*!
 * Constructs a DeleteDocumentationPartResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDocumentationPartResponse::DeleteDocumentationPartResponse(
        const DeleteDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new DeleteDocumentationPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDocumentationPartRequest * DeleteDocumentationPartResponse::request() const
{
    Q_D(const DeleteDocumentationPartResponse);
    return static_cast<const DeleteDocumentationPartRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway DeleteDocumentationPart \a response.
 */
void DeleteDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDocumentationPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteDocumentationPartResponsePrivate
 * \brief The DeleteDocumentationPartResponsePrivate class provides private implementation for DeleteDocumentationPartResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteDocumentationPartResponsePrivate object with public implementation \a q.
 */
DeleteDocumentationPartResponsePrivate::DeleteDocumentationPartResponsePrivate(
    DeleteDocumentationPartResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteDocumentationPart response element from \a xml.
 */
void DeleteDocumentationPartResponsePrivate::parseDeleteDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDocumentationPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace APIGateway
} // namespace QtAws
