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
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetStagesRequest
 * \brief The GetStagesRequest class provides an interface for ApiGatewayV2 GetStages requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getStages
 */

/*!
 * Constructs a copy of \a other.
 */
GetStagesRequest::GetStagesRequest(const GetStagesRequest &other)
    : ApiGatewayV2Request(new GetStagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStagesRequest object.
 */
GetStagesRequest::GetStagesRequest()
    : ApiGatewayV2Request(new GetStagesRequestPrivate(ApiGatewayV2Request::GetStagesAction, this))
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
 * \class QtAws::ApiGatewayV2::GetStagesRequestPrivate
 * \brief The GetStagesRequestPrivate class provides private implementation for GetStagesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetStagesRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetStagesRequestPrivate::GetStagesRequestPrivate(
    const ApiGatewayV2Request::Action action, GetStagesRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
