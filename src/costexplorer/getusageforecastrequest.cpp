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

#include "getusageforecastrequest.h"
#include "getusageforecastrequest_p.h"
#include "getusageforecastresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetUsageForecastRequest
 * \brief The GetUsageForecastRequest class provides an interface for CostExplorer GetUsageForecast requests.
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
 * \sa CostExplorerClient::getUsageForecast
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsageForecastRequest::GetUsageForecastRequest(const GetUsageForecastRequest &other)
    : CostExplorerRequest(new GetUsageForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsageForecastRequest object.
 */
GetUsageForecastRequest::GetUsageForecastRequest()
    : CostExplorerRequest(new GetUsageForecastRequestPrivate(CostExplorerRequest::GetUsageForecastAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsageForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsageForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsageForecastRequest::response(QNetworkReply * const reply) const
{
    return new GetUsageForecastResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetUsageForecastRequestPrivate
 * \brief The GetUsageForecastRequestPrivate class provides private implementation for GetUsageForecastRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetUsageForecastRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetUsageForecastRequestPrivate::GetUsageForecastRequestPrivate(
    const CostExplorerRequest::Action action, GetUsageForecastRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsageForecastRequest
 * class' copy constructor.
 */
GetUsageForecastRequestPrivate::GetUsageForecastRequestPrivate(
    const GetUsageForecastRequestPrivate &other, GetUsageForecastRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
