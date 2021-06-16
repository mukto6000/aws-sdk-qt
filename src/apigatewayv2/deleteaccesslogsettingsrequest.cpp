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

#include "deleteaccesslogsettingsrequest.h"
#include "deleteaccesslogsettingsrequest_p.h"
#include "deleteaccesslogsettingsresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteAccessLogSettingsRequest
 * \brief The DeleteAccessLogSettingsRequest class provides an interface for ApiGatewayV2 DeleteAccessLogSettings requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteAccessLogSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessLogSettingsRequest::DeleteAccessLogSettingsRequest(const DeleteAccessLogSettingsRequest &other)
    : ApiGatewayV2Request(new DeleteAccessLogSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessLogSettingsRequest object.
 */
DeleteAccessLogSettingsRequest::DeleteAccessLogSettingsRequest()
    : ApiGatewayV2Request(new DeleteAccessLogSettingsRequestPrivate(ApiGatewayV2Request::DeleteAccessLogSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessLogSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessLogSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessLogSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessLogSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteAccessLogSettingsRequestPrivate
 * \brief The DeleteAccessLogSettingsRequestPrivate class provides private implementation for DeleteAccessLogSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteAccessLogSettingsRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteAccessLogSettingsRequestPrivate::DeleteAccessLogSettingsRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteAccessLogSettingsRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessLogSettingsRequest
 * class' copy constructor.
 */
DeleteAccessLogSettingsRequestPrivate::DeleteAccessLogSettingsRequestPrivate(
    const DeleteAccessLogSettingsRequestPrivate &other, DeleteAccessLogSettingsRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
