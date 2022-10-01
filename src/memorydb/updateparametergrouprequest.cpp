/*
    Copyright 2013-2021 Paul Colby

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

#include "updateparametergrouprequest.h"
#include "updateparametergrouprequest_p.h"
#include "updateparametergroupresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::UpdateParameterGroupRequest
 * \brief The UpdateParameterGroupRequest class provides an interface for MemoryDb UpdateParameterGroup requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::updateParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateParameterGroupRequest::UpdateParameterGroupRequest(const UpdateParameterGroupRequest &other)
    : MemoryDbRequest(new UpdateParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateParameterGroupRequest object.
 */
UpdateParameterGroupRequest::UpdateParameterGroupRequest()
    : MemoryDbRequest(new UpdateParameterGroupRequestPrivate(MemoryDbRequest::UpdateParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::UpdateParameterGroupRequestPrivate
 * \brief The UpdateParameterGroupRequestPrivate class provides private implementation for UpdateParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a UpdateParameterGroupRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
UpdateParameterGroupRequestPrivate::UpdateParameterGroupRequestPrivate(
    const MemoryDbRequest::Action action, UpdateParameterGroupRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateParameterGroupRequest
 * class' copy constructor.
 */
UpdateParameterGroupRequestPrivate::UpdateParameterGroupRequestPrivate(
    const UpdateParameterGroupRequestPrivate &other, UpdateParameterGroupRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
