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

#include "deletesubnetrequest.h"
#include "deletesubnetrequest_p.h"
#include "deletesubnetresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteSubnetRequest
 *
 * @brief  Implements EC2 DeleteSubnet requests.
 *
 * @see    EC2Client::deleteSubnet
 */

/**
 * @brief  Constructs a new DeleteSubnetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSubnetRequest::DeleteSubnetRequest(const DeleteSubnetRequest &other)
    : EC2Request(new DeleteSubnetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSubnetRequest object.
 */
DeleteSubnetRequest::DeleteSubnetRequest()
    : EC2Request(new DeleteSubnetRequestPrivate(EC2Request::DeleteSubnetAction, this))
{

}

bool DeleteSubnetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSubnetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSubnetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSubnetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSubnetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSubnetRequestPrivate
 *
 * @brief  Private implementation for DeleteSubnetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubnetRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteSubnetRequest instance.
 */
DeleteSubnetRequestPrivate::DeleteSubnetRequestPrivate(
    const EC2Request::Action action, DeleteSubnetRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubnetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSubnetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSubnetRequest instance.
 */
DeleteSubnetRequestPrivate::DeleteSubnetRequestPrivate(
    const DeleteSubnetRequestPrivate &other, DeleteSubnetRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws