/*
    Copyright 2013-2021 Paul Colby

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

#include "getresourcecollectionrequest.h"
#include "getresourcecollectionrequest_p.h"
#include "getresourcecollectionresponse.h"
#include "devopsgururequest_p.h"

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::GetResourceCollectionRequest
 * \brief The GetResourceCollectionRequest class provides an interface for DevOpsGuru GetResourceCollection requests.
 *
 * \inmodule QtAwsDevOpsGuru
 *
 *  Amazon DevOps Guru is a fully managed service that helps you identify anomalous behavior in business critical
 *  operational applications. You specify the AWS resources that you want DevOps Guru to cover, then the Amazon CloudWatch
 *  metrics and AWS CloudTrail events related to those resources are analyzed. When anomalous behavior is detected, DevOps
 *  Guru creates an <i>insight</i> that includes recommendations, related events, and related metrics that can help you
 *  improve your operational applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html">What is Amazon DevOps Guru</a>.
 * 
 *  </p
 * 
 *  You can specify 1 or 2 Amazon Simple Notification Service topics so you are notified every time a new insight is
 *  created. You can also enable DevOps Guru to generate an OpsItem in AWS Systems Manager for each insight to help you
 *  manage and track your work addressing insights.
 * 
 *  </p
 * 
 *  To learn about the DevOps Guru workflow, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html#how-it-works">How DevOps Guru works</a>. To
 *  learn about DevOps Guru concepts, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/concepts.html">Concepts in DevOps Guru</a>.
 *
 * \sa DevOpsGuruClient::getResourceCollection
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceCollectionRequest::GetResourceCollectionRequest(const GetResourceCollectionRequest &other)
    : DevOpsGuruRequest(new GetResourceCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceCollectionRequest object.
 */
GetResourceCollectionRequest::GetResourceCollectionRequest()
    : DevOpsGuruRequest(new GetResourceCollectionRequestPrivate(DevOpsGuruRequest::GetResourceCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceCollectionRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::DevOpsGuru::GetResourceCollectionRequestPrivate
 * \brief The GetResourceCollectionRequestPrivate class provides private implementation for GetResourceCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a GetResourceCollectionRequestPrivate object for DevOpsGuru \a action,
 * with public implementation \a q.
 */
GetResourceCollectionRequestPrivate::GetResourceCollectionRequestPrivate(
    const DevOpsGuruRequest::Action action, GetResourceCollectionRequest * const q)
    : DevOpsGuruRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceCollectionRequest
 * class' copy constructor.
 */
GetResourceCollectionRequestPrivate::GetResourceCollectionRequestPrivate(
    const GetResourceCollectionRequestPrivate &other, GetResourceCollectionRequest * const q)
    : DevOpsGuruRequestPrivate(other, q)
{

}

} // namespace DevOpsGuru
} // namespace QtAws
