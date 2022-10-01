// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlogpatternsrequest.h"
#include "listlogpatternsrequest_p.h"
#include "listlogpatternsresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ListLogPatternsRequest
 * \brief The ListLogPatternsRequest class provides an interface for ApplicationInsights ListLogPatterns requests.
 *
 * \inmodule QtAwsApplicationInsights
 *
 *  <fullname>Amazon CloudWatch Application Insights</fullname>
 * 
 *  Amazon CloudWatch Application Insights is a service that helps you detect common problems with your applications. It
 *  enables you to pinpoint the source of issues in your applications (built with technologies such as Microsoft IIS, .NET,
 *  and Microsoft SQL Server), by providing key insights into detected
 * 
 *  problems>
 * 
 *  After you onboard your application, CloudWatch Application Insights identifies, recommends, and sets up metrics and
 *  logs. It continuously analyzes and correlates your metrics and logs for unusual behavior to surface actionable problems
 *  with your application. For example, if your application is slow and unresponsive and leading to HTTP 500 errors in your
 *  Application Load Balancer (ALB), Application Insights informs you that a memory pressure problem with your SQL Server
 *  database is occurring. It bases this analysis on impactful metrics and log errors.
 *
 * \sa ApplicationInsightsClient::listLogPatterns
 */

/*!
 * Constructs a copy of \a other.
 */
ListLogPatternsRequest::ListLogPatternsRequest(const ListLogPatternsRequest &other)
    : ApplicationInsightsRequest(new ListLogPatternsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLogPatternsRequest object.
 */
ListLogPatternsRequest::ListLogPatternsRequest()
    : ApplicationInsightsRequest(new ListLogPatternsRequestPrivate(ApplicationInsightsRequest::ListLogPatternsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLogPatternsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLogPatternsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLogPatternsRequest::response(QNetworkReply * const reply) const
{
    return new ListLogPatternsResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::ListLogPatternsRequestPrivate
 * \brief The ListLogPatternsRequestPrivate class provides private implementation for ListLogPatternsRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ListLogPatternsRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
ListLogPatternsRequestPrivate::ListLogPatternsRequestPrivate(
    const ApplicationInsightsRequest::Action action, ListLogPatternsRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLogPatternsRequest
 * class' copy constructor.
 */
ListLogPatternsRequestPrivate::ListLogPatternsRequestPrivate(
    const ListLogPatternsRequestPrivate &other, ListLogPatternsRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
