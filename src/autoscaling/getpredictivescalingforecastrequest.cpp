// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpredictivescalingforecastrequest.h"
#include "getpredictivescalingforecastrequest_p.h"
#include "getpredictivescalingforecastresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::GetPredictiveScalingForecastRequest
 * \brief The GetPredictiveScalingForecastRequest class provides an interface for AutoScaling GetPredictiveScalingForecast requests.
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
 * \sa AutoScalingClient::getPredictiveScalingForecast
 */

/*!
 * Constructs a copy of \a other.
 */
GetPredictiveScalingForecastRequest::GetPredictiveScalingForecastRequest(const GetPredictiveScalingForecastRequest &other)
    : AutoScalingRequest(new GetPredictiveScalingForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPredictiveScalingForecastRequest object.
 */
GetPredictiveScalingForecastRequest::GetPredictiveScalingForecastRequest()
    : AutoScalingRequest(new GetPredictiveScalingForecastRequestPrivate(AutoScalingRequest::GetPredictiveScalingForecastAction, this))
{

}

/*!
 * \reimp
 */
bool GetPredictiveScalingForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPredictiveScalingForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPredictiveScalingForecastRequest::response(QNetworkReply * const reply) const
{
    return new GetPredictiveScalingForecastResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::GetPredictiveScalingForecastRequestPrivate
 * \brief The GetPredictiveScalingForecastRequestPrivate class provides private implementation for GetPredictiveScalingForecastRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a GetPredictiveScalingForecastRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
GetPredictiveScalingForecastRequestPrivate::GetPredictiveScalingForecastRequestPrivate(
    const AutoScalingRequest::Action action, GetPredictiveScalingForecastRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPredictiveScalingForecastRequest
 * class' copy constructor.
 */
GetPredictiveScalingForecastRequestPrivate::GetPredictiveScalingForecastRequestPrivate(
    const GetPredictiveScalingForecastRequestPrivate &other, GetPredictiveScalingForecastRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
