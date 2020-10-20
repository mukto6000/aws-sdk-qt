/*
    Copyright 2013-2020 Paul Colby

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

#include "batchstopupdateactionrequest.h"
#include "batchstopupdateactionrequest_p.h"
#include "batchstopupdateactionresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::BatchStopUpdateActionRequest
 * \brief The BatchStopUpdateActionRequest class provides an interface for ElastiCache BatchStopUpdateAction requests.
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
 * \sa ElastiCacheClient::batchStopUpdateAction
 */

/*!
 * Constructs a copy of \a other.
 */
BatchStopUpdateActionRequest::BatchStopUpdateActionRequest(const BatchStopUpdateActionRequest &other)
    : ElastiCacheRequest(new BatchStopUpdateActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchStopUpdateActionRequest object.
 */
BatchStopUpdateActionRequest::BatchStopUpdateActionRequest()
    : ElastiCacheRequest(new BatchStopUpdateActionRequestPrivate(ElastiCacheRequest::BatchStopUpdateActionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchStopUpdateActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchStopUpdateActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchStopUpdateActionRequest::response(QNetworkReply * const reply) const
{
    return new BatchStopUpdateActionResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::BatchStopUpdateActionRequestPrivate
 * \brief The BatchStopUpdateActionRequestPrivate class provides private implementation for BatchStopUpdateActionRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a BatchStopUpdateActionRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
BatchStopUpdateActionRequestPrivate::BatchStopUpdateActionRequestPrivate(
    const ElastiCacheRequest::Action action, BatchStopUpdateActionRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchStopUpdateActionRequest
 * class' copy constructor.
 */
BatchStopUpdateActionRequestPrivate::BatchStopUpdateActionRequestPrivate(
    const BatchStopUpdateActionRequestPrivate &other, BatchStopUpdateActionRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
