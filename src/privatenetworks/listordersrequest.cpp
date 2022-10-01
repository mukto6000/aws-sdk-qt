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

#include "listordersrequest.h"
#include "listordersrequest_p.h"
#include "listordersresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListOrdersRequest
 * \brief The ListOrdersRequest class provides an interface for PrivateNetworks ListOrders requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listOrders
 */

/*!
 * Constructs a copy of \a other.
 */
ListOrdersRequest::ListOrdersRequest(const ListOrdersRequest &other)
    : PrivateNetworksRequest(new ListOrdersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOrdersRequest object.
 */
ListOrdersRequest::ListOrdersRequest()
    : PrivateNetworksRequest(new ListOrdersRequestPrivate(PrivateNetworksRequest::ListOrdersAction, this))
{

}

/*!
 * \reimp
 */
bool ListOrdersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOrdersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOrdersRequest::response(QNetworkReply * const reply) const
{
    return new ListOrdersResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ListOrdersRequestPrivate
 * \brief The ListOrdersRequestPrivate class provides private implementation for ListOrdersRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListOrdersRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ListOrdersRequestPrivate::ListOrdersRequestPrivate(
    const PrivateNetworksRequest::Action action, ListOrdersRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOrdersRequest
 * class' copy constructor.
 */
ListOrdersRequestPrivate::ListOrdersRequestPrivate(
    const ListOrdersRequestPrivate &other, ListOrdersRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
