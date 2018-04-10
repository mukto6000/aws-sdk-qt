/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "adminupdatedevicestatusrequest.h"
#include "adminupdatedevicestatusrequest_p.h"
#include "adminupdatedevicestatusresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminUpdateDeviceStatusRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminUpdateDeviceStatus requests.
 *
 * @see    CognitoIdentityProviderClient::adminUpdateDeviceStatus
 */

/**
 * @brief  Constructs a new AdminUpdateDeviceStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminUpdateDeviceStatusRequest::AdminUpdateDeviceStatusRequest(const AdminUpdateDeviceStatusRequest &other)
    : CognitoIdentityProviderRequest(new AdminUpdateDeviceStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminUpdateDeviceStatusRequest object.
 */
AdminUpdateDeviceStatusRequest::AdminUpdateDeviceStatusRequest()
    : CognitoIdentityProviderRequest(new AdminUpdateDeviceStatusRequestPrivate(CognitoIdentityProviderRequest::AdminUpdateDeviceStatusAction, this))
{

}

bool AdminUpdateDeviceStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminUpdateDeviceStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminUpdateDeviceStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminUpdateDeviceStatusRequest::response(QNetworkReply * const reply) const
{
    return new AdminUpdateDeviceStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminUpdateDeviceStatusRequestPrivate
 *
 * @brief  Private implementation for AdminUpdateDeviceStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminUpdateDeviceStatusRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminUpdateDeviceStatusRequest instance.
 */
AdminUpdateDeviceStatusRequestPrivate::AdminUpdateDeviceStatusRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminUpdateDeviceStatusRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminUpdateDeviceStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminUpdateDeviceStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminUpdateDeviceStatusRequest instance.
 */
AdminUpdateDeviceStatusRequestPrivate::AdminUpdateDeviceStatusRequestPrivate(
    const AdminUpdateDeviceStatusRequestPrivate &other, AdminUpdateDeviceStatusRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws