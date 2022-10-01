// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelifecyclehooksrequest.h"
#include "describelifecyclehooksrequest_p.h"
#include "describelifecyclehooksresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLifecycleHooksRequest
 * \brief The DescribeLifecycleHooksRequest class provides an interface for AutoScaling DescribeLifecycleHooks requests.
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
 * \sa AutoScalingClient::describeLifecycleHooks
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLifecycleHooksRequest::DescribeLifecycleHooksRequest(const DescribeLifecycleHooksRequest &other)
    : AutoScalingRequest(new DescribeLifecycleHooksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLifecycleHooksRequest object.
 */
DescribeLifecycleHooksRequest::DescribeLifecycleHooksRequest()
    : AutoScalingRequest(new DescribeLifecycleHooksRequestPrivate(AutoScalingRequest::DescribeLifecycleHooksAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLifecycleHooksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLifecycleHooksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLifecycleHooksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLifecycleHooksResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeLifecycleHooksRequestPrivate
 * \brief The DescribeLifecycleHooksRequestPrivate class provides private implementation for DescribeLifecycleHooksRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLifecycleHooksRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeLifecycleHooksRequestPrivate::DescribeLifecycleHooksRequestPrivate(
    const AutoScalingRequest::Action action, DescribeLifecycleHooksRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLifecycleHooksRequest
 * class' copy constructor.
 */
DescribeLifecycleHooksRequestPrivate::DescribeLifecycleHooksRequestPrivate(
    const DescribeLifecycleHooksRequestPrivate &other, DescribeLifecycleHooksRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
