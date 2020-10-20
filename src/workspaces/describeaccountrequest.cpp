/*
    Copyright 2013-2020 Paul Colby

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

#include "describeaccountrequest.h"
#include "describeaccountrequest_p.h"
#include "describeaccountresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeAccountRequest
 * \brief The DescribeAccountRequest class provides an interface for WorkSpaces DescribeAccount requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountRequest::DescribeAccountRequest(const DescribeAccountRequest &other)
    : WorkSpacesRequest(new DescribeAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountRequest object.
 */
DescribeAccountRequest::DescribeAccountRequest()
    : WorkSpacesRequest(new DescribeAccountRequestPrivate(WorkSpacesRequest::DescribeAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DescribeAccountRequestPrivate
 * \brief The DescribeAccountRequestPrivate class provides private implementation for DescribeAccountRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeAccountRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DescribeAccountRequestPrivate::DescribeAccountRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeAccountRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountRequest
 * class' copy constructor.
 */
DescribeAccountRequestPrivate::DescribeAccountRequestPrivate(
    const DescribeAccountRequestPrivate &other, DescribeAccountRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
