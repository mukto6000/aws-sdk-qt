/*
    Copyright 2013-2020 Paul Colby

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

#include "listupdatesrequest.h"
#include "listupdatesrequest_p.h"
#include "listupdatesresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::ListUpdatesRequest
 * \brief The ListUpdatesRequest class provides an interface for EKS ListUpdates requests.
 *
 * \inmodule QtAwsEKS
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on AWS
 *  without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an open-source system for
 *  automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs up-to-date versions of the open-source Kubernetes software, so you can use all the existing plugins and
 *  tooling from the Kubernetes community. Applications running on Amazon EKS are fully compatible with applications running
 *  on any standard Kubernetes environment, whether running in on-premises data centers or public clouds. This means that
 *  you can easily migrate any standard Kubernetes application to Amazon EKS without any code modification
 *
 * \sa EksClient::listUpdates
 */

/*!
 * Constructs a copy of \a other.
 */
ListUpdatesRequest::ListUpdatesRequest(const ListUpdatesRequest &other)
    : EksRequest(new ListUpdatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUpdatesRequest object.
 */
ListUpdatesRequest::ListUpdatesRequest()
    : EksRequest(new ListUpdatesRequestPrivate(EksRequest::ListUpdatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListUpdatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUpdatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUpdatesRequest::response(QNetworkReply * const reply) const
{
    return new ListUpdatesResponse(*this, reply);
}

/*!
 * \class QtAws::EKS::ListUpdatesRequestPrivate
 * \brief The ListUpdatesRequestPrivate class provides private implementation for ListUpdatesRequest.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a ListUpdatesRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
ListUpdatesRequestPrivate::ListUpdatesRequestPrivate(
    const EksRequest::Action action, ListUpdatesRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUpdatesRequest
 * class' copy constructor.
 */
ListUpdatesRequestPrivate::ListUpdatesRequestPrivate(
    const ListUpdatesRequestPrivate &other, ListUpdatesRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace EKS
} // namespace QtAws
