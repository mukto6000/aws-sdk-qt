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

#include "associateresourcesharerequest.h"
#include "associateresourcesharerequest_p.h"
#include "associateresourceshareresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::AssociateResourceShareRequest
 * \brief The AssociateResourceShareRequest class provides an interface for RAM AssociateResourceShare requests.
 *
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resource. The
 *  following principals are
 * 
 *  supported> <ul> <li>
 * 
 *  The ID of an AWS
 * 
 *  accoun> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an OU from AWS
 * 
 *  Organization> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an organization from AWS
 * 
 *  Organization> </li> </ul>
 * 
 *  If you specify an AWS account that doesn't exist in the same organization as the account that owns the resource share,
 *  the owner of the specified account receives an invitation to accept the resource share. After the owner accepts the
 *  invitation, they can access the resources in the resource share. An administrator of the specified account can use IAM
 *  policies to restrict access resources in the resource
 *
 * \sa RamClient::associateResourceShare
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateResourceShareRequest::AssociateResourceShareRequest(const AssociateResourceShareRequest &other)
    : RamRequest(new AssociateResourceShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateResourceShareRequest object.
 */
AssociateResourceShareRequest::AssociateResourceShareRequest()
    : RamRequest(new AssociateResourceShareRequestPrivate(RamRequest::AssociateResourceShareAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateResourceShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateResourceShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateResourceShareRequest::response(QNetworkReply * const reply) const
{
    return new AssociateResourceShareResponse(*this, reply);
}

/*!
 * \class QtAws::RAM::AssociateResourceShareRequestPrivate
 * \brief The AssociateResourceShareRequestPrivate class provides private implementation for AssociateResourceShareRequest.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a AssociateResourceShareRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
AssociateResourceShareRequestPrivate::AssociateResourceShareRequestPrivate(
    const RamRequest::Action action, AssociateResourceShareRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateResourceShareRequest
 * class' copy constructor.
 */
AssociateResourceShareRequestPrivate::AssociateResourceShareRequestPrivate(
    const AssociateResourceShareRequestPrivate &other, AssociateResourceShareRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace RAM
} // namespace QtAws
