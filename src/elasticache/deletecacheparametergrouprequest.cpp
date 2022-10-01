// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecacheparametergrouprequest.h"
#include "deletecacheparametergrouprequest_p.h"
#include "deletecacheparametergroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteCacheParameterGroupRequest
 * \brief The DeleteCacheParameterGroupRequest class provides an interface for ElastiCache DeleteCacheParameterGroup requests.
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
 * \sa ElastiCacheClient::deleteCacheParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCacheParameterGroupRequest::DeleteCacheParameterGroupRequest(const DeleteCacheParameterGroupRequest &other)
    : ElastiCacheRequest(new DeleteCacheParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCacheParameterGroupRequest object.
 */
DeleteCacheParameterGroupRequest::DeleteCacheParameterGroupRequest()
    : ElastiCacheRequest(new DeleteCacheParameterGroupRequestPrivate(ElastiCacheRequest::DeleteCacheParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCacheParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCacheParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCacheParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCacheParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DeleteCacheParameterGroupRequestPrivate
 * \brief The DeleteCacheParameterGroupRequestPrivate class provides private implementation for DeleteCacheParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteCacheParameterGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DeleteCacheParameterGroupRequestPrivate::DeleteCacheParameterGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCacheParameterGroupRequest
 * class' copy constructor.
 */
DeleteCacheParameterGroupRequestPrivate::DeleteCacheParameterGroupRequestPrivate(
    const DeleteCacheParameterGroupRequestPrivate &other, DeleteCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
