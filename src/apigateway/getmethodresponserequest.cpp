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

#include "getmethodresponserequest.h"
#include "getmethodresponserequest_p.h"
#include "getmethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetMethodResponseRequest
 * \brief The GetMethodResponseRequest class provides an interface for ApiGateway GetMethodResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getMethodResponse
 */

/*!
 * Constructs a copy of \a other.
 */
GetMethodResponseRequest::GetMethodResponseRequest(const GetMethodResponseRequest &other)
    : ApiGatewayRequest(new GetMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMethodResponseRequest object.
 */
GetMethodResponseRequest::GetMethodResponseRequest()
    : ApiGatewayRequest(new GetMethodResponseRequestPrivate(ApiGatewayRequest::GetMethodResponseAction, this))
{

}

/*!
 * \reimp
 */
bool GetMethodResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMethodResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetMethodResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetMethodResponseRequestPrivate
 * \brief The GetMethodResponseRequestPrivate class provides private implementation for GetMethodResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetMethodResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetMethodResponseRequestPrivate::GetMethodResponseRequestPrivate(
    const ApiGatewayRequest::Action action, GetMethodResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMethodResponseRequest
 * class' copy constructor.
 */
GetMethodResponseRequestPrivate::GetMethodResponseRequestPrivate(
    const GetMethodResponseRequestPrivate &other, GetMethodResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
