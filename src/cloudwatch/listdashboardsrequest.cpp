// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdashboardsrequest.h"
#include "listdashboardsrequest_p.h"
#include "listdashboardsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::ListDashboardsRequest
 * \brief The ListDashboardsRequest class provides an interface for CloudWatch ListDashboards requests.
 *
 * \inmodule QtAwsCloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (Amazon Web Services) resources and the applications you run on
 *  Amazon Web Services in real time. You can use CloudWatch to collect and track metrics, which are the variables you want
 *  to measure for your resources and
 * 
 *  applications>
 * 
 *  CloudWatch alarms send notifications or automatically change the resources you are monitoring based on rules that you
 *  define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon EC2 instances. Then, use
 *  this data to determine whether you should launch additional instances to handle increased load. You can also use this
 *  data to stop under-used instances to save
 * 
 *  money>
 * 
 *  In addition to monitoring the built-in metrics that come with Amazon Web Services, you can monitor your own custom
 *  metrics. With CloudWatch, you gain system-wide visibility into resource utilization, application performance, and
 *  operational
 *
 * \sa CloudWatchClient::listDashboards
 */

/*!
 * Constructs a copy of \a other.
 */
ListDashboardsRequest::ListDashboardsRequest(const ListDashboardsRequest &other)
    : CloudWatchRequest(new ListDashboardsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDashboardsRequest object.
 */
ListDashboardsRequest::ListDashboardsRequest()
    : CloudWatchRequest(new ListDashboardsRequestPrivate(CloudWatchRequest::ListDashboardsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDashboardsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDashboardsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDashboardsRequest::response(QNetworkReply * const reply) const
{
    return new ListDashboardsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::ListDashboardsRequestPrivate
 * \brief The ListDashboardsRequestPrivate class provides private implementation for ListDashboardsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a ListDashboardsRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
ListDashboardsRequestPrivate::ListDashboardsRequestPrivate(
    const CloudWatchRequest::Action action, ListDashboardsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDashboardsRequest
 * class' copy constructor.
 */
ListDashboardsRequestPrivate::ListDashboardsRequestPrivate(
    const ListDashboardsRequestPrivate &other, ListDashboardsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
