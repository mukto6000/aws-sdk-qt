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

#include "describetrustedadvisorcheckrefreshstatusesrequest.h"
#include "describetrustedadvisorcheckrefreshstatusesrequest_p.h"
#include "describetrustedadvisorcheckrefreshstatusesresponse.h"
#include "supportrequest_p.h"

namespace QtAws {
namespace Support {

/*!
 * \class QtAws::Support::DescribeTrustedAdvisorCheckRefreshStatusesRequest
 * \brief The DescribeTrustedAdvisorCheckRefreshStatusesRequest class provides an interface for Support DescribeTrustedAdvisorCheckRefreshStatuses requests.
 *
 * \inmodule QtAwsSupport
 *
 *  <fullname>AWS Support</fullname>
 * 
 *  The AWS Support API reference is intended for programmers who need detailed information about the AWS Support operations
 *  and data types. This service enables you to manage your AWS Support cases programmatically. It uses HTTP methods that
 *  return results in JSON
 * 
 *  format>
 * 
 *  The AWS Support service also exposes a set of <a href="http://aws.amazon.com/premiumsupport/trustedadvisor/">Trusted
 *  Advisor</a> features. You can retrieve a list of checks and their descriptions, get check results, specify checks to
 *  refresh, and get the refresh status of checks.
 * 
 *  </p
 * 
 *  The following list describes the AWS Support case management
 * 
 *  operations> <ul> <li>
 * 
 *  <b>Service names, issue categories, and available severity levels. </b>The <a>DescribeServices</a> and
 *  <a>DescribeSeverityLevels</a> operations return AWS service names, service codes, service categories, and problem
 *  severity levels. You use these values when you call the <a>CreateCase</a> operation.
 * 
 *  </p </li> <li>
 * 
 *  <b>Case creation, case details, and case resolution.</b> The <a>CreateCase</a>, <a>DescribeCases</a>,
 *  <a>DescribeAttachment</a>, and <a>ResolveCase</a> operations create AWS Support cases, retrieve information about cases,
 *  and resolve
 * 
 *  cases> </li> <li>
 * 
 *  <b>Case communication.</b> The <a>DescribeCommunications</a>, <a>AddCommunicationToCase</a>, and
 *  <a>AddAttachmentsToSet</a> operations retrieve and add communications and attachments to AWS Support cases.
 * 
 *  </p </li> </ul>
 * 
 *  The following list describes the operations available from the AWS Support service for Trusted
 * 
 *  Advisor> <ul> <li>
 * 
 *  <a>DescribeTrustedAdvisorChecks</a> returns the list of checks that run against your AWS
 * 
 *  resources> </li> <li>
 * 
 *  Using the <code>checkId</code> for a specific check returned by <a>DescribeTrustedAdvisorChecks</a>, you can call
 *  <a>DescribeTrustedAdvisorCheckResult</a> to obtain the results for the check you
 * 
 *  specified> </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckSummaries</a> returns summarized results for one or more Trusted Advisor
 * 
 *  checks> </li> <li>
 * 
 *  <a>RefreshTrustedAdvisorCheck</a> requests that Trusted Advisor rerun a specified check.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> reports the refresh status of one or more checks.
 * 
 *  </p </li> </ul>
 * 
 *  For authentication of requests, AWS Support uses <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See <a href="http://docs.aws.amazon.com/awssupport/latest/user/Welcome.html">About the AWS Support API</a> in the <i>AWS
 *  Support User Guide</i> for information about how to use this service to create and manage your support cases, and how to
 *  call Trusted Advisor for results of checks on your resources.
 *
 * \sa SupportClient::describeTrustedAdvisorCheckRefreshStatuses
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTrustedAdvisorCheckRefreshStatusesRequest::DescribeTrustedAdvisorCheckRefreshStatusesRequest(const DescribeTrustedAdvisorCheckRefreshStatusesRequest &other)
    : SupportRequest(new DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTrustedAdvisorCheckRefreshStatusesRequest object.
 */
DescribeTrustedAdvisorCheckRefreshStatusesRequest::DescribeTrustedAdvisorCheckRefreshStatusesRequest()
    : SupportRequest(new DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate(SupportRequest::DescribeTrustedAdvisorCheckRefreshStatusesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTrustedAdvisorCheckRefreshStatusesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTrustedAdvisorCheckRefreshStatusesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTrustedAdvisorCheckRefreshStatusesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrustedAdvisorCheckRefreshStatusesResponse(*this, reply);
}

/*!
 * \class QtAws::Support::DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate
 * \brief The DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate class provides private implementation for DescribeTrustedAdvisorCheckRefreshStatusesRequest.
 * \internal
 *
 * \inmodule QtAwsSupport
 */

/*!
 * Constructs a DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate object for Support \a action,
 * with public implementation \a q.
 */
DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate::DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate(
    const SupportRequest::Action action, DescribeTrustedAdvisorCheckRefreshStatusesRequest * const q)
    : SupportRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrustedAdvisorCheckRefreshStatusesRequest
 * class' copy constructor.
 */
DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate::DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate(
    const DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate &other, DescribeTrustedAdvisorCheckRefreshStatusesRequest * const q)
    : SupportRequestPrivate(other, q)
{

}

} // namespace Support
} // namespace QtAws
