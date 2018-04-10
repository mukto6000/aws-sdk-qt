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

#include "updateresourceserverrequest.h"
#include "updateresourceserverrequest_p.h"
#include "updateresourceserverresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  UpdateResourceServerRequest
 *
 * @brief  Implements CognitoIdentityProvider UpdateResourceServer requests.
 *
 * @see    CognitoIdentityProviderClient::updateResourceServer
 */

/**
 * @brief  Constructs a new UpdateResourceServerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateResourceServerRequest::UpdateResourceServerRequest(const UpdateResourceServerRequest &other)
    : CognitoIdentityProviderRequest(new UpdateResourceServerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateResourceServerRequest object.
 */
UpdateResourceServerRequest::UpdateResourceServerRequest()
    : CognitoIdentityProviderRequest(new UpdateResourceServerRequestPrivate(CognitoIdentityProviderRequest::UpdateResourceServerAction, this))
{

}

bool UpdateResourceServerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateResourceServerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateResourceServerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResourceServerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourceServerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateResourceServerRequestPrivate
 *
 * @brief  Private implementation for UpdateResourceServerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResourceServerRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public UpdateResourceServerRequest instance.
 */
UpdateResourceServerRequestPrivate::UpdateResourceServerRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResourceServerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourceServerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateResourceServerRequest instance.
 */
UpdateResourceServerRequestPrivate::UpdateResourceServerRequestPrivate(
    const UpdateResourceServerRequestPrivate &other, UpdateResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws