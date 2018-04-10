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

#include "getpatchbaselinerequest.h"
#include "getpatchbaselinerequest_p.h"
#include "getpatchbaselineresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  GetPatchBaselineRequest
 *
 * @brief  Implements SSM GetPatchBaseline requests.
 *
 * @see    SSMClient::getPatchBaseline
 */

/**
 * @brief  Constructs a new GetPatchBaselineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPatchBaselineRequest::GetPatchBaselineRequest(const GetPatchBaselineRequest &other)
    : SSMRequest(new GetPatchBaselineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPatchBaselineRequest object.
 */
GetPatchBaselineRequest::GetPatchBaselineRequest()
    : SSMRequest(new GetPatchBaselineRequestPrivate(SSMRequest::GetPatchBaselineAction, this))
{

}

bool GetPatchBaselineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPatchBaselineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPatchBaselineResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPatchBaselineRequest::response(QNetworkReply * const reply) const
{
    return new GetPatchBaselineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPatchBaselineRequestPrivate
 *
 * @brief  Private implementation for GetPatchBaselineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPatchBaselineRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetPatchBaselineRequest instance.
 */
GetPatchBaselineRequestPrivate::GetPatchBaselineRequestPrivate(
    const SSMRequest::Action action, GetPatchBaselineRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPatchBaselineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPatchBaselineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPatchBaselineRequest instance.
 */
GetPatchBaselineRequestPrivate::GetPatchBaselineRequestPrivate(
    const GetPatchBaselineRequestPrivate &other, GetPatchBaselineRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws