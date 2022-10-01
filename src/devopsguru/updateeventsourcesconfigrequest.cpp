// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateeventsourcesconfigrequest.h"
#include "updateeventsourcesconfigrequest_p.h"
#include "updateeventsourcesconfigresponse.h"
#include "devopsgururequest_p.h"

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::UpdateEventSourcesConfigRequest
 * \brief The UpdateEventSourcesConfigRequest class provides an interface for DevOpsGuru UpdateEventSourcesConfig requests.
 *
 * \inmodule QtAwsDevOpsGuru
 *
 *  Amazon DevOps Guru is a fully managed service that helps you identify anomalous behavior in business critical
 *  operational applications. You specify the Amazon Web Services resources that you want DevOps Guru to cover, then the
 *  Amazon CloudWatch metrics and Amazon Web Services CloudTrail events related to those resources are analyzed. When
 *  anomalous behavior is detected, DevOps Guru creates an <i>insight</i> that includes recommendations, related events, and
 *  related metrics that can help you improve your operational applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html">What is Amazon DevOps Guru</a>.
 * 
 *  </p
 * 
 *  You can specify 1 or 2 Amazon Simple Notification Service topics so you are notified every time a new insight is
 *  created. You can also enable DevOps Guru to generate an OpsItem in Amazon Web Services Systems Manager for each insight
 *  to help you manage and track your work addressing insights.
 * 
 *  </p
 * 
 *  To learn about the DevOps Guru workflow, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html#how-it-works">How DevOps Guru works</a>. To
 *  learn about DevOps Guru concepts, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/concepts.html">Concepts in DevOps Guru</a>.
 *
 * \sa DevOpsGuruClient::updateEventSourcesConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEventSourcesConfigRequest::UpdateEventSourcesConfigRequest(const UpdateEventSourcesConfigRequest &other)
    : DevOpsGuruRequest(new UpdateEventSourcesConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEventSourcesConfigRequest object.
 */
UpdateEventSourcesConfigRequest::UpdateEventSourcesConfigRequest()
    : DevOpsGuruRequest(new UpdateEventSourcesConfigRequestPrivate(DevOpsGuruRequest::UpdateEventSourcesConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEventSourcesConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEventSourcesConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEventSourcesConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEventSourcesConfigResponse(*this, reply);
}

/*!
 * \class QtAws::DevOpsGuru::UpdateEventSourcesConfigRequestPrivate
 * \brief The UpdateEventSourcesConfigRequestPrivate class provides private implementation for UpdateEventSourcesConfigRequest.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a UpdateEventSourcesConfigRequestPrivate object for DevOpsGuru \a action,
 * with public implementation \a q.
 */
UpdateEventSourcesConfigRequestPrivate::UpdateEventSourcesConfigRequestPrivate(
    const DevOpsGuruRequest::Action action, UpdateEventSourcesConfigRequest * const q)
    : DevOpsGuruRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEventSourcesConfigRequest
 * class' copy constructor.
 */
UpdateEventSourcesConfigRequestPrivate::UpdateEventSourcesConfigRequestPrivate(
    const UpdateEventSourcesConfigRequestPrivate &other, UpdateEventSourcesConfigRequest * const q)
    : DevOpsGuruRequestPrivate(other, q)
{

}

} // namespace DevOpsGuru
} // namespace QtAws
