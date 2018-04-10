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

#include "createsnapshotrequest.h"
#include "createsnapshotrequest_p.h"
#include "createsnapshotresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/**
 * @class  CreateSnapshotRequest
 *
 * @brief  Implements ElastiCache CreateSnapshot requests.
 *
 * @see    ElastiCacheClient::createSnapshot
 */

/**
 * @brief  Constructs a new CreateSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSnapshotRequest::CreateSnapshotRequest(const CreateSnapshotRequest &other)
    : ElastiCacheRequest(new CreateSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSnapshotRequest object.
 */
CreateSnapshotRequest::CreateSnapshotRequest()
    : ElastiCacheRequest(new CreateSnapshotRequestPrivate(ElastiCacheRequest::CreateSnapshotAction, this))
{

}

bool CreateSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSnapshotRequestPrivate
 *
 * @brief  Private implementation for CreateSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSnapshotRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public CreateSnapshotRequest instance.
 */
CreateSnapshotRequestPrivate::CreateSnapshotRequestPrivate(
    const ElastiCacheRequest::Action action, CreateSnapshotRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSnapshotRequest instance.
 */
CreateSnapshotRequestPrivate::CreateSnapshotRequestPrivate(
    const CreateSnapshotRequestPrivate &other, CreateSnapshotRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws