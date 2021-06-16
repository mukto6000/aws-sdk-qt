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

#include "deletereplicationgrouprequest.h"
#include "deletereplicationgrouprequest_p.h"
#include "deletereplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteReplicationGroupRequest
 * \brief The DeleteReplicationGroupRequest class provides an interface for ElastiCache DeleteReplicationGroup requests.
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
 * \sa ElastiCacheClient::deleteReplicationGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationGroupRequest::DeleteReplicationGroupRequest(const DeleteReplicationGroupRequest &other)
    : ElastiCacheRequest(new DeleteReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationGroupRequest object.
 */
DeleteReplicationGroupRequest::DeleteReplicationGroupRequest()
    : ElastiCacheRequest(new DeleteReplicationGroupRequestPrivate(ElastiCacheRequest::DeleteReplicationGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DeleteReplicationGroupRequestPrivate
 * \brief The DeleteReplicationGroupRequestPrivate class provides private implementation for DeleteReplicationGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteReplicationGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DeleteReplicationGroupRequestPrivate::DeleteReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationGroupRequest
 * class' copy constructor.
 */
DeleteReplicationGroupRequestPrivate::DeleteReplicationGroupRequestPrivate(
    const DeleteReplicationGroupRequestPrivate &other, DeleteReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
