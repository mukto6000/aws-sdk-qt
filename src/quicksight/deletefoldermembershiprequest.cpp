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

#include "deletefoldermembershiprequest.h"
#include "deletefoldermembershiprequest_p.h"
#include "deletefoldermembershipresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteFolderMembershipRequest
 * \brief The DeleteFolderMembershipRequest class provides an interface for QuickSight DeleteFolderMembership requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteFolderMembership
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFolderMembershipRequest::DeleteFolderMembershipRequest(const DeleteFolderMembershipRequest &other)
    : QuickSightRequest(new DeleteFolderMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFolderMembershipRequest object.
 */
DeleteFolderMembershipRequest::DeleteFolderMembershipRequest()
    : QuickSightRequest(new DeleteFolderMembershipRequestPrivate(QuickSightRequest::DeleteFolderMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFolderMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFolderMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFolderMembershipRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFolderMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteFolderMembershipRequestPrivate
 * \brief The DeleteFolderMembershipRequestPrivate class provides private implementation for DeleteFolderMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteFolderMembershipRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteFolderMembershipRequestPrivate::DeleteFolderMembershipRequestPrivate(
    const QuickSightRequest::Action action, DeleteFolderMembershipRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFolderMembershipRequest
 * class' copy constructor.
 */
DeleteFolderMembershipRequestPrivate::DeleteFolderMembershipRequestPrivate(
    const DeleteFolderMembershipRequestPrivate &other, DeleteFolderMembershipRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
