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

#include "describeengineversionsrequest.h"
#include "describeengineversionsrequest_p.h"
#include "describeengineversionsresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeEngineVersionsRequest
 * \brief The DescribeEngineVersionsRequest class provides an interface for MemoryDb DescribeEngineVersions requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeEngineVersions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEngineVersionsRequest::DescribeEngineVersionsRequest(const DescribeEngineVersionsRequest &other)
    : MemoryDbRequest(new DescribeEngineVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEngineVersionsRequest object.
 */
DescribeEngineVersionsRequest::DescribeEngineVersionsRequest()
    : MemoryDbRequest(new DescribeEngineVersionsRequestPrivate(MemoryDbRequest::DescribeEngineVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEngineVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEngineVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEngineVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEngineVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DescribeEngineVersionsRequestPrivate
 * \brief The DescribeEngineVersionsRequestPrivate class provides private implementation for DescribeEngineVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeEngineVersionsRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DescribeEngineVersionsRequestPrivate::DescribeEngineVersionsRequestPrivate(
    const MemoryDbRequest::Action action, DescribeEngineVersionsRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEngineVersionsRequest
 * class' copy constructor.
 */
DescribeEngineVersionsRequestPrivate::DescribeEngineVersionsRequestPrivate(
    const DescribeEngineVersionsRequestPrivate &other, DescribeEngineVersionsRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
