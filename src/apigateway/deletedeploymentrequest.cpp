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

#include "deletedeploymentrequest.h"
#include "deletedeploymentrequest_p.h"
#include "deletedeploymentresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteDeploymentRequest
 * \brief The DeleteDeploymentRequest class provides an interface for ApiGateway DeleteDeployment requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeploymentRequest::DeleteDeploymentRequest(const DeleteDeploymentRequest &other)
    : ApiGatewayRequest(new DeleteDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeploymentRequest object.
 */
DeleteDeploymentRequest::DeleteDeploymentRequest()
    : ApiGatewayRequest(new DeleteDeploymentRequestPrivate(ApiGatewayRequest::DeleteDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteDeploymentRequestPrivate
 * \brief The DeleteDeploymentRequestPrivate class provides private implementation for DeleteDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteDeploymentRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteDeploymentRequestPrivate::DeleteDeploymentRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteDeploymentRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeploymentRequest
 * class' copy constructor.
 */
DeleteDeploymentRequestPrivate::DeleteDeploymentRequestPrivate(
    const DeleteDeploymentRequestPrivate &other, DeleteDeploymentRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
