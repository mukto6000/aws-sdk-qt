// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecacheengineversionsrequest.h"
#include "describecacheengineversionsrequest_p.h"
#include "describecacheengineversionsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeCacheEngineVersionsRequest
 * \brief The DescribeCacheEngineVersionsRequest class provides an interface for ElastiCache DescribeCacheEngineVersions requests.
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
 * \sa ElastiCacheClient::describeCacheEngineVersions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCacheEngineVersionsRequest::DescribeCacheEngineVersionsRequest(const DescribeCacheEngineVersionsRequest &other)
    : ElastiCacheRequest(new DescribeCacheEngineVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCacheEngineVersionsRequest object.
 */
DescribeCacheEngineVersionsRequest::DescribeCacheEngineVersionsRequest()
    : ElastiCacheRequest(new DescribeCacheEngineVersionsRequestPrivate(ElastiCacheRequest::DescribeCacheEngineVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCacheEngineVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCacheEngineVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCacheEngineVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheEngineVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeCacheEngineVersionsRequestPrivate
 * \brief The DescribeCacheEngineVersionsRequestPrivate class provides private implementation for DescribeCacheEngineVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeCacheEngineVersionsRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DescribeCacheEngineVersionsRequestPrivate::DescribeCacheEngineVersionsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheEngineVersionsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheEngineVersionsRequest
 * class' copy constructor.
 */
DescribeCacheEngineVersionsRequestPrivate::DescribeCacheEngineVersionsRequestPrivate(
    const DescribeCacheEngineVersionsRequestPrivate &other, DescribeCacheEngineVersionsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
