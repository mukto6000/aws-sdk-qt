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

#include "describetrustedadvisorchecksrequest.h"
#include "describetrustedadvisorchecksrequest_p.h"
#include "describetrustedadvisorchecksresponse.h"
#include "supportrequest_p.h"

namespace QtAws {
namespace Support {

/*!
 * \class QtAws::Support::DescribeTrustedAdvisorChecksRequest
 * \brief The DescribeTrustedAdvisorChecksRequest class provides an interface for Support DescribeTrustedAdvisorChecks requests.
 *
 * \inmodule QtAwsSupport
 *
 *  <fullname>Amazon Web Services Support</fullname>
 * 
 *  The <i>Amazon Web Services Support API Reference</i> is intended for programmers who need detailed information about the
 *  Amazon Web Services Support operations and data types. You can use the API to manage your support cases
 *  programmatically. The Amazon Web Services Support API uses HTTP methods that return results in JSON
 * 
 *  format> <note> <ul> <li>
 * 
 *  You must have a Business, Enterprise On-Ramp, or Enterprise Support plan to use the Amazon Web Services Support API.
 * 
 *  </p </li> <li>
 * 
 *  If you call the Amazon Web Services Support API from an account that does not have a Business, Enterprise On-Ramp, or
 *  Enterprise Support plan, the <code>SubscriptionRequiredException</code> error message appears. For information about
 *  changing your support plan, see <a href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
 * 
 *  Support</a>> </li> </ul> </note>
 * 
 *  The Amazon Web Services Support service also exposes a set of <a
 *  href="http://aws.amazon.com/premiumsupport/trustedadvisor/">Trusted Advisor</a> features. You can retrieve a list of
 *  checks and their descriptions, get check results, specify checks to refresh, and get the refresh status of
 * 
 *  checks>
 * 
 *  The following list describes the Amazon Web Services Support case management
 * 
 *  operations> <ul> <li>
 * 
 *  Service names, issue categories, and available severity levels - The <a>DescribeServices</a> and
 *  <a>DescribeSeverityLevels</a> operations return Amazon Web Services service names, service codes, service categories,
 *  and problem severity levels. You use these values when you call the <a>CreateCase</a>
 * 
 *  operation> </li> <li>
 * 
 *  Case creation, case details, and case resolution - The <a>CreateCase</a>, <a>DescribeCases</a>,
 *  <a>DescribeAttachment</a>, and <a>ResolveCase</a> operations create Amazon Web Services Support cases, retrieve
 *  information about cases, and resolve
 * 
 *  cases> </li> <li>
 * 
 *  Case communication - The <a>DescribeCommunications</a>, <a>AddCommunicationToCase</a>, and <a>AddAttachmentsToSet</a>
 *  operations retrieve and add communications and attachments to Amazon Web Services Support
 * 
 *  cases> </li> </ul>
 * 
 *  The following list describes the operations available from the Amazon Web Services Support service for Trusted
 * 
 *  Advisor> <ul> <li>
 * 
 *  <a>DescribeTrustedAdvisorChecks</a> returns the list of checks that run against your Amazon Web Services
 * 
 *  resources> </li> <li>
 * 
 *  Using the <code>checkId</code> for a specific check returned by <a>DescribeTrustedAdvisorChecks</a>, you can call
 *  <a>DescribeTrustedAdvisorCheckResult</a> to obtain the results for the check that you
 * 
 *  specified> </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckSummaries</a> returns summarized results for one or more Trusted Advisor
 * 
 *  checks> </li> <li>
 * 
 *  <a>RefreshTrustedAdvisorCheck</a> requests that Trusted Advisor rerun a specified
 * 
 *  check> </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> reports the refresh status of one or more
 * 
 *  checks> </li> </ul>
 * 
 *  For authentication of requests, Amazon Web Services Support uses <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See <a href="https://docs.aws.amazon.com/awssupport/latest/user/Welcome.html">About the Amazon Web Services Support
 *  API</a> in the <i>Amazon Web Services Support User Guide</i> for information about how to use this service to create and
 *  manage your support cases, and how to call Trusted Advisor for results of checks on your
 *
 * \sa SupportClient::describeTrustedAdvisorChecks
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTrustedAdvisorChecksRequest::DescribeTrustedAdvisorChecksRequest(const DescribeTrustedAdvisorChecksRequest &other)
    : SupportRequest(new DescribeTrustedAdvisorChecksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTrustedAdvisorChecksRequest object.
 */
DescribeTrustedAdvisorChecksRequest::DescribeTrustedAdvisorChecksRequest()
    : SupportRequest(new DescribeTrustedAdvisorChecksRequestPrivate(SupportRequest::DescribeTrustedAdvisorChecksAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTrustedAdvisorChecksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTrustedAdvisorChecksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTrustedAdvisorChecksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrustedAdvisorChecksResponse(*this, reply);
}

/*!
 * \class QtAws::Support::DescribeTrustedAdvisorChecksRequestPrivate
 * \brief The DescribeTrustedAdvisorChecksRequestPrivate class provides private implementation for DescribeTrustedAdvisorChecksRequest.
 * \internal
 *
 * \inmodule QtAwsSupport
 */

/*!
 * Constructs a DescribeTrustedAdvisorChecksRequestPrivate object for Support \a action,
 * with public implementation \a q.
 */
DescribeTrustedAdvisorChecksRequestPrivate::DescribeTrustedAdvisorChecksRequestPrivate(
    const SupportRequest::Action action, DescribeTrustedAdvisorChecksRequest * const q)
    : SupportRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrustedAdvisorChecksRequest
 * class' copy constructor.
 */
DescribeTrustedAdvisorChecksRequestPrivate::DescribeTrustedAdvisorChecksRequestPrivate(
    const DescribeTrustedAdvisorChecksRequestPrivate &other, DescribeTrustedAdvisorChecksRequest * const q)
    : SupportRequestPrivate(other, q)
{

}

} // namespace Support
} // namespace QtAws
