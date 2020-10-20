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

#include "listconnectordefinitionversionsrequest.h"
#include "listconnectordefinitionversionsrequest_p.h"
#include "listconnectordefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionVersionsRequest
 * \brief The ListConnectorDefinitionVersionsRequest class provides an interface for Greengrass ListConnectorDefinitionVersions requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listConnectorDefinitionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListConnectorDefinitionVersionsRequest::ListConnectorDefinitionVersionsRequest(const ListConnectorDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListConnectorDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConnectorDefinitionVersionsRequest object.
 */
ListConnectorDefinitionVersionsRequest::ListConnectorDefinitionVersionsRequest()
    : GreengrassRequest(new ListConnectorDefinitionVersionsRequestPrivate(GreengrassRequest::ListConnectorDefinitionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConnectorDefinitionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConnectorDefinitionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConnectorDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListConnectorDefinitionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionVersionsRequestPrivate
 * \brief The ListConnectorDefinitionVersionsRequestPrivate class provides private implementation for ListConnectorDefinitionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListConnectorDefinitionVersionsRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
ListConnectorDefinitionVersionsRequestPrivate::ListConnectorDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListConnectorDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConnectorDefinitionVersionsRequest
 * class' copy constructor.
 */
ListConnectorDefinitionVersionsRequestPrivate::ListConnectorDefinitionVersionsRequestPrivate(
    const ListConnectorDefinitionVersionsRequestPrivate &other, ListConnectorDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
