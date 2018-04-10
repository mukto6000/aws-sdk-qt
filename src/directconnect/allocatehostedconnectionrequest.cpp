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

#include "allocatehostedconnectionrequest.h"
#include "allocatehostedconnectionrequest_p.h"
#include "allocatehostedconnectionresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  AllocateHostedConnectionRequest
 *
 * @brief  Implements DirectConnect AllocateHostedConnection requests.
 *
 * @see    DirectConnectClient::allocateHostedConnection
 */

/**
 * @brief  Constructs a new AllocateHostedConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AllocateHostedConnectionRequest::AllocateHostedConnectionRequest(const AllocateHostedConnectionRequest &other)
    : DirectConnectRequest(new AllocateHostedConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AllocateHostedConnectionRequest object.
 */
AllocateHostedConnectionRequest::AllocateHostedConnectionRequest()
    : DirectConnectRequest(new AllocateHostedConnectionRequestPrivate(DirectConnectRequest::AllocateHostedConnectionAction, this))
{

}

bool AllocateHostedConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AllocateHostedConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AllocateHostedConnectionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * AllocateHostedConnectionRequest::response(QNetworkReply * const reply) const
{
    return new AllocateHostedConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AllocateHostedConnectionRequestPrivate
 *
 * @brief  Private implementation for AllocateHostedConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocateHostedConnectionRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public AllocateHostedConnectionRequest instance.
 */
AllocateHostedConnectionRequestPrivate::AllocateHostedConnectionRequestPrivate(
    const DirectConnectRequest::Action action, AllocateHostedConnectionRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AllocateHostedConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AllocateHostedConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AllocateHostedConnectionRequest instance.
 */
AllocateHostedConnectionRequestPrivate::AllocateHostedConnectionRequestPrivate(
    const AllocateHostedConnectionRequestPrivate &other, AllocateHostedConnectionRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws