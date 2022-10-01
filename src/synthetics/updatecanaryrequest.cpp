// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecanaryrequest.h"
#include "updatecanaryrequest_p.h"
#include "updatecanaryresponse.h"
#include "syntheticsrequest_p.h"

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::UpdateCanaryRequest
 * \brief The UpdateCanaryRequest class provides an interface for Synthetics UpdateCanary requests.
 *
 * \inmodule QtAwsSynthetics
 *
 *  <fullname>Amazon CloudWatch Synthetics</fullname>
 * 
 *  You can use Amazon CloudWatch Synthetics to continually monitor your services. You can create and manage
 *  <i>canaries</i>, which are modular, lightweight scripts that monitor your endpoints and APIs from the outside-in. You
 *  can set up your canaries to run 24 hours a day, once per minute. The canaries help you check the availability and
 *  latency of your web services and troubleshoot anomalies by investigating load time data, screenshots of the UI, logs,
 *  and metrics. The canaries seamlessly integrate with CloudWatch ServiceLens to help you trace the causes of impacted
 *  nodes in your applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ServiceLens.html">Using ServiceLens to Monitor the
 *  Health of Your Applications</a> in the <i>Amazon CloudWatch User
 * 
 *  Guide</i>>
 * 
 *  Before you create and manage canaries, be aware of the security considerations. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
 *  Considerations for Synthetics
 *
 * \sa SyntheticsClient::updateCanary
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCanaryRequest::UpdateCanaryRequest(const UpdateCanaryRequest &other)
    : SyntheticsRequest(new UpdateCanaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCanaryRequest object.
 */
UpdateCanaryRequest::UpdateCanaryRequest()
    : SyntheticsRequest(new UpdateCanaryRequestPrivate(SyntheticsRequest::UpdateCanaryAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCanaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCanaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCanaryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCanaryResponse(*this, reply);
}

/*!
 * \class QtAws::Synthetics::UpdateCanaryRequestPrivate
 * \brief The UpdateCanaryRequestPrivate class provides private implementation for UpdateCanaryRequest.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a UpdateCanaryRequestPrivate object for Synthetics \a action,
 * with public implementation \a q.
 */
UpdateCanaryRequestPrivate::UpdateCanaryRequestPrivate(
    const SyntheticsRequest::Action action, UpdateCanaryRequest * const q)
    : SyntheticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCanaryRequest
 * class' copy constructor.
 */
UpdateCanaryRequestPrivate::UpdateCanaryRequestPrivate(
    const UpdateCanaryRequestPrivate &other, UpdateCanaryRequest * const q)
    : SyntheticsRequestPrivate(other, q)
{

}

} // namespace Synthetics
} // namespace QtAws
