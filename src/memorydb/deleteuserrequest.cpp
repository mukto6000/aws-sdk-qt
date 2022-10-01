// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserrequest.h"
#include "deleteuserrequest_p.h"
#include "deleteuserresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DeleteUserRequest
 * \brief The DeleteUserRequest class provides an interface for MemoryDb DeleteUser requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::deleteUser
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserRequest::DeleteUserRequest(const DeleteUserRequest &other)
    : MemoryDbRequest(new DeleteUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserRequest object.
 */
DeleteUserRequest::DeleteUserRequest()
    : MemoryDbRequest(new DeleteUserRequestPrivate(MemoryDbRequest::DeleteUserAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DeleteUserRequestPrivate
 * \brief The DeleteUserRequestPrivate class provides private implementation for DeleteUserRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DeleteUserRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DeleteUserRequestPrivate::DeleteUserRequestPrivate(
    const MemoryDbRequest::Action action, DeleteUserRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserRequest
 * class' copy constructor.
 */
DeleteUserRequestPrivate::DeleteUserRequestPrivate(
    const DeleteUserRequestPrivate &other, DeleteUserRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
