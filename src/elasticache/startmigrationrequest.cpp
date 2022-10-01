// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmigrationrequest.h"
#include "startmigrationrequest_p.h"
#include "startmigrationresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::StartMigrationRequest
 * \brief The StartMigrationRequest class provides an interface for ElastiCache StartMigration requests.
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
 * \sa ElastiCacheClient::startMigration
 */

/*!
 * Constructs a copy of \a other.
 */
StartMigrationRequest::StartMigrationRequest(const StartMigrationRequest &other)
    : ElastiCacheRequest(new StartMigrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMigrationRequest object.
 */
StartMigrationRequest::StartMigrationRequest()
    : ElastiCacheRequest(new StartMigrationRequestPrivate(ElastiCacheRequest::StartMigrationAction, this))
{

}

/*!
 * \reimp
 */
bool StartMigrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMigrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMigrationRequest::response(QNetworkReply * const reply) const
{
    return new StartMigrationResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::StartMigrationRequestPrivate
 * \brief The StartMigrationRequestPrivate class provides private implementation for StartMigrationRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a StartMigrationRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
StartMigrationRequestPrivate::StartMigrationRequestPrivate(
    const ElastiCacheRequest::Action action, StartMigrationRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMigrationRequest
 * class' copy constructor.
 */
StartMigrationRequestPrivate::StartMigrationRequestPrivate(
    const StartMigrationRequestPrivate &other, StartMigrationRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
