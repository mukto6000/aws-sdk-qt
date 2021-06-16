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

#include "putlaunchprofilemembersrequest.h"
#include "putlaunchprofilemembersrequest_p.h"
#include "putlaunchprofilemembersresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::PutLaunchProfileMembersRequest
 * \brief The PutLaunchProfileMembersRequest class provides an interface for NimbleStudio PutLaunchProfileMembers requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::putLaunchProfileMembers
 */

/*!
 * Constructs a copy of \a other.
 */
PutLaunchProfileMembersRequest::PutLaunchProfileMembersRequest(const PutLaunchProfileMembersRequest &other)
    : NimbleStudioRequest(new PutLaunchProfileMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLaunchProfileMembersRequest object.
 */
PutLaunchProfileMembersRequest::PutLaunchProfileMembersRequest()
    : NimbleStudioRequest(new PutLaunchProfileMembersRequestPrivate(NimbleStudioRequest::PutLaunchProfileMembersAction, this))
{

}

/*!
 * \reimp
 */
bool PutLaunchProfileMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLaunchProfileMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLaunchProfileMembersRequest::response(QNetworkReply * const reply) const
{
    return new PutLaunchProfileMembersResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::PutLaunchProfileMembersRequestPrivate
 * \brief The PutLaunchProfileMembersRequestPrivate class provides private implementation for PutLaunchProfileMembersRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a PutLaunchProfileMembersRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
PutLaunchProfileMembersRequestPrivate::PutLaunchProfileMembersRequestPrivate(
    const NimbleStudioRequest::Action action, PutLaunchProfileMembersRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLaunchProfileMembersRequest
 * class' copy constructor.
 */
PutLaunchProfileMembersRequestPrivate::PutLaunchProfileMembersRequestPrivate(
    const PutLaunchProfileMembersRequestPrivate &other, PutLaunchProfileMembersRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
