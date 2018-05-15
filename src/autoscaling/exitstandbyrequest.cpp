/*
    Copyright 2013-2018 Paul Colby

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

#include "exitstandbyrequest.h"
#include "exitstandbyrequest_p.h"
#include "exitstandbyresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::ExitStandbyRequest
 * \brief The ExitStandbyRequest class provides an interface for AutoScaling ExitStandby requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::exitStandby
 */

/*!
 * Constructs a copy of \a other.
 */
ExitStandbyRequest::ExitStandbyRequest(const ExitStandbyRequest &other)
    : AutoScalingRequest(new ExitStandbyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExitStandbyRequest object.
 */
ExitStandbyRequest::ExitStandbyRequest()
    : AutoScalingRequest(new ExitStandbyRequestPrivate(AutoScalingRequest::ExitStandbyAction, this))
{

}

/*!
 * \reimp
 */
bool ExitStandbyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExitStandbyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExitStandbyRequest::response(QNetworkReply * const reply) const
{
    return new ExitStandbyResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::ExitStandbyRequestPrivate
 * \brief The ExitStandbyRequestPrivate class provides private implementation for ExitStandbyRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a ExitStandbyRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
ExitStandbyRequestPrivate::ExitStandbyRequestPrivate(
    const AutoScalingRequest::Action action, ExitStandbyRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExitStandbyRequest
 * class' copy constructor.
 */
ExitStandbyRequestPrivate::ExitStandbyRequestPrivate(
    const ExitStandbyRequestPrivate &other, ExitStandbyRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws