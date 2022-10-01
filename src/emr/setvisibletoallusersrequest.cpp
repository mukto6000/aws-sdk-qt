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

#include "setvisibletoallusersrequest.h"
#include "setvisibletoallusersrequest_p.h"
#include "setvisibletoallusersresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::SetVisibleToAllUsersRequest
 * \brief The SetVisibleToAllUsersRequest class provides an interface for Emr SetVisibleToAllUsers requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::setVisibleToAllUsers
 */

/*!
 * Constructs a copy of \a other.
 */
SetVisibleToAllUsersRequest::SetVisibleToAllUsersRequest(const SetVisibleToAllUsersRequest &other)
    : EmrRequest(new SetVisibleToAllUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetVisibleToAllUsersRequest object.
 */
SetVisibleToAllUsersRequest::SetVisibleToAllUsersRequest()
    : EmrRequest(new SetVisibleToAllUsersRequestPrivate(EmrRequest::SetVisibleToAllUsersAction, this))
{

}

/*!
 * \reimp
 */
bool SetVisibleToAllUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetVisibleToAllUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetVisibleToAllUsersRequest::response(QNetworkReply * const reply) const
{
    return new SetVisibleToAllUsersResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::SetVisibleToAllUsersRequestPrivate
 * \brief The SetVisibleToAllUsersRequestPrivate class provides private implementation for SetVisibleToAllUsersRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a SetVisibleToAllUsersRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
SetVisibleToAllUsersRequestPrivate::SetVisibleToAllUsersRequestPrivate(
    const EmrRequest::Action action, SetVisibleToAllUsersRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetVisibleToAllUsersRequest
 * class' copy constructor.
 */
SetVisibleToAllUsersRequestPrivate::SetVisibleToAllUsersRequestPrivate(
    const SetVisibleToAllUsersRequestPrivate &other, SetVisibleToAllUsersRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
