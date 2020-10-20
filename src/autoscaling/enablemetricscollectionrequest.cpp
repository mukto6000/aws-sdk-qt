/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "enablemetricscollectionrequest.h"
#include "enablemetricscollectionrequest_p.h"
#include "enablemetricscollectionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::EnableMetricsCollectionRequest
 * \brief The EnableMetricsCollectionRequest class provides an interface for AutoScaling EnableMetricsCollection requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service with AWS Auto Scaling, Amazon CloudWatch, and Elastic Load
 * 
 *  Balancing>
 * 
 *  For more information, including information about granting IAM users required permissions for Amazon EC2 Auto Scaling
 *  actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User
 *
 * \sa AutoScalingClient::enableMetricsCollection
 */

/*!
 * Constructs a copy of \a other.
 */
EnableMetricsCollectionRequest::EnableMetricsCollectionRequest(const EnableMetricsCollectionRequest &other)
    : AutoScalingRequest(new EnableMetricsCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableMetricsCollectionRequest object.
 */
EnableMetricsCollectionRequest::EnableMetricsCollectionRequest()
    : AutoScalingRequest(new EnableMetricsCollectionRequestPrivate(AutoScalingRequest::EnableMetricsCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool EnableMetricsCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableMetricsCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableMetricsCollectionRequest::response(QNetworkReply * const reply) const
{
    return new EnableMetricsCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::EnableMetricsCollectionRequestPrivate
 * \brief The EnableMetricsCollectionRequestPrivate class provides private implementation for EnableMetricsCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a EnableMetricsCollectionRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
EnableMetricsCollectionRequestPrivate::EnableMetricsCollectionRequestPrivate(
    const AutoScalingRequest::Action action, EnableMetricsCollectionRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableMetricsCollectionRequest
 * class' copy constructor.
 */
EnableMetricsCollectionRequestPrivate::EnableMetricsCollectionRequestPrivate(
    const EnableMetricsCollectionRequestPrivate &other, EnableMetricsCollectionRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
