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

#include "disassociaterolefromgrouprequest.h"
#include "disassociaterolefromgrouprequest_p.h"
#include "disassociaterolefromgroupresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DisassociateRoleFromGroupRequest
 * \brief The DisassociateRoleFromGroupRequest class provides an interface for Greengrass DisassociateRoleFromGroup requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::disassociateRoleFromGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateRoleFromGroupRequest::DisassociateRoleFromGroupRequest(const DisassociateRoleFromGroupRequest &other)
    : GreengrassRequest(new DisassociateRoleFromGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateRoleFromGroupRequest object.
 */
DisassociateRoleFromGroupRequest::DisassociateRoleFromGroupRequest()
    : GreengrassRequest(new DisassociateRoleFromGroupRequestPrivate(GreengrassRequest::DisassociateRoleFromGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateRoleFromGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateRoleFromGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateRoleFromGroupRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateRoleFromGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DisassociateRoleFromGroupRequestPrivate
 * \brief The DisassociateRoleFromGroupRequestPrivate class provides private implementation for DisassociateRoleFromGroupRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DisassociateRoleFromGroupRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DisassociateRoleFromGroupRequestPrivate::DisassociateRoleFromGroupRequestPrivate(
    const GreengrassRequest::Action action, DisassociateRoleFromGroupRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateRoleFromGroupRequest
 * class' copy constructor.
 */
DisassociateRoleFromGroupRequestPrivate::DisassociateRoleFromGroupRequestPrivate(
    const DisassociateRoleFromGroupRequestPrivate &other, DisassociateRoleFromGroupRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
