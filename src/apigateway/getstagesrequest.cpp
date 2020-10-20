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

#include "getstagesrequest.h"
#include "getstagesrequest_p.h"
#include "getstagesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetStagesRequest
 * \brief The GetStagesRequest class provides an interface for APIGateway GetStages requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getStages
 */

/*!
 * Constructs a copy of \a other.
 */
GetStagesRequest::GetStagesRequest(const GetStagesRequest &other)
    : APIGatewayRequest(new GetStagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStagesRequest object.
 */
GetStagesRequest::GetStagesRequest()
    : APIGatewayRequest(new GetStagesRequestPrivate(APIGatewayRequest::GetStagesAction, this))
{

}

/*!
 * \reimp
 */
bool GetStagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStagesRequest::response(QNetworkReply * const reply) const
{
    return new GetStagesResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetStagesRequestPrivate
 * \brief The GetStagesRequestPrivate class provides private implementation for GetStagesRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetStagesRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetStagesRequestPrivate::GetStagesRequestPrivate(
    const APIGatewayRequest::Action action, GetStagesRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStagesRequest
 * class' copy constructor.
 */
GetStagesRequestPrivate::GetStagesRequestPrivate(
    const GetStagesRequestPrivate &other, GetStagesRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
