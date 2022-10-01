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

#include "createpublicdnsnamespacerequest.h"
#include "createpublicdnsnamespacerequest_p.h"
#include "createpublicdnsnamespaceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::CreatePublicDnsNamespaceRequest
 * \brief The CreatePublicDnsNamespaceRequest class provides an interface for ServiceDiscovery CreatePublicDnsNamespace requests.
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
 * \sa ServiceDiscoveryClient::createPublicDnsNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePublicDnsNamespaceRequest::CreatePublicDnsNamespaceRequest(const CreatePublicDnsNamespaceRequest &other)
    : ServiceDiscoveryRequest(new CreatePublicDnsNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePublicDnsNamespaceRequest object.
 */
CreatePublicDnsNamespaceRequest::CreatePublicDnsNamespaceRequest()
    : ServiceDiscoveryRequest(new CreatePublicDnsNamespaceRequestPrivate(ServiceDiscoveryRequest::CreatePublicDnsNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePublicDnsNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePublicDnsNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePublicDnsNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new CreatePublicDnsNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::CreatePublicDnsNamespaceRequestPrivate
 * \brief The CreatePublicDnsNamespaceRequestPrivate class provides private implementation for CreatePublicDnsNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a CreatePublicDnsNamespaceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
CreatePublicDnsNamespaceRequestPrivate::CreatePublicDnsNamespaceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, CreatePublicDnsNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePublicDnsNamespaceRequest
 * class' copy constructor.
 */
CreatePublicDnsNamespaceRequestPrivate::CreatePublicDnsNamespaceRequestPrivate(
    const CreatePublicDnsNamespaceRequestPrivate &other, CreatePublicDnsNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
