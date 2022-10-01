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

#include "listcomponentversionsrequest.h"
#include "listcomponentversionsrequest_p.h"
#include "listcomponentversionsresponse.h"
#include "greengrassv2request_p.h"

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ListComponentVersionsRequest
 * \brief The ListComponentVersionsRequest class provides an interface for GreengrassV2 ListComponentVersions requests.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge devices.
 *  This enables devices to collect and analyze data closer to the source of information, react autonomously to local
 *  events, and communicate securely with each other on local networks. Local devices can also communicate securely with
 *  Amazon Web Services IoT Core and export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can use
 *  Lambda functions and components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  IoT Greengrass Version 2 provides a new major version of the IoT Greengrass Core software, new APIs, and a new console.
 *  Use this API reference to learn how to use the IoT Greengrass V2 API operations to manage components, manage
 *  deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is IoT Greengrass?</a>
 *  in the <i>IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::listComponentVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListComponentVersionsRequest::ListComponentVersionsRequest(const ListComponentVersionsRequest &other)
    : GreengrassV2Request(new ListComponentVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListComponentVersionsRequest object.
 */
ListComponentVersionsRequest::ListComponentVersionsRequest()
    : GreengrassV2Request(new ListComponentVersionsRequestPrivate(GreengrassV2Request::ListComponentVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListComponentVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListComponentVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComponentVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListComponentVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::GreengrassV2::ListComponentVersionsRequestPrivate
 * \brief The ListComponentVersionsRequestPrivate class provides private implementation for ListComponentVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ListComponentVersionsRequestPrivate object for GreengrassV2 \a action,
 * with public implementation \a q.
 */
ListComponentVersionsRequestPrivate::ListComponentVersionsRequestPrivate(
    const GreengrassV2Request::Action action, ListComponentVersionsRequest * const q)
    : GreengrassV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListComponentVersionsRequest
 * class' copy constructor.
 */
ListComponentVersionsRequestPrivate::ListComponentVersionsRequestPrivate(
    const ListComponentVersionsRequestPrivate &other, ListComponentVersionsRequest * const q)
    : GreengrassV2RequestPrivate(other, q)
{

}

} // namespace GreengrassV2
} // namespace QtAws
