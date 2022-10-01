// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateautoscalinggrouprequest.h"
#include "updateautoscalinggrouprequest_p.h"
#include "updateautoscalinggroupresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::UpdateAutoScalingGroupRequest
 * \brief The UpdateAutoScalingGroupRequest class provides an interface for AutoScaling UpdateAutoScalingGroup requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::updateAutoScalingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAutoScalingGroupRequest::UpdateAutoScalingGroupRequest(const UpdateAutoScalingGroupRequest &other)
    : AutoScalingRequest(new UpdateAutoScalingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAutoScalingGroupRequest object.
 */
UpdateAutoScalingGroupRequest::UpdateAutoScalingGroupRequest()
    : AutoScalingRequest(new UpdateAutoScalingGroupRequestPrivate(AutoScalingRequest::UpdateAutoScalingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAutoScalingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAutoScalingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAutoScalingGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAutoScalingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::UpdateAutoScalingGroupRequestPrivate
 * \brief The UpdateAutoScalingGroupRequestPrivate class provides private implementation for UpdateAutoScalingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a UpdateAutoScalingGroupRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
UpdateAutoScalingGroupRequestPrivate::UpdateAutoScalingGroupRequestPrivate(
    const AutoScalingRequest::Action action, UpdateAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAutoScalingGroupRequest
 * class' copy constructor.
 */
UpdateAutoScalingGroupRequestPrivate::UpdateAutoScalingGroupRequestPrivate(
    const UpdateAutoScalingGroupRequestPrivate &other, UpdateAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
