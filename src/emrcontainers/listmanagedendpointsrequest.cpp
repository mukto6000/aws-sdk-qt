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

#include "listmanagedendpointsrequest.h"
#include "listmanagedendpointsrequest_p.h"
#include "listmanagedendpointsresponse.h"
#include "emrcontainersrequest_p.h"

namespace QtAws {
namespace EMRContainers {

/*!
 * \class QtAws::EMRContainers::ListManagedEndpointsRequest
 * \brief The ListManagedEndpointsRequest class provides an interface for EMRContainers ListManagedEndpoints requests.
 *
 * \inmodule QtAwsEMRContainers
 *
 *  Amazon EMR on EKS provides a deployment option for Amazon EMR that allows you to run open-source big data frameworks on
 *  Amazon Elastic Kubernetes Service (Amazon EKS). With this deployment option, you can focus on running analytics
 *  workloads while Amazon EMR on EKS builds, configures, and manages containers for open-source applications. For more
 *  information about Amazon EMR on EKS concepts and tasks, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/emr-eks.html">What is Amazon EMR on
 * 
 *  EKS</a>>
 * 
 *  <i>Amazon EMR containers</i> is the API name for Amazon EMR on EKS. The <code>emr-containers</code> prefix is used in
 *  the following scenarios:
 * 
 *  </p <ul> <li>
 * 
 *  It is the prefix in the CLI commands for Amazon EMR on EKS. For example, <code>aws emr-containers
 * 
 *  start-job-run</code>> </li> <li>
 * 
 *  It is the prefix before IAM policy actions for Amazon EMR on EKS. For example, <code>"Action": [
 *  "emr-containers:StartJobRun"]</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
 *  actions for Amazon EMR on
 * 
 *  EKS</a>> </li> <li>
 * 
 *  It is the prefix used in Amazon EMR on EKS service endpoints. For example,
 *  <code>emr-containers.us-east-2.amazonaws.com</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/service-quotas.html#service-endpoints">Amazon
 *  EMR on EKS Service
 *
 * \sa EMRContainersClient::listManagedEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListManagedEndpointsRequest::ListManagedEndpointsRequest(const ListManagedEndpointsRequest &other)
    : EMRContainersRequest(new ListManagedEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListManagedEndpointsRequest object.
 */
ListManagedEndpointsRequest::ListManagedEndpointsRequest()
    : EMRContainersRequest(new ListManagedEndpointsRequestPrivate(EMRContainersRequest::ListManagedEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListManagedEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListManagedEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListManagedEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListManagedEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::EMRContainers::ListManagedEndpointsRequestPrivate
 * \brief The ListManagedEndpointsRequestPrivate class provides private implementation for ListManagedEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsEMRContainers
 */

/*!
 * Constructs a ListManagedEndpointsRequestPrivate object for EMRContainers \a action,
 * with public implementation \a q.
 */
ListManagedEndpointsRequestPrivate::ListManagedEndpointsRequestPrivate(
    const EMRContainersRequest::Action action, ListManagedEndpointsRequest * const q)
    : EMRContainersRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListManagedEndpointsRequest
 * class' copy constructor.
 */
ListManagedEndpointsRequestPrivate::ListManagedEndpointsRequestPrivate(
    const ListManagedEndpointsRequestPrivate &other, ListManagedEndpointsRequest * const q)
    : EMRContainersRequestPrivate(other, q)
{

}

} // namespace EMRContainers
} // namespace QtAws
