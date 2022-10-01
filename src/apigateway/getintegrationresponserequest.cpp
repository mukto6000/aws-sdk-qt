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

#include "getintegrationresponserequest.h"
#include "getintegrationresponserequest_p.h"
#include "getintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetIntegrationResponseRequest
 * \brief The GetIntegrationResponseRequest class provides an interface for ApiGateway GetIntegrationResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntegrationResponseRequest::GetIntegrationResponseRequest(const GetIntegrationResponseRequest &other)
    : ApiGatewayRequest(new GetIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntegrationResponseRequest object.
 */
GetIntegrationResponseRequest::GetIntegrationResponseRequest()
    : ApiGatewayRequest(new GetIntegrationResponseRequestPrivate(ApiGatewayRequest::GetIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetIntegrationResponseRequestPrivate
 * \brief The GetIntegrationResponseRequestPrivate class provides private implementation for GetIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetIntegrationResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetIntegrationResponseRequestPrivate::GetIntegrationResponseRequestPrivate(
    const ApiGatewayRequest::Action action, GetIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationResponseRequest
 * class' copy constructor.
 */
GetIntegrationResponseRequestPrivate::GetIntegrationResponseRequestPrivate(
    const GetIntegrationResponseRequestPrivate &other, GetIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
