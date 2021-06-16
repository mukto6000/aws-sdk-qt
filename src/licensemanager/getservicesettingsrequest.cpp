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

#include "getservicesettingsrequest.h"
#include "getservicesettingsrequest_p.h"
#include "getservicesettingsresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetServiceSettingsRequest
 * \brief The GetServiceSettingsRequest class provides an interface for LicenseManager GetServiceSettings requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::getServiceSettings
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceSettingsRequest::GetServiceSettingsRequest(const GetServiceSettingsRequest &other)
    : LicenseManagerRequest(new GetServiceSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceSettingsRequest object.
 */
GetServiceSettingsRequest::GetServiceSettingsRequest()
    : LicenseManagerRequest(new GetServiceSettingsRequestPrivate(LicenseManagerRequest::GetServiceSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceSettingsRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::GetServiceSettingsRequestPrivate
 * \brief The GetServiceSettingsRequestPrivate class provides private implementation for GetServiceSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetServiceSettingsRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
GetServiceSettingsRequestPrivate::GetServiceSettingsRequestPrivate(
    const LicenseManagerRequest::Action action, GetServiceSettingsRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceSettingsRequest
 * class' copy constructor.
 */
GetServiceSettingsRequestPrivate::GetServiceSettingsRequestPrivate(
    const GetServiceSettingsRequestPrivate &other, GetServiceSettingsRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
