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

#include "generateclientcertificaterequest.h"
#include "generateclientcertificaterequest_p.h"
#include "generateclientcertificateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GenerateClientCertificateRequest
 * \brief The GenerateClientCertificateRequest class provides an interface for ApiGateway GenerateClientCertificate requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::generateClientCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateClientCertificateRequest::GenerateClientCertificateRequest(const GenerateClientCertificateRequest &other)
    : ApiGatewayRequest(new GenerateClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateClientCertificateRequest object.
 */
GenerateClientCertificateRequest::GenerateClientCertificateRequest()
    : ApiGatewayRequest(new GenerateClientCertificateRequestPrivate(ApiGatewayRequest::GenerateClientCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateClientCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateClientCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GenerateClientCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GenerateClientCertificateRequestPrivate
 * \brief The GenerateClientCertificateRequestPrivate class provides private implementation for GenerateClientCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GenerateClientCertificateRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GenerateClientCertificateRequestPrivate::GenerateClientCertificateRequestPrivate(
    const ApiGatewayRequest::Action action, GenerateClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateClientCertificateRequest
 * class' copy constructor.
 */
GenerateClientCertificateRequestPrivate::GenerateClientCertificateRequestPrivate(
    const GenerateClientCertificateRequestPrivate &other, GenerateClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
