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

#include "getassociatedrolerequest.h"
#include "getassociatedrolerequest_p.h"
#include "getassociatedroleresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetAssociatedRoleRequest
 * \brief The GetAssociatedRoleRequest class provides an interface for Greengrass GetAssociatedRole requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getAssociatedRole
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssociatedRoleRequest::GetAssociatedRoleRequest(const GetAssociatedRoleRequest &other)
    : GreengrassRequest(new GetAssociatedRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssociatedRoleRequest object.
 */
GetAssociatedRoleRequest::GetAssociatedRoleRequest()
    : GreengrassRequest(new GetAssociatedRoleRequestPrivate(GreengrassRequest::GetAssociatedRoleAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssociatedRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssociatedRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssociatedRoleRequest::response(QNetworkReply * const reply) const
{
    return new GetAssociatedRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetAssociatedRoleRequestPrivate
 * \brief The GetAssociatedRoleRequestPrivate class provides private implementation for GetAssociatedRoleRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetAssociatedRoleRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetAssociatedRoleRequestPrivate::GetAssociatedRoleRequestPrivate(
    const GreengrassRequest::Action action, GetAssociatedRoleRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssociatedRoleRequest
 * class' copy constructor.
 */
GetAssociatedRoleRequestPrivate::GetAssociatedRoleRequestPrivate(
    const GetAssociatedRoleRequestPrivate &other, GetAssociatedRoleRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
