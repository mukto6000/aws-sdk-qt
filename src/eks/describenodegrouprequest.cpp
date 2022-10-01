// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenodegrouprequest.h"
#include "describenodegrouprequest_p.h"
#include "describenodegroupresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DescribeNodegroupRequest
 * \brief The DescribeNodegroupRequest class provides an interface for Eks DescribeNodegroup requests.
 *
 * \inmodule QtAwsEks
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on
 *  Amazon Web Services without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an
 *  open-source system for automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs up-to-date versions of the open-source Kubernetes software, so you can use all the existing plugins and
 *  tooling from the Kubernetes community. Applications running on Amazon EKS are fully compatible with applications running
 *  on any standard Kubernetes environment, whether running in on-premises data centers or public clouds. This means that
 *  you can easily migrate any standard Kubernetes application to Amazon EKS without any code modification
 *
 * \sa EksClient::describeNodegroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNodegroupRequest::DescribeNodegroupRequest(const DescribeNodegroupRequest &other)
    : EksRequest(new DescribeNodegroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNodegroupRequest object.
 */
DescribeNodegroupRequest::DescribeNodegroupRequest()
    : EksRequest(new DescribeNodegroupRequestPrivate(EksRequest::DescribeNodegroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNodegroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNodegroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNodegroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNodegroupResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::DescribeNodegroupRequestPrivate
 * \brief The DescribeNodegroupRequestPrivate class provides private implementation for DescribeNodegroupRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DescribeNodegroupRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DescribeNodegroupRequestPrivate::DescribeNodegroupRequestPrivate(
    const EksRequest::Action action, DescribeNodegroupRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNodegroupRequest
 * class' copy constructor.
 */
DescribeNodegroupRequestPrivate::DescribeNodegroupRequestPrivate(
    const DescribeNodegroupRequestPrivate &other, DescribeNodegroupRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
