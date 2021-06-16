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

#include "listdevicedefinitionversionsrequest.h"
#include "listdevicedefinitionversionsrequest_p.h"
#include "listdevicedefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionVersionsRequest
 * \brief The ListDeviceDefinitionVersionsRequest class provides an interface for Greengrass ListDeviceDefinitionVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listDeviceDefinitionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceDefinitionVersionsRequest::ListDeviceDefinitionVersionsRequest(const ListDeviceDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListDeviceDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceDefinitionVersionsRequest object.
 */
ListDeviceDefinitionVersionsRequest::ListDeviceDefinitionVersionsRequest()
    : GreengrassRequest(new ListDeviceDefinitionVersionsRequestPrivate(GreengrassRequest::ListDeviceDefinitionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceDefinitionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceDefinitionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceDefinitionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionVersionsRequestPrivate
 * \brief The ListDeviceDefinitionVersionsRequestPrivate class provides private implementation for ListDeviceDefinitionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListDeviceDefinitionVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListDeviceDefinitionVersionsRequestPrivate::ListDeviceDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListDeviceDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceDefinitionVersionsRequest
 * class' copy constructor.
 */
ListDeviceDefinitionVersionsRequestPrivate::ListDeviceDefinitionVersionsRequestPrivate(
    const ListDeviceDefinitionVersionsRequestPrivate &other, ListDeviceDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
