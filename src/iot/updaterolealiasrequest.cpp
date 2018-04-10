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

#include "updaterolealiasrequest.h"
#include "updaterolealiasrequest_p.h"
#include "updaterolealiasresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  UpdateRoleAliasRequest
 *
 * @brief  Implements IoT UpdateRoleAlias requests.
 *
 * @see    IoTClient::updateRoleAlias
 */

/**
 * @brief  Constructs a new UpdateRoleAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRoleAliasRequest::UpdateRoleAliasRequest(const UpdateRoleAliasRequest &other)
    : IoTRequest(new UpdateRoleAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRoleAliasRequest object.
 */
UpdateRoleAliasRequest::UpdateRoleAliasRequest()
    : IoTRequest(new UpdateRoleAliasRequestPrivate(IoTRequest::UpdateRoleAliasAction, this))
{

}

bool UpdateRoleAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRoleAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRoleAliasResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRoleAliasRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRoleAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRoleAliasRequestPrivate
 *
 * @brief  Private implementation for UpdateRoleAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoleAliasRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public UpdateRoleAliasRequest instance.
 */
UpdateRoleAliasRequestPrivate::UpdateRoleAliasRequestPrivate(
    const IoTRequest::Action action, UpdateRoleAliasRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoleAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRoleAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRoleAliasRequest instance.
 */
UpdateRoleAliasRequestPrivate::UpdateRoleAliasRequestPrivate(
    const UpdateRoleAliasRequestPrivate &other, UpdateRoleAliasRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws