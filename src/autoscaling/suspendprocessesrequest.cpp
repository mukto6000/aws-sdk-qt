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

#include "suspendprocessesrequest.h"
#include "suspendprocessesrequest_p.h"
#include "suspendprocessesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SuspendProcessesRequest
 *
 * \brief The SuspendProcessesRequest class encapsulates AutoScaling SuspendProcesses requests.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::suspendProcesses
 */

/*!
 * @brief  Constructs a new SuspendProcessesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SuspendProcessesRequest::SuspendProcessesRequest(const SuspendProcessesRequest &other)
    : AutoScalingRequest(new SuspendProcessesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SuspendProcessesRequest object.
 */
SuspendProcessesRequest::SuspendProcessesRequest()
    : AutoScalingRequest(new SuspendProcessesRequestPrivate(AutoScalingRequest::SuspendProcessesAction, this))
{

}

/*!
 * \reimp
 */
bool SuspendProcessesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an SuspendProcessesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SuspendProcessesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * SuspendProcessesRequest::response(QNetworkReply * const reply) const
{
    return new SuspendProcessesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SuspendProcessesRequestPrivate
 *
 * @brief  Private implementation for SuspendProcessesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SuspendProcessesRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public SuspendProcessesRequest instance.
 */
SuspendProcessesRequestPrivate::SuspendProcessesRequestPrivate(
    const AutoScalingRequest::Action action, SuspendProcessesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SuspendProcessesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SuspendProcessesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SuspendProcessesRequest instance.
 */
SuspendProcessesRequestPrivate::SuspendProcessesRequestPrivate(
    const SuspendProcessesRequestPrivate &other, SuspendProcessesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
