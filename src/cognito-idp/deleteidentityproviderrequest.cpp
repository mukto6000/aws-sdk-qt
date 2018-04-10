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

#include "deleteidentityproviderrequest.h"
#include "deleteidentityproviderrequest_p.h"
#include "deleteidentityproviderresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  DeleteIdentityProviderRequest
 *
 * @brief  Implements CognitoIdentityProvider DeleteIdentityProvider requests.
 *
 * @see    CognitoIdentityProviderClient::deleteIdentityProvider
 */

/**
 * @brief  Constructs a new DeleteIdentityProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIdentityProviderRequest::DeleteIdentityProviderRequest(const DeleteIdentityProviderRequest &other)
    : CognitoIdentityProviderRequest(new DeleteIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIdentityProviderRequest object.
 */
DeleteIdentityProviderRequest::DeleteIdentityProviderRequest()
    : CognitoIdentityProviderRequest(new DeleteIdentityProviderRequestPrivate(CognitoIdentityProviderRequest::DeleteIdentityProviderAction, this))
{

}

bool DeleteIdentityProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIdentityProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIdentityProviderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentityProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIdentityProviderRequestPrivate
 *
 * @brief  Private implementation for DeleteIdentityProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityProviderRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public DeleteIdentityProviderRequest instance.
 */
DeleteIdentityProviderRequestPrivate::DeleteIdentityProviderRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentityProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIdentityProviderRequest instance.
 */
DeleteIdentityProviderRequestPrivate::DeleteIdentityProviderRequestPrivate(
    const DeleteIdentityProviderRequestPrivate &other, DeleteIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws