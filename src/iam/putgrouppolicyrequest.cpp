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

#include "putgrouppolicyrequest.h"
#include "putgrouppolicyrequest_p.h"
#include "putgrouppolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  PutGroupPolicyRequest
 *
 * @brief  Implements IAM PutGroupPolicy requests.
 *
 * @see    IAMClient::putGroupPolicy
 */

/**
 * @brief  Constructs a new PutGroupPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutGroupPolicyRequest::PutGroupPolicyRequest(const PutGroupPolicyRequest &other)
    : IAMRequest(new PutGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutGroupPolicyRequest object.
 */
PutGroupPolicyRequest::PutGroupPolicyRequest()
    : IAMRequest(new PutGroupPolicyRequestPrivate(IAMRequest::PutGroupPolicyAction, this))
{

}

bool PutGroupPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutGroupPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutGroupPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * PutGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutGroupPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutGroupPolicyRequestPrivate
 *
 * @brief  Private implementation for PutGroupPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutGroupPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public PutGroupPolicyRequest instance.
 */
PutGroupPolicyRequestPrivate::PutGroupPolicyRequestPrivate(
    const IAMRequest::Action action, PutGroupPolicyRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutGroupPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutGroupPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutGroupPolicyRequest instance.
 */
PutGroupPolicyRequestPrivate::PutGroupPolicyRequestPrivate(
    const PutGroupPolicyRequestPrivate &other, PutGroupPolicyRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws