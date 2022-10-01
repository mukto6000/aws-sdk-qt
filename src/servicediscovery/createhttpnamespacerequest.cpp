// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhttpnamespacerequest.h"
#include "createhttpnamespacerequest_p.h"
#include "createhttpnamespaceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::CreateHttpNamespaceRequest
 * \brief The CreateHttpNamespaceRequest class provides an interface for ServiceDiscovery CreateHttpNamespace requests.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  <fullname>Cloud Map</fullname>
 * 
 *  With Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications run
 *  in. When an instance becomes available, you can call the Cloud Map API to register the instance with Cloud Map. For
 *  public or private DNS namespaces, Cloud Map automatically creates DNS records and an optional health check. Clients that
 *  submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up to eight
 *  healthy records.
 *
 * \sa ServiceDiscoveryClient::createHttpNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHttpNamespaceRequest::CreateHttpNamespaceRequest(const CreateHttpNamespaceRequest &other)
    : ServiceDiscoveryRequest(new CreateHttpNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHttpNamespaceRequest object.
 */
CreateHttpNamespaceRequest::CreateHttpNamespaceRequest()
    : ServiceDiscoveryRequest(new CreateHttpNamespaceRequestPrivate(ServiceDiscoveryRequest::CreateHttpNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHttpNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHttpNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHttpNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new CreateHttpNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::CreateHttpNamespaceRequestPrivate
 * \brief The CreateHttpNamespaceRequestPrivate class provides private implementation for CreateHttpNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a CreateHttpNamespaceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
CreateHttpNamespaceRequestPrivate::CreateHttpNamespaceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, CreateHttpNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHttpNamespaceRequest
 * class' copy constructor.
 */
CreateHttpNamespaceRequestPrivate::CreateHttpNamespaceRequestPrivate(
    const CreateHttpNamespaceRequestPrivate &other, CreateHttpNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
