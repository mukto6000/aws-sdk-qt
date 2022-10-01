// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecachesecuritygrouprequest.h"
#include "deletecachesecuritygrouprequest_p.h"
#include "deletecachesecuritygroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteCacheSecurityGroupRequest
 * \brief The DeleteCacheSecurityGroupRequest class provides an interface for ElastiCache DeleteCacheSecurityGroup requests.
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
 * \sa ElastiCacheClient::deleteCacheSecurityGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCacheSecurityGroupRequest::DeleteCacheSecurityGroupRequest(const DeleteCacheSecurityGroupRequest &other)
    : ElastiCacheRequest(new DeleteCacheSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCacheSecurityGroupRequest object.
 */
DeleteCacheSecurityGroupRequest::DeleteCacheSecurityGroupRequest()
    : ElastiCacheRequest(new DeleteCacheSecurityGroupRequestPrivate(ElastiCacheRequest::DeleteCacheSecurityGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCacheSecurityGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCacheSecurityGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCacheSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCacheSecurityGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DeleteCacheSecurityGroupRequestPrivate
 * \brief The DeleteCacheSecurityGroupRequestPrivate class provides private implementation for DeleteCacheSecurityGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteCacheSecurityGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DeleteCacheSecurityGroupRequestPrivate::DeleteCacheSecurityGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteCacheSecurityGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCacheSecurityGroupRequest
 * class' copy constructor.
 */
DeleteCacheSecurityGroupRequestPrivate::DeleteCacheSecurityGroupRequestPrivate(
    const DeleteCacheSecurityGroupRequestPrivate &other, DeleteCacheSecurityGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
