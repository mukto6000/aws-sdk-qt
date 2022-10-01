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

#include "listcostallocationtagsrequest.h"
#include "listcostallocationtagsrequest_p.h"
#include "listcostallocationtagsresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::ListCostAllocationTagsRequest
 * \brief The ListCostAllocationTagsRequest class provides an interface for CostExplorer ListCostAllocationTags requests.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  You can use the Cost Explorer API to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data. This might include the number of
 *  daily write operations for Amazon DynamoDB database tables in your production environment.
 * 
 *  </p
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Cost Explorer API provides the following
 * 
 *  endpoint> <ul> <li>
 * 
 *  <code>https://ce.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> </ul>
 * 
 *  For information about the costs that are associated with the Cost Explorer API, see <a
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services Cost Management
 *
 * \sa CostExplorerClient::listCostAllocationTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListCostAllocationTagsRequest::ListCostAllocationTagsRequest(const ListCostAllocationTagsRequest &other)
    : CostExplorerRequest(new ListCostAllocationTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCostAllocationTagsRequest object.
 */
ListCostAllocationTagsRequest::ListCostAllocationTagsRequest()
    : CostExplorerRequest(new ListCostAllocationTagsRequestPrivate(CostExplorerRequest::ListCostAllocationTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCostAllocationTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCostAllocationTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCostAllocationTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListCostAllocationTagsResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::ListCostAllocationTagsRequestPrivate
 * \brief The ListCostAllocationTagsRequestPrivate class provides private implementation for ListCostAllocationTagsRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a ListCostAllocationTagsRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
ListCostAllocationTagsRequestPrivate::ListCostAllocationTagsRequestPrivate(
    const CostExplorerRequest::Action action, ListCostAllocationTagsRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCostAllocationTagsRequest
 * class' copy constructor.
 */
ListCostAllocationTagsRequestPrivate::ListCostAllocationTagsRequestPrivate(
    const ListCostAllocationTagsRequestPrivate &other, ListCostAllocationTagsRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
