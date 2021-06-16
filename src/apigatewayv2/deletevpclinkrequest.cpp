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

#include "deletevpclinkrequest.h"
#include "deletevpclinkrequest_p.h"
#include "deletevpclinkresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteVpcLinkRequest
 * \brief The DeleteVpcLinkRequest class provides an interface for ApiGatewayV2 DeleteVpcLink requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVpcLinkRequest::DeleteVpcLinkRequest(const DeleteVpcLinkRequest &other)
    : ApiGatewayV2Request(new DeleteVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVpcLinkRequest object.
 */
DeleteVpcLinkRequest::DeleteVpcLinkRequest()
    : ApiGatewayV2Request(new DeleteVpcLinkRequestPrivate(ApiGatewayV2Request::DeleteVpcLinkAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVpcLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVpcLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpcLinkResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteVpcLinkRequestPrivate
 * \brief The DeleteVpcLinkRequestPrivate class provides private implementation for DeleteVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteVpcLinkRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteVpcLinkRequestPrivate::DeleteVpcLinkRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteVpcLinkRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpcLinkRequest
 * class' copy constructor.
 */
DeleteVpcLinkRequestPrivate::DeleteVpcLinkRequestPrivate(
    const DeleteVpcLinkRequestPrivate &other, DeleteVpcLinkRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
