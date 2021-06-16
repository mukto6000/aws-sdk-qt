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

#include "updateservicesettingsrequest.h"
#include "updateservicesettingsrequest_p.h"
#include "updateservicesettingsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateServiceSettingsRequest
 * \brief The UpdateServiceSettingsRequest class provides an interface for LicenseManager UpdateServiceSettings requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::updateServiceSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServiceSettingsRequest::UpdateServiceSettingsRequest(const UpdateServiceSettingsRequest &other)
    : LicenseManagerRequest(new UpdateServiceSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServiceSettingsRequest object.
 */
UpdateServiceSettingsRequest::UpdateServiceSettingsRequest()
    : LicenseManagerRequest(new UpdateServiceSettingsRequestPrivate(LicenseManagerRequest::UpdateServiceSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServiceSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServiceSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServiceSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::UpdateServiceSettingsRequestPrivate
 * \brief The UpdateServiceSettingsRequestPrivate class provides private implementation for UpdateServiceSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateServiceSettingsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
UpdateServiceSettingsRequestPrivate::UpdateServiceSettingsRequestPrivate(
    const LicenseManagerRequest::Action action, UpdateServiceSettingsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceSettingsRequest
 * class' copy constructor.
 */
UpdateServiceSettingsRequestPrivate::UpdateServiceSettingsRequestPrivate(
    const UpdateServiceSettingsRequestPrivate &other, UpdateServiceSettingsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
