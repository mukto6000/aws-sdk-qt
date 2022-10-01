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

#include "putrestapirequest.h"
#include "putrestapirequest_p.h"
#include "putrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::PutRestApiRequest
 * \brief The PutRestApiRequest class provides an interface for ApiGateway PutRestApi requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::putRestApi
 */

/*!
 * Constructs a copy of \a other.
 */
PutRestApiRequest::PutRestApiRequest(const PutRestApiRequest &other)
    : ApiGatewayRequest(new PutRestApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRestApiRequest object.
 */
PutRestApiRequest::PutRestApiRequest()
    : ApiGatewayRequest(new PutRestApiRequestPrivate(ApiGatewayRequest::PutRestApiAction, this))
{

}

/*!
 * \reimp
 */
bool PutRestApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRestApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRestApiRequest::response(QNetworkReply * const reply) const
{
    return new PutRestApiResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::PutRestApiRequestPrivate
 * \brief The PutRestApiRequestPrivate class provides private implementation for PutRestApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a PutRestApiRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
PutRestApiRequestPrivate::PutRestApiRequestPrivate(
    const ApiGatewayRequest::Action action, PutRestApiRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRestApiRequest
 * class' copy constructor.
 */
PutRestApiRequestPrivate::PutRestApiRequestPrivate(
    const PutRestApiRequestPrivate &other, PutRestApiRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
