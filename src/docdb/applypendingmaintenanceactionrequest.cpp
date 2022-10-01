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

#include "applypendingmaintenanceactionrequest.h"
#include "applypendingmaintenanceactionrequest_p.h"
#include "applypendingmaintenanceactionresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ApplyPendingMaintenanceActionRequest
 * \brief The ApplyPendingMaintenanceActionRequest class provides an interface for DocDb ApplyPendingMaintenanceAction requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::applyPendingMaintenanceAction
 */

/*!
 * Constructs a copy of \a other.
 */
ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest(const ApplyPendingMaintenanceActionRequest &other)
    : DocDbRequest(new ApplyPendingMaintenanceActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ApplyPendingMaintenanceActionRequest object.
 */
ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest()
    : DocDbRequest(new ApplyPendingMaintenanceActionRequestPrivate(DocDbRequest::ApplyPendingMaintenanceActionAction, this))
{

}

/*!
 * \reimp
 */
bool ApplyPendingMaintenanceActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ApplyPendingMaintenanceActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ApplyPendingMaintenanceActionRequest::response(QNetworkReply * const reply) const
{
    return new ApplyPendingMaintenanceActionResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::ApplyPendingMaintenanceActionRequestPrivate
 * \brief The ApplyPendingMaintenanceActionRequestPrivate class provides private implementation for ApplyPendingMaintenanceActionRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ApplyPendingMaintenanceActionRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ApplyPendingMaintenanceActionRequestPrivate::ApplyPendingMaintenanceActionRequestPrivate(
    const DocDbRequest::Action action, ApplyPendingMaintenanceActionRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ApplyPendingMaintenanceActionRequest
 * class' copy constructor.
 */
ApplyPendingMaintenanceActionRequestPrivate::ApplyPendingMaintenanceActionRequestPrivate(
    const ApplyPendingMaintenanceActionRequestPrivate &other, ApplyPendingMaintenanceActionRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
