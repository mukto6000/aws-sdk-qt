// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setinstancehealthrequest.h"
#include "setinstancehealthrequest_p.h"
#include "setinstancehealthresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SetInstanceHealthRequest
 * \brief The SetInstanceHealthRequest class provides an interface for AutoScaling SetInstanceHealth requests.
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
 * \sa AutoScalingClient::setInstanceHealth
 */

/*!
 * Constructs a copy of \a other.
 */
SetInstanceHealthRequest::SetInstanceHealthRequest(const SetInstanceHealthRequest &other)
    : AutoScalingRequest(new SetInstanceHealthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetInstanceHealthRequest object.
 */
SetInstanceHealthRequest::SetInstanceHealthRequest()
    : AutoScalingRequest(new SetInstanceHealthRequestPrivate(AutoScalingRequest::SetInstanceHealthAction, this))
{

}

/*!
 * \reimp
 */
bool SetInstanceHealthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetInstanceHealthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetInstanceHealthRequest::response(QNetworkReply * const reply) const
{
    return new SetInstanceHealthResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::SetInstanceHealthRequestPrivate
 * \brief The SetInstanceHealthRequestPrivate class provides private implementation for SetInstanceHealthRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a SetInstanceHealthRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
SetInstanceHealthRequestPrivate::SetInstanceHealthRequestPrivate(
    const AutoScalingRequest::Action action, SetInstanceHealthRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetInstanceHealthRequest
 * class' copy constructor.
 */
SetInstanceHealthRequestPrivate::SetInstanceHealthRequestPrivate(
    const SetInstanceHealthRequestPrivate &other, SetInstanceHealthRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
