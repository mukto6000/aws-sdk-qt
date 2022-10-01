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

#include "restoredbclusterfromsnapshotrequest.h"
#include "restoredbclusterfromsnapshotrequest_p.h"
#include "restoredbclusterfromsnapshotresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RestoreDBClusterFromSnapshotRequest
 * \brief The RestoreDBClusterFromSnapshotRequest class provides an interface for DocDb RestoreDBClusterFromSnapshot requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::restoreDBClusterFromSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreDBClusterFromSnapshotRequest::RestoreDBClusterFromSnapshotRequest(const RestoreDBClusterFromSnapshotRequest &other)
    : DocDbRequest(new RestoreDBClusterFromSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreDBClusterFromSnapshotRequest object.
 */
RestoreDBClusterFromSnapshotRequest::RestoreDBClusterFromSnapshotRequest()
    : DocDbRequest(new RestoreDBClusterFromSnapshotRequestPrivate(DocDbRequest::RestoreDBClusterFromSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreDBClusterFromSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreDBClusterFromSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreDBClusterFromSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new RestoreDBClusterFromSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::RestoreDBClusterFromSnapshotRequestPrivate
 * \brief The RestoreDBClusterFromSnapshotRequestPrivate class provides private implementation for RestoreDBClusterFromSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RestoreDBClusterFromSnapshotRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
RestoreDBClusterFromSnapshotRequestPrivate::RestoreDBClusterFromSnapshotRequestPrivate(
    const DocDbRequest::Action action, RestoreDBClusterFromSnapshotRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreDBClusterFromSnapshotRequest
 * class' copy constructor.
 */
RestoreDBClusterFromSnapshotRequestPrivate::RestoreDBClusterFromSnapshotRequestPrivate(
    const RestoreDBClusterFromSnapshotRequestPrivate &other, RestoreDBClusterFromSnapshotRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
