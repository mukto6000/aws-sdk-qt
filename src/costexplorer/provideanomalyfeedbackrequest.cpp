// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "provideanomalyfeedbackrequest.h"
#include "provideanomalyfeedbackrequest_p.h"
#include "provideanomalyfeedbackresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::ProvideAnomalyFeedbackRequest
 * \brief The ProvideAnomalyFeedbackRequest class provides an interface for CostExplorer ProvideAnomalyFeedback requests.
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
 * \sa CostExplorerClient::provideAnomalyFeedback
 */

/*!
 * Constructs a copy of \a other.
 */
ProvideAnomalyFeedbackRequest::ProvideAnomalyFeedbackRequest(const ProvideAnomalyFeedbackRequest &other)
    : CostExplorerRequest(new ProvideAnomalyFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ProvideAnomalyFeedbackRequest object.
 */
ProvideAnomalyFeedbackRequest::ProvideAnomalyFeedbackRequest()
    : CostExplorerRequest(new ProvideAnomalyFeedbackRequestPrivate(CostExplorerRequest::ProvideAnomalyFeedbackAction, this))
{

}

/*!
 * \reimp
 */
bool ProvideAnomalyFeedbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ProvideAnomalyFeedbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ProvideAnomalyFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new ProvideAnomalyFeedbackResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::ProvideAnomalyFeedbackRequestPrivate
 * \brief The ProvideAnomalyFeedbackRequestPrivate class provides private implementation for ProvideAnomalyFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a ProvideAnomalyFeedbackRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
ProvideAnomalyFeedbackRequestPrivate::ProvideAnomalyFeedbackRequestPrivate(
    const CostExplorerRequest::Action action, ProvideAnomalyFeedbackRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ProvideAnomalyFeedbackRequest
 * class' copy constructor.
 */
ProvideAnomalyFeedbackRequestPrivate::ProvideAnomalyFeedbackRequestPrivate(
    const ProvideAnomalyFeedbackRequestPrivate &other, ProvideAnomalyFeedbackRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
