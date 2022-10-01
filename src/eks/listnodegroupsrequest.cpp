// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnodegroupsrequest.h"
#include "listnodegroupsrequest_p.h"
#include "listnodegroupsresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::ListNodegroupsRequest
 * \brief The ListNodegroupsRequest class provides an interface for Eks ListNodegroups requests.
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
 * \sa EksClient::listNodegroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListNodegroupsRequest::ListNodegroupsRequest(const ListNodegroupsRequest &other)
    : EksRequest(new ListNodegroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNodegroupsRequest object.
 */
ListNodegroupsRequest::ListNodegroupsRequest()
    : EksRequest(new ListNodegroupsRequestPrivate(EksRequest::ListNodegroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListNodegroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNodegroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNodegroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListNodegroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Eks::ListNodegroupsRequestPrivate
 * \brief The ListNodegroupsRequestPrivate class provides private implementation for ListNodegroupsRequest.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a ListNodegroupsRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
ListNodegroupsRequestPrivate::ListNodegroupsRequestPrivate(
    const EksRequest::Action action, ListNodegroupsRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNodegroupsRequest
 * class' copy constructor.
 */
ListNodegroupsRequestPrivate::ListNodegroupsRequestPrivate(
    const ListNodegroupsRequestPrivate &other, ListNodegroupsRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace Eks
} // namespace QtAws
