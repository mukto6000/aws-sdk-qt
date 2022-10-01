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

#include "createdbclustersnapshotrequest.h"
#include "createdbclustersnapshotrequest_p.h"
#include "createdbclustersnapshotresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBClusterSnapshotRequest
 * \brief The CreateDBClusterSnapshotRequest class provides an interface for DocDb CreateDBClusterSnapshot requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBClusterSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBClusterSnapshotRequest::CreateDBClusterSnapshotRequest(const CreateDBClusterSnapshotRequest &other)
    : DocDbRequest(new CreateDBClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBClusterSnapshotRequest object.
 */
CreateDBClusterSnapshotRequest::CreateDBClusterSnapshotRequest()
    : DocDbRequest(new CreateDBClusterSnapshotRequestPrivate(DocDbRequest::CreateDBClusterSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBClusterSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBClusterSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CreateDBClusterSnapshotRequestPrivate
 * \brief The CreateDBClusterSnapshotRequestPrivate class provides private implementation for CreateDBClusterSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBClusterSnapshotRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CreateDBClusterSnapshotRequestPrivate::CreateDBClusterSnapshotRequestPrivate(
    const DocDbRequest::Action action, CreateDBClusterSnapshotRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterSnapshotRequest
 * class' copy constructor.
 */
CreateDBClusterSnapshotRequestPrivate::CreateDBClusterSnapshotRequestPrivate(
    const CreateDBClusterSnapshotRequestPrivate &other, CreateDBClusterSnapshotRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
