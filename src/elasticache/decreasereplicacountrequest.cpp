// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "decreasereplicacountrequest.h"
#include "decreasereplicacountrequest_p.h"
#include "decreasereplicacountresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DecreaseReplicaCountRequest
 * \brief The DecreaseReplicaCountRequest class provides an interface for ElastiCache DecreaseReplicaCount requests.
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
 * \sa ElastiCacheClient::decreaseReplicaCount
 */

/*!
 * Constructs a copy of \a other.
 */
DecreaseReplicaCountRequest::DecreaseReplicaCountRequest(const DecreaseReplicaCountRequest &other)
    : ElastiCacheRequest(new DecreaseReplicaCountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DecreaseReplicaCountRequest object.
 */
DecreaseReplicaCountRequest::DecreaseReplicaCountRequest()
    : ElastiCacheRequest(new DecreaseReplicaCountRequestPrivate(ElastiCacheRequest::DecreaseReplicaCountAction, this))
{

}

/*!
 * \reimp
 */
bool DecreaseReplicaCountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DecreaseReplicaCountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DecreaseReplicaCountRequest::response(QNetworkReply * const reply) const
{
    return new DecreaseReplicaCountResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DecreaseReplicaCountRequestPrivate
 * \brief The DecreaseReplicaCountRequestPrivate class provides private implementation for DecreaseReplicaCountRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DecreaseReplicaCountRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DecreaseReplicaCountRequestPrivate::DecreaseReplicaCountRequestPrivate(
    const ElastiCacheRequest::Action action, DecreaseReplicaCountRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DecreaseReplicaCountRequest
 * class' copy constructor.
 */
DecreaseReplicaCountRequestPrivate::DecreaseReplicaCountRequestPrivate(
    const DecreaseReplicaCountRequestPrivate &other, DecreaseReplicaCountRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
