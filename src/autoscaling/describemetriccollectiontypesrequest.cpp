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

#include "describemetriccollectiontypesrequest.h"
#include "describemetriccollectiontypesrequest_p.h"
#include "describemetriccollectiontypesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeMetricCollectionTypesRequest
 * \brief The DescribeMetricCollectionTypesRequest class provides an interface for AutoScaling DescribeMetricCollectionTypes requests.
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
 * \sa AutoScalingClient::describeMetricCollectionTypes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMetricCollectionTypesRequest::DescribeMetricCollectionTypesRequest(const DescribeMetricCollectionTypesRequest &other)
    : AutoScalingRequest(new DescribeMetricCollectionTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMetricCollectionTypesRequest object.
 */
DescribeMetricCollectionTypesRequest::DescribeMetricCollectionTypesRequest()
    : AutoScalingRequest(new DescribeMetricCollectionTypesRequestPrivate(AutoScalingRequest::DescribeMetricCollectionTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMetricCollectionTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMetricCollectionTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMetricCollectionTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMetricCollectionTypesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeMetricCollectionTypesRequestPrivate
 * \brief The DescribeMetricCollectionTypesRequestPrivate class provides private implementation for DescribeMetricCollectionTypesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeMetricCollectionTypesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeMetricCollectionTypesRequestPrivate::DescribeMetricCollectionTypesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeMetricCollectionTypesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMetricCollectionTypesRequest
 * class' copy constructor.
 */
DescribeMetricCollectionTypesRequestPrivate::DescribeMetricCollectionTypesRequestPrivate(
    const DescribeMetricCollectionTypesRequestPrivate &other, DescribeMetricCollectionTypesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
