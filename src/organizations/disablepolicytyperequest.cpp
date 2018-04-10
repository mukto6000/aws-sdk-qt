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

#include "disablepolicytyperequest.h"
#include "disablepolicytyperequest_p.h"
#include "disablepolicytyperesponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  DisablePolicyTypeRequest
 *
 * @brief  Implements Organizations DisablePolicyType requests.
 *
 * @see    OrganizationsClient::disablePolicyType
 */

/**
 * @brief  Constructs a new DisablePolicyTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisablePolicyTypeRequest::DisablePolicyTypeRequest(const DisablePolicyTypeRequest &other)
    : OrganizationsRequest(new DisablePolicyTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisablePolicyTypeRequest object.
 */
DisablePolicyTypeRequest::DisablePolicyTypeRequest()
    : OrganizationsRequest(new DisablePolicyTypeRequestPrivate(OrganizationsRequest::DisablePolicyTypeAction, this))
{

}

bool DisablePolicyTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisablePolicyTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisablePolicyTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * DisablePolicyTypeRequest::response(QNetworkReply * const reply) const
{
    return new DisablePolicyTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisablePolicyTypeRequestPrivate
 *
 * @brief  Private implementation for DisablePolicyTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisablePolicyTypeRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public DisablePolicyTypeRequest instance.
 */
DisablePolicyTypeRequestPrivate::DisablePolicyTypeRequestPrivate(
    const OrganizationsRequest::Action action, DisablePolicyTypeRequest * const q)
    : OrganizationsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisablePolicyTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisablePolicyTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisablePolicyTypeRequest instance.
 */
DisablePolicyTypeRequestPrivate::DisablePolicyTypeRequestPrivate(
    const DisablePolicyTypeRequestPrivate &other, DisablePolicyTypeRequest * const q)
    : OrganizationsRequestPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws