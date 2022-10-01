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

#include "putintegrationresponserequest.h"
#include "putintegrationresponserequest_p.h"
#include "putintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutIntegrationResponseRequest
 * \brief The PutIntegrationResponseRequest class provides an interface for ApiGateway PutIntegrationResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
PutIntegrationResponseRequest::PutIntegrationResponseRequest(const PutIntegrationResponseRequest &other)
    : ApiGatewayRequest(new PutIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutIntegrationResponseRequest object.
 */
PutIntegrationResponseRequest::PutIntegrationResponseRequest()
    : ApiGatewayRequest(new PutIntegrationResponseRequestPrivate(ApiGatewayRequest::PutIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool PutIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new PutIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::PutIntegrationResponseRequestPrivate
 * \brief The PutIntegrationResponseRequestPrivate class provides private implementation for PutIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutIntegrationResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
PutIntegrationResponseRequestPrivate::PutIntegrationResponseRequestPrivate(
    const ApiGatewayRequest::Action action, PutIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutIntegrationResponseRequest
 * class' copy constructor.
 */
PutIntegrationResponseRequestPrivate::PutIntegrationResponseRequestPrivate(
    const PutIntegrationResponseRequestPrivate &other, PutIntegrationResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
