// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterclusterrequest.h"
#include "deregisterclusterrequest_p.h"
#include "deregisterclusterresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::DeregisterClusterRequest
 * \brief The DeregisterClusterRequest class provides an interface for Eks DeregisterCluster requests.
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
 * \sa EksClient::deregisterCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterClusterRequest::DeregisterClusterRequest(const DeregisterClusterRequest &other)
    : EksRequest(new DeregisterClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterClusterRequest object.
 */
DeregisterClusterRequest::DeregisterClusterRequest()
    : EksRequest(new DeregisterClusterRequestPrivate(EksRequest::DeregisterClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::DeregisterClusterRequestPrivate
 * \brief The DeregisterClusterRequestPrivate class provides private implementation for DeregisterClusterRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a DeregisterClusterRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
DeregisterClusterRequestPrivate::DeregisterClusterRequestPrivate(
    const EksRequest::Action action, DeregisterClusterRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterClusterRequest
 * class' copy constructor.
 */
DeregisterClusterRequestPrivate::DeregisterClusterRequestPrivate(
    const DeregisterClusterRequestPrivate &other, DeregisterClusterRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
