/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getdocumentationversionsresponse.h"
#include "getdocumentationversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDocumentationVersionsResponse
 *
 * \brief The GetDocumentationVersionsResponse class encapsulates APIGateway GetDocumentationVersions responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDocumentationVersions
 */

/*!
 * @brief  Constructs a new GetDocumentationVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentationVersionsResponse::GetDocumentationVersionsResponse(
        const GetDocumentationVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDocumentationVersionsResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationVersionsRequest(request));
    setReply(reply);
}

const GetDocumentationVersionsRequest * GetDocumentationVersionsResponse::request() const
{
    Q_D(const GetDocumentationVersionsResponse);
    return static_cast<const GetDocumentationVersionsRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway GetDocumentationVersions response.
 *
 * @param  response  Response to parse.
 */
void GetDocumentationVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDocumentationVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDocumentationVersionsResponsePrivate
 *
 * \brief Private implementation for GetDocumentationVersionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDocumentationVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDocumentationVersionsResponse instance.
 */
GetDocumentationVersionsResponsePrivate::GetDocumentationVersionsResponsePrivate(
    GetDocumentationVersionsResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway GetDocumentationVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDocumentationVersionsResponsePrivate::parseGetDocumentationVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationVersionsResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
