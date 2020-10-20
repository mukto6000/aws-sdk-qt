/*
    Copyright 2013-2020 Paul Colby

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

#include "createauthorizerrequest.h"
#include "createauthorizerrequest_p.h"
#include "createauthorizerresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateAuthorizerRequest
 * \brief The CreateAuthorizerRequest class provides an interface for APIGateway CreateAuthorizer requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAuthorizerRequest::CreateAuthorizerRequest(const CreateAuthorizerRequest &other)
    : APIGatewayRequest(new CreateAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAuthorizerRequest object.
 */
CreateAuthorizerRequest::CreateAuthorizerRequest()
    : APIGatewayRequest(new CreateAuthorizerRequestPrivate(APIGatewayRequest::CreateAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new CreateAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::CreateAuthorizerRequestPrivate
 * \brief The CreateAuthorizerRequestPrivate class provides private implementation for CreateAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a CreateAuthorizerRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
CreateAuthorizerRequestPrivate::CreateAuthorizerRequestPrivate(
    const APIGatewayRequest::Action action, CreateAuthorizerRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAuthorizerRequest
 * class' copy constructor.
 */
CreateAuthorizerRequestPrivate::CreateAuthorizerRequestPrivate(
    const CreateAuthorizerRequestPrivate &other, CreateAuthorizerRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
