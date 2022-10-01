// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecomponentconfigurationrequest.h"
#include "describecomponentconfigurationrequest_p.h"
#include "describecomponentconfigurationresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentConfigurationRequest
 * \brief The DescribeComponentConfigurationRequest class provides an interface for ApplicationInsights DescribeComponentConfiguration requests.
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
 * \sa ApplicationInsightsClient::describeComponentConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeComponentConfigurationRequest::DescribeComponentConfigurationRequest(const DescribeComponentConfigurationRequest &other)
    : ApplicationInsightsRequest(new DescribeComponentConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeComponentConfigurationRequest object.
 */
DescribeComponentConfigurationRequest::DescribeComponentConfigurationRequest()
    : ApplicationInsightsRequest(new DescribeComponentConfigurationRequestPrivate(ApplicationInsightsRequest::DescribeComponentConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeComponentConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeComponentConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeComponentConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeComponentConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentConfigurationRequestPrivate
 * \brief The DescribeComponentConfigurationRequestPrivate class provides private implementation for DescribeComponentConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeComponentConfigurationRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
DescribeComponentConfigurationRequestPrivate::DescribeComponentConfigurationRequestPrivate(
    const ApplicationInsightsRequest::Action action, DescribeComponentConfigurationRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeComponentConfigurationRequest
 * class' copy constructor.
 */
DescribeComponentConfigurationRequestPrivate::DescribeComponentConfigurationRequestPrivate(
    const DescribeComponentConfigurationRequestPrivate &other, DescribeComponentConfigurationRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
