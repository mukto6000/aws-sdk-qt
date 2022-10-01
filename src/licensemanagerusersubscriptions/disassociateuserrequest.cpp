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

#include "disassociateuserrequest.h"
#include "disassociateuserrequest_p.h"
#include "disassociateuserresponse.h"
#include "licensemanagerusersubscriptionsrequest_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::DisassociateUserRequest
 * \brief The DisassociateUserRequest class provides an interface for LicenseManagerUserSubscriptions DisassociateUser requests.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::disassociateUser
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateUserRequest::DisassociateUserRequest(const DisassociateUserRequest &other)
    : LicenseManagerUserSubscriptionsRequest(new DisassociateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateUserRequest object.
 */
DisassociateUserRequest::DisassociateUserRequest()
    : LicenseManagerUserSubscriptionsRequest(new DisassociateUserRequestPrivate(LicenseManagerUserSubscriptionsRequest::DisassociateUserAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateUserRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateUserResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::DisassociateUserRequestPrivate
 * \brief The DisassociateUserRequestPrivate class provides private implementation for DisassociateUserRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a DisassociateUserRequestPrivate object for LicenseManagerUserSubscriptions \a action,
 * with public implementation \a q.
 */
DisassociateUserRequestPrivate::DisassociateUserRequestPrivate(
    const LicenseManagerUserSubscriptionsRequest::Action action, DisassociateUserRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateUserRequest
 * class' copy constructor.
 */
DisassociateUserRequestPrivate::DisassociateUserRequestPrivate(
    const DisassociateUserRequestPrivate &other, DisassociateUserRequest * const q)
    : LicenseManagerUserSubscriptionsRequestPrivate(other, q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
