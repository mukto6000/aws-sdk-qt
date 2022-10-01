// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disablehealthserviceaccessfororganizationrequest.h"
#include "disablehealthserviceaccessfororganizationrequest_p.h"
#include "disablehealthserviceaccessfororganizationresponse.h"
#include "healthrequest_p.h"

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::DisableHealthServiceAccessForOrganizationRequest
 * \brief The DisableHealthServiceAccessForOrganizationRequest class provides an interface for Health DisableHealthServiceAccessForOrganization requests.
 *
 * \inmodule QtAwsHealth
 *
 *  <fullname>Health</fullname>
 * 
 *  The Health API provides programmatic access to the Health information that appears in the <a
 *  href="https://phd.aws.amazon.com/phd/home#/">Personal Health Dashboard</a>. You can use the API operations to get
 *  information about events that might affect your Amazon Web Services services and
 * 
 *  resources> <note> <ul> <li>
 * 
 *  You must have a Business, Enterprise On-Ramp, or Enterprise Support plan from <a
 *  href="http://aws.amazon.com/premiumsupport/">Amazon Web Services Support</a> to use the Health API. If you call the
 *  Health API from an Amazon Web Services account that doesn't have a Business, Enterprise On-Ramp, or Enterprise Support
 *  plan, you receive a <code>SubscriptionRequiredException</code>
 * 
 *  error> </li> <li>
 * 
 *  You can use the Health endpoint health.us-east-1.amazonaws.com (HTTPS) to call the Health API operations. Health
 *  supports a multi-Region application architecture and has two regional endpoints in an active-passive configuration. You
 *  can use the high availability endpoint example to determine which Amazon Web Services Region is active, so that you can
 *  get the latest information from the API. For more information, see <a
 *  href="https://docs.aws.amazon.com/health/latest/ug/health-api.html">Accessing the Health API</a> in the <i>Health User
 * 
 *  Guide</i>> </li> </ul> </note>
 * 
 *  For authentication of requests, Health uses the <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  If your Amazon Web Services account is part of Organizations, you can use the Health organizational view feature. This
 *  feature provides a centralized view of Health events across all accounts in your organization. You can aggregate Health
 *  events in real time to identify accounts in your organization that are affected by an operational event or get notified
 *  of security vulnerabilities. Use the organizational view API operations to enable this feature and return event
 *  information. For more information, see <a
 *  href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating Health events</a> in the <i>Health
 *  User
 * 
 *  Guide</i>> <note>
 * 
 *  When you use the Health API operations to return Health events, see the following
 * 
 *  recommendations> <ul> <li>
 * 
 *  Use the <a
 *  href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html#AWSHealth-Type-Event-eventScopeCode">eventScopeCode</a>
 *  parameter to specify whether to return Health events that are public or
 * 
 *  account-specific> </li> <li>
 * 
 *  Use pagination to view all events from the response. For example, if you call the
 *  <code>DescribeEventsForOrganization</code> operation to get all events in your organization, you might receive several
 *  page results. Specify the <code>nextToken</code> in the next request to return more
 *
 * \sa HealthClient::disableHealthServiceAccessForOrganization
 */

/*!
 * Constructs a copy of \a other.
 */
DisableHealthServiceAccessForOrganizationRequest::DisableHealthServiceAccessForOrganizationRequest(const DisableHealthServiceAccessForOrganizationRequest &other)
    : HealthRequest(new DisableHealthServiceAccessForOrganizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableHealthServiceAccessForOrganizationRequest object.
 */
DisableHealthServiceAccessForOrganizationRequest::DisableHealthServiceAccessForOrganizationRequest()
    : HealthRequest(new DisableHealthServiceAccessForOrganizationRequestPrivate(HealthRequest::DisableHealthServiceAccessForOrganizationAction, this))
{

}

/*!
 * \reimp
 */
bool DisableHealthServiceAccessForOrganizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableHealthServiceAccessForOrganizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableHealthServiceAccessForOrganizationRequest::response(QNetworkReply * const reply) const
{
    return new DisableHealthServiceAccessForOrganizationResponse(*this, reply);
}

/*!
 * \class QtAws::Health::DisableHealthServiceAccessForOrganizationRequestPrivate
 * \brief The DisableHealthServiceAccessForOrganizationRequestPrivate class provides private implementation for DisableHealthServiceAccessForOrganizationRequest.
 * \internal
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a DisableHealthServiceAccessForOrganizationRequestPrivate object for Health \a action,
 * with public implementation \a q.
 */
DisableHealthServiceAccessForOrganizationRequestPrivate::DisableHealthServiceAccessForOrganizationRequestPrivate(
    const HealthRequest::Action action, DisableHealthServiceAccessForOrganizationRequest * const q)
    : HealthRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableHealthServiceAccessForOrganizationRequest
 * class' copy constructor.
 */
DisableHealthServiceAccessForOrganizationRequestPrivate::DisableHealthServiceAccessForOrganizationRequestPrivate(
    const DisableHealthServiceAccessForOrganizationRequestPrivate &other, DisableHealthServiceAccessForOrganizationRequest * const q)
    : HealthRequestPrivate(other, q)
{

}

} // namespace Health
} // namespace QtAws
