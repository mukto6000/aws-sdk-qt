// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecostallocationtagsstatusrequest.h"
#include "updatecostallocationtagsstatusrequest_p.h"
#include "updatecostallocationtagsstatusresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::UpdateCostAllocationTagsStatusRequest
 * \brief The UpdateCostAllocationTagsStatusRequest class provides an interface for CostExplorer UpdateCostAllocationTagsStatus requests.
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
 * \sa CostExplorerClient::updateCostAllocationTagsStatus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCostAllocationTagsStatusRequest::UpdateCostAllocationTagsStatusRequest(const UpdateCostAllocationTagsStatusRequest &other)
    : CostExplorerRequest(new UpdateCostAllocationTagsStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCostAllocationTagsStatusRequest object.
 */
UpdateCostAllocationTagsStatusRequest::UpdateCostAllocationTagsStatusRequest()
    : CostExplorerRequest(new UpdateCostAllocationTagsStatusRequestPrivate(CostExplorerRequest::UpdateCostAllocationTagsStatusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCostAllocationTagsStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCostAllocationTagsStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCostAllocationTagsStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCostAllocationTagsStatusResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::UpdateCostAllocationTagsStatusRequestPrivate
 * \brief The UpdateCostAllocationTagsStatusRequestPrivate class provides private implementation for UpdateCostAllocationTagsStatusRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a UpdateCostAllocationTagsStatusRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
UpdateCostAllocationTagsStatusRequestPrivate::UpdateCostAllocationTagsStatusRequestPrivate(
    const CostExplorerRequest::Action action, UpdateCostAllocationTagsStatusRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCostAllocationTagsStatusRequest
 * class' copy constructor.
 */
UpdateCostAllocationTagsStatusRequestPrivate::UpdateCostAllocationTagsStatusRequestPrivate(
    const UpdateCostAllocationTagsStatusRequestPrivate &other, UpdateCostAllocationTagsStatusRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
