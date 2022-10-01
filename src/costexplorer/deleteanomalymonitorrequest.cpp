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

#include "deleteanomalymonitorrequest.h"
#include "deleteanomalymonitorrequest_p.h"
#include "deleteanomalymonitorresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::DeleteAnomalyMonitorRequest
 * \brief The DeleteAnomalyMonitorRequest class provides an interface for CostExplorer DeleteAnomalyMonitor requests.
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
 * \sa CostExplorerClient::deleteAnomalyMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAnomalyMonitorRequest::DeleteAnomalyMonitorRequest(const DeleteAnomalyMonitorRequest &other)
    : CostExplorerRequest(new DeleteAnomalyMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAnomalyMonitorRequest object.
 */
DeleteAnomalyMonitorRequest::DeleteAnomalyMonitorRequest()
    : CostExplorerRequest(new DeleteAnomalyMonitorRequestPrivate(CostExplorerRequest::DeleteAnomalyMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAnomalyMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAnomalyMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAnomalyMonitorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAnomalyMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::DeleteAnomalyMonitorRequestPrivate
 * \brief The DeleteAnomalyMonitorRequestPrivate class provides private implementation for DeleteAnomalyMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a DeleteAnomalyMonitorRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
DeleteAnomalyMonitorRequestPrivate::DeleteAnomalyMonitorRequestPrivate(
    const CostExplorerRequest::Action action, DeleteAnomalyMonitorRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAnomalyMonitorRequest
 * class' copy constructor.
 */
DeleteAnomalyMonitorRequestPrivate::DeleteAnomalyMonitorRequestPrivate(
    const DeleteAnomalyMonitorRequestPrivate &other, DeleteAnomalyMonitorRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
