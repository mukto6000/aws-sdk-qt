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

#include "resetcacheparametergrouprequest.h"
#include "resetcacheparametergrouprequest_p.h"
#include "resetcacheparametergroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/**
 * @class  ResetCacheParameterGroupRequest
 *
 * @brief  Implements ElastiCache ResetCacheParameterGroup requests.
 *
 * @see    ElastiCacheClient::resetCacheParameterGroup
 */

/**
 * @brief  Constructs a new ResetCacheParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResetCacheParameterGroupRequest::ResetCacheParameterGroupRequest(const ResetCacheParameterGroupRequest &other)
    : ElastiCacheRequest(new ResetCacheParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResetCacheParameterGroupRequest object.
 */
ResetCacheParameterGroupRequest::ResetCacheParameterGroupRequest()
    : ElastiCacheRequest(new ResetCacheParameterGroupRequestPrivate(ElastiCacheRequest::ResetCacheParameterGroupAction, this))
{

}

bool ResetCacheParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResetCacheParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResetCacheParameterGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetCacheParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ResetCacheParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResetCacheParameterGroupRequestPrivate
 *
 * @brief  Private implementation for ResetCacheParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetCacheParameterGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public ResetCacheParameterGroupRequest instance.
 */
ResetCacheParameterGroupRequestPrivate::ResetCacheParameterGroupRequestPrivate(
    const ElastiCacheRequest::Action action, ResetCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResetCacheParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResetCacheParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResetCacheParameterGroupRequest instance.
 */
ResetCacheParameterGroupRequestPrivate::ResetCacheParameterGroupRequestPrivate(
    const ResetCacheParameterGroupRequestPrivate &other, ResetCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws