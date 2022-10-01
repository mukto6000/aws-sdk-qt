// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifycachesubnetgrouprequest.h"
#include "modifycachesubnetgrouprequest_p.h"
#include "modifycachesubnetgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyCacheSubnetGroupRequest
 * \brief The ModifyCacheSubnetGroupRequest class provides an interface for ElastiCache ModifyCacheSubnetGroup requests.
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
 * \sa ElastiCacheClient::modifyCacheSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyCacheSubnetGroupRequest::ModifyCacheSubnetGroupRequest(const ModifyCacheSubnetGroupRequest &other)
    : ElastiCacheRequest(new ModifyCacheSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyCacheSubnetGroupRequest object.
 */
ModifyCacheSubnetGroupRequest::ModifyCacheSubnetGroupRequest()
    : ElastiCacheRequest(new ModifyCacheSubnetGroupRequestPrivate(ElastiCacheRequest::ModifyCacheSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyCacheSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyCacheSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyCacheSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyCacheSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::ModifyCacheSubnetGroupRequestPrivate
 * \brief The ModifyCacheSubnetGroupRequestPrivate class provides private implementation for ModifyCacheSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyCacheSubnetGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
ModifyCacheSubnetGroupRequestPrivate::ModifyCacheSubnetGroupRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyCacheSubnetGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyCacheSubnetGroupRequest
 * class' copy constructor.
 */
ModifyCacheSubnetGroupRequestPrivate::ModifyCacheSubnetGroupRequestPrivate(
    const ModifyCacheSubnetGroupRequestPrivate &other, ModifyCacheSubnetGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
