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

#include "checkoutlicenserequest.h"
#include "checkoutlicenserequest_p.h"
#include "checkoutlicenseresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CheckoutLicenseRequest
 * \brief The CheckoutLicenseRequest class provides an interface for LicenseManager CheckoutLicense requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::checkoutLicense
 */

/*!
 * Constructs a copy of \a other.
 */
CheckoutLicenseRequest::CheckoutLicenseRequest(const CheckoutLicenseRequest &other)
    : LicenseManagerRequest(new CheckoutLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CheckoutLicenseRequest object.
 */
CheckoutLicenseRequest::CheckoutLicenseRequest()
    : LicenseManagerRequest(new CheckoutLicenseRequestPrivate(LicenseManagerRequest::CheckoutLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool CheckoutLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CheckoutLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CheckoutLicenseRequest::response(QNetworkReply * const reply) const
{
    return new CheckoutLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CheckoutLicenseRequestPrivate
 * \brief The CheckoutLicenseRequestPrivate class provides private implementation for CheckoutLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CheckoutLicenseRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CheckoutLicenseRequestPrivate::CheckoutLicenseRequestPrivate(
    const LicenseManagerRequest::Action action, CheckoutLicenseRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CheckoutLicenseRequest
 * class' copy constructor.
 */
CheckoutLicenseRequestPrivate::CheckoutLicenseRequestPrivate(
    const CheckoutLicenseRequestPrivate &other, CheckoutLicenseRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
