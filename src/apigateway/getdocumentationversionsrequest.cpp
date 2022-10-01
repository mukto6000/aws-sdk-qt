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

#include "getdocumentationversionsrequest.h"
#include "getdocumentationversionsrequest_p.h"
#include "getdocumentationversionsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetDocumentationVersionsRequest
 * \brief The GetDocumentationVersionsRequest class provides an interface for ApiGateway GetDocumentationVersions requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getDocumentationVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetDocumentationVersionsRequest::GetDocumentationVersionsRequest(const GetDocumentationVersionsRequest &other)
    : ApiGatewayRequest(new GetDocumentationVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDocumentationVersionsRequest object.
 */
GetDocumentationVersionsRequest::GetDocumentationVersionsRequest()
    : ApiGatewayRequest(new GetDocumentationVersionsRequestPrivate(ApiGatewayRequest::GetDocumentationVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDocumentationVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDocumentationVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetDocumentationVersionsRequestPrivate
 * \brief The GetDocumentationVersionsRequestPrivate class provides private implementation for GetDocumentationVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetDocumentationVersionsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetDocumentationVersionsRequestPrivate::GetDocumentationVersionsRequestPrivate(
    const ApiGatewayRequest::Action action, GetDocumentationVersionsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationVersionsRequest
 * class' copy constructor.
 */
GetDocumentationVersionsRequestPrivate::GetDocumentationVersionsRequestPrivate(
    const GetDocumentationVersionsRequestPrivate &other, GetDocumentationVersionsRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
