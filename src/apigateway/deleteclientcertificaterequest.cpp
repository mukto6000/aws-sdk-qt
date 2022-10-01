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

#include "deleteclientcertificaterequest.h"
#include "deleteclientcertificaterequest_p.h"
#include "deleteclientcertificateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteClientCertificateRequest
 * \brief The DeleteClientCertificateRequest class provides an interface for ApiGateway DeleteClientCertificate requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteClientCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteClientCertificateRequest::DeleteClientCertificateRequest(const DeleteClientCertificateRequest &other)
    : ApiGatewayRequest(new DeleteClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteClientCertificateRequest object.
 */
DeleteClientCertificateRequest::DeleteClientCertificateRequest()
    : ApiGatewayRequest(new DeleteClientCertificateRequestPrivate(ApiGatewayRequest::DeleteClientCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteClientCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteClientCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClientCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteClientCertificateRequestPrivate
 * \brief The DeleteClientCertificateRequestPrivate class provides private implementation for DeleteClientCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteClientCertificateRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteClientCertificateRequestPrivate::DeleteClientCertificateRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteClientCertificateRequest
 * class' copy constructor.
 */
DeleteClientCertificateRequestPrivate::DeleteClientCertificateRequestPrivate(
    const DeleteClientCertificateRequestPrivate &other, DeleteClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
