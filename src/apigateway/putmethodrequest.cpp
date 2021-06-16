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

#include "putmethodrequest.h"
#include "putmethodrequest_p.h"
#include "putmethodresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutMethodRequest
 * \brief The PutMethodRequest class provides an interface for APIGateway PutMethod requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putMethod
 */

/*!
 * Constructs a copy of \a other.
 */
PutMethodRequest::PutMethodRequest(const PutMethodRequest &other)
    : APIGatewayRequest(new PutMethodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutMethodRequest object.
 */
PutMethodRequest::PutMethodRequest()
    : APIGatewayRequest(new PutMethodRequestPrivate(APIGatewayRequest::PutMethodAction, this))
{

}

/*!
 * \reimp
 */
bool PutMethodRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutMethodResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMethodRequest::response(QNetworkReply * const reply) const
{
    return new PutMethodResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::PutMethodRequestPrivate
 * \brief The PutMethodRequestPrivate class provides private implementation for PutMethodRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutMethodRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
PutMethodRequestPrivate::PutMethodRequestPrivate(
    const APIGatewayRequest::Action action, PutMethodRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutMethodRequest
 * class' copy constructor.
 */
PutMethodRequestPrivate::PutMethodRequestPrivate(
    const PutMethodRequestPrivate &other, PutMethodRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
