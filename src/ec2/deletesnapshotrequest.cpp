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

#include "deletesnapshotrequest.h"
#include "deletesnapshotrequest_p.h"
#include "deletesnapshotresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteSnapshotRequest
 *
 * @brief  Implements EC2 DeleteSnapshot requests.
 *
 * @see    EC2Client::deleteSnapshot
 */

/**
 * @brief  Constructs a new DeleteSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSnapshotRequest::DeleteSnapshotRequest(const DeleteSnapshotRequest &other)
    : EC2Request(new DeleteSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSnapshotRequest object.
 */
DeleteSnapshotRequest::DeleteSnapshotRequest()
    : EC2Request(new DeleteSnapshotRequestPrivate(EC2Request::DeleteSnapshotAction, this))
{

}

bool DeleteSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSnapshotRequestPrivate
 *
 * @brief  Private implementation for DeleteSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSnapshotRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteSnapshotRequest instance.
 */
DeleteSnapshotRequestPrivate::DeleteSnapshotRequestPrivate(
    const EC2Request::Action action, DeleteSnapshotRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSnapshotRequest instance.
 */
DeleteSnapshotRequestPrivate::DeleteSnapshotRequestPrivate(
    const DeleteSnapshotRequestPrivate &other, DeleteSnapshotRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws