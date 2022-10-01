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

#include "createbasepathmappingrequest.h"
#include "createbasepathmappingrequest_p.h"
#include "createbasepathmappingresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateBasePathMappingRequest
 * \brief The CreateBasePathMappingRequest class provides an interface for ApiGateway CreateBasePathMapping requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createBasePathMapping
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBasePathMappingRequest::CreateBasePathMappingRequest(const CreateBasePathMappingRequest &other)
    : ApiGatewayRequest(new CreateBasePathMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBasePathMappingRequest object.
 */
CreateBasePathMappingRequest::CreateBasePathMappingRequest()
    : ApiGatewayRequest(new CreateBasePathMappingRequestPrivate(ApiGatewayRequest::CreateBasePathMappingAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBasePathMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBasePathMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBasePathMappingRequest::response(QNetworkReply * const reply) const
{
    return new CreateBasePathMappingResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateBasePathMappingRequestPrivate
 * \brief The CreateBasePathMappingRequestPrivate class provides private implementation for CreateBasePathMappingRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateBasePathMappingRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateBasePathMappingRequestPrivate::CreateBasePathMappingRequestPrivate(
    const ApiGatewayRequest::Action action, CreateBasePathMappingRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBasePathMappingRequest
 * class' copy constructor.
 */
CreateBasePathMappingRequestPrivate::CreateBasePathMappingRequestPrivate(
    const CreateBasePathMappingRequestPrivate &other, CreateBasePathMappingRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
