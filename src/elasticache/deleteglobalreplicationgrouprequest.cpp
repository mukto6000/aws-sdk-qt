// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteglobalreplicationgrouprequest.h"
#include "deleteglobalreplicationgrouprequest_p.h"
#include "deleteglobalreplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteGlobalReplicationGroupRequest
 * \brief The DeleteGlobalReplicationGroupRequest class provides an interface for ElastiCache DeleteGlobalReplicationGroup requests.
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
 * \sa ElastiCacheClient::deleteGlobalReplicationGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGlobalReplicationGroupRequest::DeleteGlobalReplicationGroupRequest(const DeleteGlobalReplicationGroupRequest &other)
    : ElastiCacheRequest(new DeleteGlobalReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGlobalReplicationGroupRequest object.
 */
DeleteGlobalReplicationGroupRequest::DeleteGlobalReplicationGroupRequest()
    : ElastiCacheRequest(new DeleteGlobalReplicationGroupRequestPrivate(ElastiCacheRequest::DeleteGlobalReplicationGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGlobalReplicationGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGlobalReplicationGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGlobalReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGlobalReplicationGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DeleteGlobalReplicationGroupRequestPrivate
 * \brief The DeleteGlobalReplicationGroupRequestPrivate class provides private implementation for DeleteGlobalReplicationGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteGlobalReplicationGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DeleteGlobalReplicationGroupRequestPrivate::DeleteGlobalReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGlobalReplicationGroupRequest
 * class' copy constructor.
 */
DeleteGlobalReplicationGroupRequestPrivate::DeleteGlobalReplicationGroupRequestPrivate(
    const DeleteGlobalReplicationGroupRequestPrivate &other, DeleteGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
