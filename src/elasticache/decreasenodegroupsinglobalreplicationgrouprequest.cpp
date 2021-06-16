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

#include "decreasenodegroupsinglobalreplicationgrouprequest.h"
#include "decreasenodegroupsinglobalreplicationgrouprequest_p.h"
#include "decreasenodegroupsinglobalreplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DecreaseNodeGroupsInGlobalReplicationGroupRequest
 * \brief The DecreaseNodeGroupsInGlobalReplicationGroupRequest class provides an interface for ElastiCache DecreaseNodeGroupsInGlobalReplicationGroup requests.
 *
 * \inmodule QtAwsElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::decreaseNodeGroupsInGlobalReplicationGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DecreaseNodeGroupsInGlobalReplicationGroupRequest::DecreaseNodeGroupsInGlobalReplicationGroupRequest(const DecreaseNodeGroupsInGlobalReplicationGroupRequest &other)
    : ElastiCacheRequest(new DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DecreaseNodeGroupsInGlobalReplicationGroupRequest object.
 */
DecreaseNodeGroupsInGlobalReplicationGroupRequest::DecreaseNodeGroupsInGlobalReplicationGroupRequest()
    : ElastiCacheRequest(new DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(ElastiCacheRequest::DecreaseNodeGroupsInGlobalReplicationGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DecreaseNodeGroupsInGlobalReplicationGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DecreaseNodeGroupsInGlobalReplicationGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DecreaseNodeGroupsInGlobalReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new DecreaseNodeGroupsInGlobalReplicationGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate
 * \brief The DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate class provides private implementation for DecreaseNodeGroupsInGlobalReplicationGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate::DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DecreaseNodeGroupsInGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DecreaseNodeGroupsInGlobalReplicationGroupRequest
 * class' copy constructor.
 */
DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate::DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(
    const DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate &other, DecreaseNodeGroupsInGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
