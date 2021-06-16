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

#include "deleteeventtrackerrequest.h"
#include "deleteeventtrackerrequest_p.h"
#include "deleteeventtrackerresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteEventTrackerRequest
 * \brief The DeleteEventTrackerRequest class provides an interface for Personalize DeleteEventTracker requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteEventTracker
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventTrackerRequest::DeleteEventTrackerRequest(const DeleteEventTrackerRequest &other)
    : PersonalizeRequest(new DeleteEventTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventTrackerRequest object.
 */
DeleteEventTrackerRequest::DeleteEventTrackerRequest()
    : PersonalizeRequest(new DeleteEventTrackerRequestPrivate(PersonalizeRequest::DeleteEventTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventTrackerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteEventTrackerRequestPrivate
 * \brief The DeleteEventTrackerRequestPrivate class provides private implementation for DeleteEventTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteEventTrackerRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteEventTrackerRequestPrivate::DeleteEventTrackerRequestPrivate(
    const PersonalizeRequest::Action action, DeleteEventTrackerRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventTrackerRequest
 * class' copy constructor.
 */
DeleteEventTrackerRequestPrivate::DeleteEventTrackerRequestPrivate(
    const DeleteEventTrackerRequestPrivate &other, DeleteEventTrackerRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
