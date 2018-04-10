/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "shutdowngatewayrequest.h"
#include "shutdowngatewayrequest_p.h"
#include "shutdowngatewayresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  ShutdownGatewayRequest
 *
 * @brief  Implements StorageGateway ShutdownGateway requests.
 *
 * @see    StorageGatewayClient::shutdownGateway
 */

/**
 * @brief  Constructs a new ShutdownGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ShutdownGatewayRequest::ShutdownGatewayRequest(const ShutdownGatewayRequest &other)
    : StorageGatewayRequest(new ShutdownGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ShutdownGatewayRequest object.
 */
ShutdownGatewayRequest::ShutdownGatewayRequest()
    : StorageGatewayRequest(new ShutdownGatewayRequestPrivate(StorageGatewayRequest::ShutdownGatewayAction, this))
{

}

bool ShutdownGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ShutdownGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ShutdownGatewayResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * ShutdownGatewayRequest::response(QNetworkReply * const reply) const
{
    return new ShutdownGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ShutdownGatewayRequestPrivate
 *
 * @brief  Private implementation for ShutdownGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ShutdownGatewayRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public ShutdownGatewayRequest instance.
 */
ShutdownGatewayRequestPrivate::ShutdownGatewayRequestPrivate(
    const StorageGatewayRequest::Action action, ShutdownGatewayRequest * const q)
    : StorageGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ShutdownGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ShutdownGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ShutdownGatewayRequest instance.
 */
ShutdownGatewayRequestPrivate::ShutdownGatewayRequestPrivate(
    const ShutdownGatewayRequestPrivate &other, ShutdownGatewayRequest * const q)
    : StorageGatewayRequestPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws