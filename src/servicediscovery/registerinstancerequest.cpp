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

#include "registerinstancerequest.h"
#include "registerinstancerequest_p.h"
#include "registerinstanceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::RegisterInstanceRequest
 * \brief The RegisterInstanceRequest class provides an interface for ServiceDiscovery RegisterInstance requests.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  AWS Cloud Map lets you configure public DNS, private DNS, or HTTP namespaces that your microservice applications run in.
 *  When an instance of the service becomes available, you can call the AWS Cloud Map API to register the instance with AWS
 *  Cloud Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health
 *  check. Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that
 *  contains up to eight healthy records.
 *
 * \sa ServiceDiscoveryClient::registerInstance
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterInstanceRequest::RegisterInstanceRequest(const RegisterInstanceRequest &other)
    : ServiceDiscoveryRequest(new RegisterInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterInstanceRequest object.
 */
RegisterInstanceRequest::RegisterInstanceRequest()
    : ServiceDiscoveryRequest(new RegisterInstanceRequestPrivate(ServiceDiscoveryRequest::RegisterInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::RegisterInstanceRequestPrivate
 * \brief The RegisterInstanceRequestPrivate class provides private implementation for RegisterInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a RegisterInstanceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
RegisterInstanceRequestPrivate::RegisterInstanceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, RegisterInstanceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterInstanceRequest
 * class' copy constructor.
 */
RegisterInstanceRequestPrivate::RegisterInstanceRequestPrivate(
    const RegisterInstanceRequestPrivate &other, RegisterInstanceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
