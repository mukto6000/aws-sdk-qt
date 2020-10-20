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

#include "describemounttargetsecuritygroupsrequest.h"
#include "describemounttargetsecuritygroupsrequest_p.h"
#include "describemounttargetsecuritygroupsresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DescribeMountTargetSecurityGroupsRequest
 * \brief The DescribeMountTargetSecurityGroupsRequest class provides an interface for EFS DescribeMountTargetSecurityGroups requests.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EfsClient::describeMountTargetSecurityGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMountTargetSecurityGroupsRequest::DescribeMountTargetSecurityGroupsRequest(const DescribeMountTargetSecurityGroupsRequest &other)
    : EfsRequest(new DescribeMountTargetSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMountTargetSecurityGroupsRequest object.
 */
DescribeMountTargetSecurityGroupsRequest::DescribeMountTargetSecurityGroupsRequest()
    : EfsRequest(new DescribeMountTargetSecurityGroupsRequestPrivate(EfsRequest::DescribeMountTargetSecurityGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMountTargetSecurityGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMountTargetSecurityGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMountTargetSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMountTargetSecurityGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::EFS::DescribeMountTargetSecurityGroupsRequestPrivate
 * \brief The DescribeMountTargetSecurityGroupsRequestPrivate class provides private implementation for DescribeMountTargetSecurityGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DescribeMountTargetSecurityGroupsRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
DescribeMountTargetSecurityGroupsRequestPrivate::DescribeMountTargetSecurityGroupsRequestPrivate(
    const EfsRequest::Action action, DescribeMountTargetSecurityGroupsRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMountTargetSecurityGroupsRequest
 * class' copy constructor.
 */
DescribeMountTargetSecurityGroupsRequestPrivate::DescribeMountTargetSecurityGroupsRequestPrivate(
    const DescribeMountTargetSecurityGroupsRequestPrivate &other, DescribeMountTargetSecurityGroupsRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
