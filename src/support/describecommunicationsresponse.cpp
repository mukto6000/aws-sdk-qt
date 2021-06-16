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

#include "describecommunicationsresponse.h"
#include "describecommunicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/*!
 * \class QtAws::Support::DescribeCommunicationsResponse
 * \brief The DescribeCommunicationsResponse class provides an interace for Support DescribeCommunications responses.
 *
 * \inmodule QtAwsSupport
 *
 *  <fullname>AWS Support</fullname>
 * 
 *  The <i>AWS Support API Reference</i> is intended for programmers who need detailed information about the AWS Support
 *  operations and data types. You can use the API to manage your support cases programmatically. The AWS Support API uses
 *  HTTP methods that return results in JSON
 * 
 *  format> <note> <ul> <li>
 * 
 *  You must have a Business or Enterprise Support plan to use the AWS Support API.
 * 
 *  </p </li> <li>
 * 
 *  If you call the AWS Support API from an account that does not have a Business or Enterprise Support plan, the
 *  <code>SubscriptionRequiredException</code> error message appears. For information about changing your support plan, see
 *  <a href="http://aws.amazon.com/premiumsupport/">AWS
 * 
 *  Support</a>> </li> </ul> </note>
 * 
 *  The AWS Support service also exposes a set of <a href="http://aws.amazon.com/premiumsupport/trustedadvisor/">AWS Trusted
 *  Advisor</a> features. You can retrieve a list of checks and their descriptions, get check results, specify checks to
 *  refresh, and get the refresh status of
 * 
 *  checks>
 * 
 *  The following list describes the AWS Support case management
 * 
 *  operations> <ul> <li>
 * 
 *  Service names, issue categories, and available severity levels - The <a>DescribeServices</a> and
 *  <a>DescribeSeverityLevels</a> operations return AWS service names, service codes, service categories, and problem
 *  severity levels. You use these values when you call the <a>CreateCase</a>
 * 
 *  operation> </li> <li>
 * 
 *  Case creation, case details, and case resolution - The <a>CreateCase</a>, <a>DescribeCases</a>,
 *  <a>DescribeAttachment</a>, and <a>ResolveCase</a> operations create AWS Support cases, retrieve information about cases,
 *  and resolve
 * 
 *  cases> </li> <li>
 * 
 *  Case communication - The <a>DescribeCommunications</a>, <a>AddCommunicationToCase</a>, and <a>AddAttachmentsToSet</a>
 *  operations retrieve and add communications and attachments to AWS Support
 * 
 *  cases> </li> </ul>
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
 *  For authentication of requests, AWS Support uses <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See <a href="https://docs.aws.amazon.com/awssupport/latest/user/Welcome.html">About the AWS Support API</a> in the
 *  <i>AWS Support User Guide</i> for information about how to use this service to create and manage your support cases, and
 *  how to call Trusted Advisor for results of checks on your
 *
 * \sa SupportClient::describeCommunications
 */

/*!
 * Constructs a DescribeCommunicationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCommunicationsResponse::DescribeCommunicationsResponse(
        const DescribeCommunicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeCommunicationsResponsePrivate(this), parent)
{
    setRequest(new DescribeCommunicationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCommunicationsRequest * DescribeCommunicationsResponse::request() const
{
    Q_D(const DescribeCommunicationsResponse);
    return static_cast<const DescribeCommunicationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Support DescribeCommunications \a response.
 */
void DescribeCommunicationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCommunicationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Support::DescribeCommunicationsResponsePrivate
 * \brief The DescribeCommunicationsResponsePrivate class provides private implementation for DescribeCommunicationsResponse.
 * \internal
 *
 * \inmodule QtAwsSupport
 */

/*!
 * Constructs a DescribeCommunicationsResponsePrivate object with public implementation \a q.
 */
DescribeCommunicationsResponsePrivate::DescribeCommunicationsResponsePrivate(
    DescribeCommunicationsResponse * const q) : SupportResponsePrivate(q)
{

}

/*!
 * Parses a Support DescribeCommunications response element from \a xml.
 */
void DescribeCommunicationsResponsePrivate::parseDescribeCommunicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCommunicationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Support
} // namespace QtAws
