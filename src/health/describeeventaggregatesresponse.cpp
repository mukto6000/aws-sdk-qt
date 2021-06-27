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

#include "describeeventaggregatesresponse.h"
#include "describeeventaggregatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::DescribeEventAggregatesResponse
 * \brief The DescribeEventAggregatesResponse class provides an interace for Health DescribeEventAggregates responses.
 *
 * \inmodule QtAwsHealth
 *
 *  <fullname>AWS Health</fullname>
 * 
 *  The AWS Health API provides programmatic access to the AWS Health information that appears in the <a
 *  href="https://phd.aws.amazon.com/phd/home#/">AWS Personal Health Dashboard</a>. You can use the API operations to get
 *  information about AWS Health events that affect your AWS services and
 * 
 *  resources> <note> <ul> <li>
 * 
 *  You must have a Business or Enterprise Support plan from <a href="http://aws.amazon.com/premiumsupport/">AWS Support</a>
 *  to use the AWS Health API. If you call the AWS Health API from an AWS account that doesn't have a Business or Enterprise
 *  Support plan, you receive a <code>SubscriptionRequiredException</code>
 * 
 *  error> </li> <li>
 * 
 *  You can use the AWS Health endpoint health.us-east-1.amazonaws.com (HTTPS) to call the AWS Health API operations. AWS
 *  Health supports a multi-Region application architecture and has two regional endpoints in an active-passive
 *  configuration. You can use the high availability endpoint example to determine which AWS Region is active, so that you
 *  can get the latest information from the API. For more information, see <a
 *  href="https://docs.aws.amazon.com/health/latest/ug/health-api.html">Accessing the AWS Health API</a> in the <i>AWS
 *  Health User
 * 
 *  Guide</i>> </li> </ul> </note>
 * 
 *  For authentication of requests, AWS Health uses the <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  If your AWS account is part of AWS Organizations, you can use the AWS Health organizational view feature. This feature
 *  provides a centralized view of AWS Health events across all accounts in your organization. You can aggregate AWS Health
 *  events in real time to identify accounts in your organization that are affected by an operational event or get notified
 *  of security vulnerabilities. Use the organizational view API operations to enable this feature and return event
 *  information. For more information, see <a
 *  href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating AWS Health events</a> in the
 *  <i>AWS Health User
 * 
 *  Guide</i>> <note>
 * 
 *  When you use the AWS Health API operations to return AWS Health events, see the following
 * 
 *  recommendations> <ul> <li>
 * 
 *  Use the <a
 *  href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html#AWSHealth-Type-Event-eventScopeCode">eventScopeCode</a>
 *  parameter to specify whether to return AWS Health events that are public or
 * 
 *  account-specific> </li> <li>
 * 
 *  Use pagination to view all events from the response. For example, if you call the
 *  <code>DescribeEventsForOrganization</code> operation to get all events in your organization, you might receive several
 *  page results. Specify the <code>nextToken</code> in the next request to return more
 *
 * \sa HealthClient::describeEventAggregates
 */

/*!
 * Constructs a DescribeEventAggregatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEventAggregatesResponse::DescribeEventAggregatesResponse(
        const DescribeEventAggregatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthResponse(new DescribeEventAggregatesResponsePrivate(this), parent)
{
    setRequest(new DescribeEventAggregatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEventAggregatesRequest * DescribeEventAggregatesResponse::request() const
{
    return static_cast<const DescribeEventAggregatesRequest *>(HealthResponse::request());
}

/*!
 * \reimp
 * Parses a successful Health DescribeEventAggregates \a response.
 */
void DescribeEventAggregatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEventAggregatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Health::DescribeEventAggregatesResponsePrivate
 * \brief The DescribeEventAggregatesResponsePrivate class provides private implementation for DescribeEventAggregatesResponse.
 * \internal
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a DescribeEventAggregatesResponsePrivate object with public implementation \a q.
 */
DescribeEventAggregatesResponsePrivate::DescribeEventAggregatesResponsePrivate(
    DescribeEventAggregatesResponse * const q) : HealthResponsePrivate(q)
{

}

/*!
 * Parses a Health DescribeEventAggregates response element from \a xml.
 */
void DescribeEventAggregatesResponsePrivate::parseDescribeEventAggregatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventAggregatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Health
} // namespace QtAws
