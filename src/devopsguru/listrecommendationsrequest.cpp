// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecommendationsrequest.h"
#include "listrecommendationsrequest_p.h"
#include "listrecommendationsresponse.h"
#include "devopsgururequest_p.h"

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::ListRecommendationsRequest
 * \brief The ListRecommendationsRequest class provides an interface for DevOpsGuru ListRecommendations requests.
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
 * \sa DevOpsGuruClient::listRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecommendationsRequest::ListRecommendationsRequest(const ListRecommendationsRequest &other)
    : DevOpsGuruRequest(new ListRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecommendationsRequest object.
 */
ListRecommendationsRequest::ListRecommendationsRequest()
    : DevOpsGuruRequest(new ListRecommendationsRequestPrivate(DevOpsGuruRequest::ListRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new ListRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::DevOpsGuru::ListRecommendationsRequestPrivate
 * \brief The ListRecommendationsRequestPrivate class provides private implementation for ListRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a ListRecommendationsRequestPrivate object for DevOpsGuru \a action,
 * with public implementation \a q.
 */
ListRecommendationsRequestPrivate::ListRecommendationsRequestPrivate(
    const DevOpsGuruRequest::Action action, ListRecommendationsRequest * const q)
    : DevOpsGuruRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecommendationsRequest
 * class' copy constructor.
 */
ListRecommendationsRequestPrivate::ListRecommendationsRequestPrivate(
    const ListRecommendationsRequestPrivate &other, ListRecommendationsRequest * const q)
    : DevOpsGuruRequestPrivate(other, q)
{

}

} // namespace DevOpsGuru
} // namespace QtAws
