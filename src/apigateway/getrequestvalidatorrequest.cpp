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

#include "getrequestvalidatorrequest.h"
#include "getrequestvalidatorrequest_p.h"
#include "getrequestvalidatorresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorRequest
 * \brief The GetRequestValidatorRequest class provides an interface for ApiGateway GetRequestValidator requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getRequestValidator
 */

/*!
 * Constructs a copy of \a other.
 */
GetRequestValidatorRequest::GetRequestValidatorRequest(const GetRequestValidatorRequest &other)
    : ApiGatewayRequest(new GetRequestValidatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRequestValidatorRequest object.
 */
GetRequestValidatorRequest::GetRequestValidatorRequest()
    : ApiGatewayRequest(new GetRequestValidatorRequestPrivate(ApiGatewayRequest::GetRequestValidatorAction, this))
{

}

/*!
 * \reimp
 */
bool GetRequestValidatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRequestValidatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRequestValidatorRequest::response(QNetworkReply * const reply) const
{
    return new GetRequestValidatorResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorRequestPrivate
 * \brief The GetRequestValidatorRequestPrivate class provides private implementation for GetRequestValidatorRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetRequestValidatorRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetRequestValidatorRequestPrivate::GetRequestValidatorRequestPrivate(
    const ApiGatewayRequest::Action action, GetRequestValidatorRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRequestValidatorRequest
 * class' copy constructor.
 */
GetRequestValidatorRequestPrivate::GetRequestValidatorRequestPrivate(
    const GetRequestValidatorRequestPrivate &other, GetRequestValidatorRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
