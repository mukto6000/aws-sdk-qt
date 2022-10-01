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

#include "getvpclinksrequest.h"
#include "getvpclinksrequest_p.h"
#include "getvpclinksresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetVpcLinksRequest
 * \brief The GetVpcLinksRequest class provides an interface for ApiGateway GetVpcLinks requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getVpcLinks
 */

/*!
 * Constructs a copy of \a other.
 */
GetVpcLinksRequest::GetVpcLinksRequest(const GetVpcLinksRequest &other)
    : ApiGatewayRequest(new GetVpcLinksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVpcLinksRequest object.
 */
GetVpcLinksRequest::GetVpcLinksRequest()
    : ApiGatewayRequest(new GetVpcLinksRequestPrivate(ApiGatewayRequest::GetVpcLinksAction, this))
{

}

/*!
 * \reimp
 */
bool GetVpcLinksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVpcLinksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVpcLinksRequest::response(QNetworkReply * const reply) const
{
    return new GetVpcLinksResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetVpcLinksRequestPrivate
 * \brief The GetVpcLinksRequestPrivate class provides private implementation for GetVpcLinksRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetVpcLinksRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetVpcLinksRequestPrivate::GetVpcLinksRequestPrivate(
    const ApiGatewayRequest::Action action, GetVpcLinksRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVpcLinksRequest
 * class' copy constructor.
 */
GetVpcLinksRequestPrivate::GetVpcLinksRequestPrivate(
    const GetVpcLinksRequestPrivate &other, GetVpcLinksRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
