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

#include "describeaccountpreferencesrequest.h"
#include "describeaccountpreferencesrequest_p.h"
#include "describeaccountpreferencesresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeAccountPreferencesRequest
 * \brief The DescribeAccountPreferencesRequest class provides an interface for Efs DescribeAccountPreferences requests.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::describeAccountPreferences
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountPreferencesRequest::DescribeAccountPreferencesRequest(const DescribeAccountPreferencesRequest &other)
    : EfsRequest(new DescribeAccountPreferencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountPreferencesRequest object.
 */
DescribeAccountPreferencesRequest::DescribeAccountPreferencesRequest()
    : EfsRequest(new DescribeAccountPreferencesRequestPrivate(EfsRequest::DescribeAccountPreferencesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountPreferencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountPreferencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountPreferencesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountPreferencesResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::DescribeAccountPreferencesRequestPrivate
 * \brief The DescribeAccountPreferencesRequestPrivate class provides private implementation for DescribeAccountPreferencesRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeAccountPreferencesRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
DescribeAccountPreferencesRequestPrivate::DescribeAccountPreferencesRequestPrivate(
    const EfsRequest::Action action, DescribeAccountPreferencesRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountPreferencesRequest
 * class' copy constructor.
 */
DescribeAccountPreferencesRequestPrivate::DescribeAccountPreferencesRequestPrivate(
    const DescribeAccountPreferencesRequestPrivate &other, DescribeAccountPreferencesRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
