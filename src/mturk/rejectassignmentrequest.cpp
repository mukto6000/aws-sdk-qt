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

#include "rejectassignmentrequest.h"
#include "rejectassignmentrequest_p.h"
#include "rejectassignmentresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::RejectAssignmentRequest
 * \brief The RejectAssignmentRequest class provides an interface for MTurk RejectAssignment requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::rejectAssignment
 */

/*!
 * Constructs a copy of \a other.
 */
RejectAssignmentRequest::RejectAssignmentRequest(const RejectAssignmentRequest &other)
    : MTurkRequest(new RejectAssignmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectAssignmentRequest object.
 */
RejectAssignmentRequest::RejectAssignmentRequest()
    : MTurkRequest(new RejectAssignmentRequestPrivate(MTurkRequest::RejectAssignmentAction, this))
{

}

/*!
 * \reimp
 */
bool RejectAssignmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectAssignmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new RejectAssignmentResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::RejectAssignmentRequestPrivate
 * \brief The RejectAssignmentRequestPrivate class provides private implementation for RejectAssignmentRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a RejectAssignmentRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
RejectAssignmentRequestPrivate::RejectAssignmentRequestPrivate(
    const MTurkRequest::Action action, RejectAssignmentRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectAssignmentRequest
 * class' copy constructor.
 */
RejectAssignmentRequestPrivate::RejectAssignmentRequestPrivate(
    const RejectAssignmentRequestPrivate &other, RejectAssignmentRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
