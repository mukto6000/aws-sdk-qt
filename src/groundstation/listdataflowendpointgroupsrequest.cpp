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

#include "listdataflowendpointgroupsrequest.h"
#include "listdataflowendpointgroupsrequest_p.h"
#include "listdataflowendpointgroupsresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListDataflowEndpointGroupsRequest
 * \brief The ListDataflowEndpointGroupsRequest class provides an interface for GroundStation ListDataflowEndpointGroups requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listDataflowEndpointGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataflowEndpointGroupsRequest::ListDataflowEndpointGroupsRequest(const ListDataflowEndpointGroupsRequest &other)
    : GroundStationRequest(new ListDataflowEndpointGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataflowEndpointGroupsRequest object.
 */
ListDataflowEndpointGroupsRequest::ListDataflowEndpointGroupsRequest()
    : GroundStationRequest(new ListDataflowEndpointGroupsRequestPrivate(GroundStationRequest::ListDataflowEndpointGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataflowEndpointGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataflowEndpointGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataflowEndpointGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataflowEndpointGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::ListDataflowEndpointGroupsRequestPrivate
 * \brief The ListDataflowEndpointGroupsRequestPrivate class provides private implementation for ListDataflowEndpointGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListDataflowEndpointGroupsRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
ListDataflowEndpointGroupsRequestPrivate::ListDataflowEndpointGroupsRequestPrivate(
    const GroundStationRequest::Action action, ListDataflowEndpointGroupsRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataflowEndpointGroupsRequest
 * class' copy constructor.
 */
ListDataflowEndpointGroupsRequestPrivate::ListDataflowEndpointGroupsRequestPrivate(
    const ListDataflowEndpointGroupsRequestPrivate &other, ListDataflowEndpointGroupsRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
