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

#include "putscheduledactionrequest.h"
#include "putscheduledactionrequest_p.h"
#include "putscheduledactionresponse.h"
#include "applicationautoscalingrequest_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

/**
 * @class  PutScheduledActionRequest
 *
 * @brief  Implements ApplicationAutoScaling PutScheduledAction requests.
 *
 * @see    ApplicationAutoScalingClient::putScheduledAction
 */

/**
 * @brief  Constructs a new PutScheduledActionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutScheduledActionRequest::PutScheduledActionRequest(const PutScheduledActionRequest &other)
    : ApplicationAutoScalingRequest(new PutScheduledActionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutScheduledActionRequest object.
 */
PutScheduledActionRequest::PutScheduledActionRequest()
    : ApplicationAutoScalingRequest(new PutScheduledActionRequestPrivate(ApplicationAutoScalingRequest::PutScheduledActionAction, this))
{

}

bool PutScheduledActionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutScheduledActionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutScheduledActionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ApplicationAutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * PutScheduledActionRequest::response(QNetworkReply * const reply) const
{
    return new PutScheduledActionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutScheduledActionRequestPrivate
 *
 * @brief  Private implementation for PutScheduledActionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutScheduledActionRequestPrivate object.
 *
 * @param  action  ApplicationAutoScaling action being performed.
 * @param  q       Pointer to this object's public PutScheduledActionRequest instance.
 */
PutScheduledActionRequestPrivate::PutScheduledActionRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, PutScheduledActionRequest * const q)
    : ApplicationAutoScalingRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutScheduledActionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutScheduledActionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutScheduledActionRequest instance.
 */
PutScheduledActionRequestPrivate::PutScheduledActionRequestPrivate(
    const PutScheduledActionRequestPrivate &other, PutScheduledActionRequest * const q)
    : ApplicationAutoScalingRequestPrivate(other, q)
{

}

} // namespace ApplicationAutoScaling
} // namespace QtAws