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

#include "batchgetmembershipdatasourcesrequest.h"
#include "batchgetmembershipdatasourcesrequest_p.h"
#include "batchgetmembershipdatasourcesresponse.h"
#include "detectiverequest_p.h"

namespace QtAws {
namespace Detective {

/*!
 * \class QtAws::Detective::BatchGetMembershipDatasourcesRequest
 * \brief The BatchGetMembershipDatasourcesRequest class provides an interface for Detective BatchGetMembershipDatasources requests.
 *
 * \inmodule QtAwsDetective
 *
 *  Detective uses machine learning and purpose-built visualizations to help you to analyze and investigate security issues
 *  across your Amazon Web Services (Amazon Web Services) workloads. Detective automatically extracts time-based events such
 *  as login attempts, API calls, and network traffic from CloudTrail and Amazon Virtual Private Cloud (Amazon VPC) flow
 *  logs. It also extracts findings detected by Amazon
 * 
 *  GuardDuty>
 * 
 *  The Detective API primarily supports the creation and management of behavior graphs. A behavior graph contains the
 *  extracted data from a set of member accounts, and is created and managed by an administrator
 * 
 *  account>
 * 
 *  To add a member account to the behavior graph, the administrator account sends an invitation to the account. When the
 *  account accepts the invitation, it becomes a member account in the behavior
 * 
 *  graph>
 * 
 *  Detective is also integrated with Organizations. The organization management account designates the Detective
 *  administrator account for the organization. That account becomes the administrator account for the organization behavior
 *  graph. The Detective administrator account is also the delegated administrator account for Detective in
 * 
 *  Organizations>
 * 
 *  The Detective administrator account can enable any organization account as a member account in the organization behavior
 *  graph. The organization accounts do not receive invitations. The Detective administrator account can also invite other
 *  accounts to the organization behavior
 * 
 *  graph>
 * 
 *  Every behavior graph is specific to a Region. You can only use the API to manage behavior graphs that belong to the
 *  Region that is associated with the currently selected
 * 
 *  endpoint>
 * 
 *  The administrator account for a behavior graph can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  Enable and disable Detective. Enabling Detective creates a new behavior
 * 
 *  graph> </li> <li>
 * 
 *  View the list of member accounts in a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Add member accounts to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Remove member accounts from a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Apply tags to a behavior
 * 
 *  graph> </li> </ul>
 * 
 *  The organization management account can use the Detective API to select the delegated administrator for
 * 
 *  Detective>
 * 
 *  The Detective administrator account for an organization can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  Perform all of the functions of an administrator
 * 
 *  account> </li> <li>
 * 
 *  Determine whether to automatically enable new organization accounts as member accounts in the organization behavior
 * 
 *  graph> </li> </ul>
 * 
 *  An invited member account can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  View the list of behavior graphs that they are invited
 * 
 *  to> </li> <li>
 * 
 *  Accept an invitation to contribute to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Decline an invitation to contribute to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Remove their account from a behavior
 * 
 *  graph> </li> </ul>
 * 
 *  All API actions are logged as CloudTrail events. See <a
 *  href="https://docs.aws.amazon.com/detective/latest/adminguide/logging-using-cloudtrail.html">Logging Detective API Calls
 *  with
 * 
 *  CloudTrail</a>> <note>
 * 
 *  We replaced the term "master account" with the term "administrator account." An administrator account is used to
 *  centrally manage multiple accounts. In the case of Detective, the administrator account manages the accounts in their
 *  behavior
 *
 * \sa DetectiveClient::batchGetMembershipDatasources
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetMembershipDatasourcesRequest::BatchGetMembershipDatasourcesRequest(const BatchGetMembershipDatasourcesRequest &other)
    : DetectiveRequest(new BatchGetMembershipDatasourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetMembershipDatasourcesRequest object.
 */
BatchGetMembershipDatasourcesRequest::BatchGetMembershipDatasourcesRequest()
    : DetectiveRequest(new BatchGetMembershipDatasourcesRequestPrivate(DetectiveRequest::BatchGetMembershipDatasourcesAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetMembershipDatasourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetMembershipDatasourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetMembershipDatasourcesRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetMembershipDatasourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Detective::BatchGetMembershipDatasourcesRequestPrivate
 * \brief The BatchGetMembershipDatasourcesRequestPrivate class provides private implementation for BatchGetMembershipDatasourcesRequest.
 * \internal
 *
 * \inmodule QtAwsDetective
 */

/*!
 * Constructs a BatchGetMembershipDatasourcesRequestPrivate object for Detective \a action,
 * with public implementation \a q.
 */
BatchGetMembershipDatasourcesRequestPrivate::BatchGetMembershipDatasourcesRequestPrivate(
    const DetectiveRequest::Action action, BatchGetMembershipDatasourcesRequest * const q)
    : DetectiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetMembershipDatasourcesRequest
 * class' copy constructor.
 */
BatchGetMembershipDatasourcesRequestPrivate::BatchGetMembershipDatasourcesRequestPrivate(
    const BatchGetMembershipDatasourcesRequestPrivate &other, BatchGetMembershipDatasourcesRequest * const q)
    : DetectiveRequestPrivate(other, q)
{

}

} // namespace Detective
} // namespace QtAws
