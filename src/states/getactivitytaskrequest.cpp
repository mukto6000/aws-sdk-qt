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

#include "getactivitytaskrequest.h"
#include "getactivitytaskrequest_p.h"
#include "getactivitytaskresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/**
 * @class  GetActivityTaskRequest
 *
 * @brief  Implements SFN GetActivityTask requests.
 *
 * @see    SFNClient::getActivityTask
 */

/**
 * @brief  Constructs a new GetActivityTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetActivityTaskRequest::GetActivityTaskRequest(const GetActivityTaskRequest &other)
    : SFNRequest(new GetActivityTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetActivityTaskRequest object.
 */
GetActivityTaskRequest::GetActivityTaskRequest()
    : SFNRequest(new GetActivityTaskRequestPrivate(SFNRequest::GetActivityTaskAction, this))
{

}

bool GetActivityTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetActivityTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetActivityTaskResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SFNClient::send
 */
QtAws::Core::AwsAbstractResponse * GetActivityTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetActivityTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetActivityTaskRequestPrivate
 *
 * @brief  Private implementation for GetActivityTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetActivityTaskRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public GetActivityTaskRequest instance.
 */
GetActivityTaskRequestPrivate::GetActivityTaskRequestPrivate(
    const SFNRequest::Action action, GetActivityTaskRequest * const q)
    : SFNRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetActivityTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetActivityTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetActivityTaskRequest instance.
 */
GetActivityTaskRequestPrivate::GetActivityTaskRequestPrivate(
    const GetActivityTaskRequestPrivate &other, GetActivityTaskRequest * const q)
    : SFNRequestPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws