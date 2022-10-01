// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyuserrequest.h"
#include "modifyuserrequest_p.h"
#include "modifyuserresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyUserRequest
 * \brief The ModifyUserRequest class provides an interface for ElastiCache ModifyUser requests.
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
 * \sa ElastiCacheClient::modifyUser
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyUserRequest::ModifyUserRequest(const ModifyUserRequest &other)
    : ElastiCacheRequest(new ModifyUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyUserRequest object.
 */
ModifyUserRequest::ModifyUserRequest()
    : ElastiCacheRequest(new ModifyUserRequestPrivate(ElastiCacheRequest::ModifyUserAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyUserRequest::response(QNetworkReply * const reply) const
{
    return new ModifyUserResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::ModifyUserRequestPrivate
 * \brief The ModifyUserRequestPrivate class provides private implementation for ModifyUserRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyUserRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
ModifyUserRequestPrivate::ModifyUserRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyUserRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyUserRequest
 * class' copy constructor.
 */
ModifyUserRequestPrivate::ModifyUserRequestPrivate(
    const ModifyUserRequestPrivate &other, ModifyUserRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
