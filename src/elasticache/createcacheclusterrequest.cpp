// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcacheclusterrequest.h"
#include "createcacheclusterrequest_p.h"
#include "createcacheclusterresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateCacheClusterRequest
 * \brief The CreateCacheClusterRequest class provides an interface for ElastiCache CreateCacheCluster requests.
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
 * \sa ElastiCacheClient::createCacheCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCacheClusterRequest::CreateCacheClusterRequest(const CreateCacheClusterRequest &other)
    : ElastiCacheRequest(new CreateCacheClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCacheClusterRequest object.
 */
CreateCacheClusterRequest::CreateCacheClusterRequest()
    : ElastiCacheRequest(new CreateCacheClusterRequestPrivate(ElastiCacheRequest::CreateCacheClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCacheClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCacheClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCacheClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateCacheClusterResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::CreateCacheClusterRequestPrivate
 * \brief The CreateCacheClusterRequestPrivate class provides private implementation for CreateCacheClusterRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateCacheClusterRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
CreateCacheClusterRequestPrivate::CreateCacheClusterRequestPrivate(
    const ElastiCacheRequest::Action action, CreateCacheClusterRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCacheClusterRequest
 * class' copy constructor.
 */
CreateCacheClusterRequestPrivate::CreateCacheClusterRequestPrivate(
    const CreateCacheClusterRequestPrivate &other, CreateCacheClusterRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
