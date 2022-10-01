// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyreplicationgroupshardconfigurationrequest.h"
#include "modifyreplicationgroupshardconfigurationrequest_p.h"
#include "modifyreplicationgroupshardconfigurationresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupShardConfigurationRequest
 * \brief The ModifyReplicationGroupShardConfigurationRequest class provides an interface for ElastiCache ModifyReplicationGroupShardConfiguration requests.
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
 * \sa ElastiCacheClient::modifyReplicationGroupShardConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyReplicationGroupShardConfigurationRequest::ModifyReplicationGroupShardConfigurationRequest(const ModifyReplicationGroupShardConfigurationRequest &other)
    : ElastiCacheRequest(new ModifyReplicationGroupShardConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyReplicationGroupShardConfigurationRequest object.
 */
ModifyReplicationGroupShardConfigurationRequest::ModifyReplicationGroupShardConfigurationRequest()
    : ElastiCacheRequest(new ModifyReplicationGroupShardConfigurationRequestPrivate(ElastiCacheRequest::ModifyReplicationGroupShardConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyReplicationGroupShardConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyReplicationGroupShardConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyReplicationGroupShardConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationGroupShardConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupShardConfigurationRequestPrivate
 * \brief The ModifyReplicationGroupShardConfigurationRequestPrivate class provides private implementation for ModifyReplicationGroupShardConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyReplicationGroupShardConfigurationRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
ModifyReplicationGroupShardConfigurationRequestPrivate::ModifyReplicationGroupShardConfigurationRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyReplicationGroupShardConfigurationRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationGroupShardConfigurationRequest
 * class' copy constructor.
 */
ModifyReplicationGroupShardConfigurationRequestPrivate::ModifyReplicationGroupShardConfigurationRequestPrivate(
    const ModifyReplicationGroupShardConfigurationRequestPrivate &other, ModifyReplicationGroupShardConfigurationRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
