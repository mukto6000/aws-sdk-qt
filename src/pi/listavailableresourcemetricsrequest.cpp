// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listavailableresourcemetricsrequest.h"
#include "listavailableresourcemetricsrequest_p.h"
#include "listavailableresourcemetricsresponse.h"
#include "pirequest_p.h"

namespace QtAws {
namespace Pi {

/*!
 * \class QtAws::Pi::ListAvailableResourceMetricsRequest
 * \brief The ListAvailableResourceMetricsRequest class provides an interface for Pi ListAvailableResourceMetrics requests.
 *
 * \inmodule QtAwsPi
 *
 *  <fullname>Amazon RDS Performance Insights</fullname>
 * 
 *  Amazon RDS Performance Insights enables you to monitor and explore different dimensions of database load based on data
 *  captured from a running DB instance. The guide provides detailed information about Performance Insights data types,
 *  parameters and
 * 
 *  errors>
 * 
 *  When Performance Insights is enabled, the Amazon RDS Performance Insights API provides visibility into the performance
 *  of your DB instance. Amazon CloudWatch provides the authoritative source for Amazon Web Services service-vended
 *  monitoring metrics. Performance Insights offers a domain-specific view of DB
 * 
 *  load>
 * 
 *  DB load is measured as average active sessions. Performance Insights provides the data to API consumers as a
 *  two-dimensional time-series dataset. The time dimension provides DB load data for each time point in the queried time
 *  range. Each time point decomposes overall load in relation to the requested dimensions, measured at that time point.
 *  Examples include SQL, Wait event, User, and
 * 
 *  Host> <ul> <li>
 * 
 *  To learn more about Performance Insights and Amazon Aurora DB instances, go to the <i> <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html"> Amazon Aurora User Guide</a>
 *  </i>.
 * 
 *  </p </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon RDS DB instances, go to the <i> <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html"> Amazon RDS User Guide</a> </i>.
 * 
 *  </p </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon DocumentDB clusters, go to the <i> <a
 *  href="https://docs.aws.amazon.com/documentdb/latest/developerguide/performance-insights.html"> Amazon DocumentDB
 *  Developer Guide</a>
 *
 * \sa PiClient::listAvailableResourceMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
ListAvailableResourceMetricsRequest::ListAvailableResourceMetricsRequest(const ListAvailableResourceMetricsRequest &other)
    : PiRequest(new ListAvailableResourceMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAvailableResourceMetricsRequest object.
 */
ListAvailableResourceMetricsRequest::ListAvailableResourceMetricsRequest()
    : PiRequest(new ListAvailableResourceMetricsRequestPrivate(PiRequest::ListAvailableResourceMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAvailableResourceMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAvailableResourceMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAvailableResourceMetricsRequest::response(QNetworkReply * const reply) const
{
    return new ListAvailableResourceMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::Pi::ListAvailableResourceMetricsRequestPrivate
 * \brief The ListAvailableResourceMetricsRequestPrivate class provides private implementation for ListAvailableResourceMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsPi
 */

/*!
 * Constructs a ListAvailableResourceMetricsRequestPrivate object for Pi \a action,
 * with public implementation \a q.
 */
ListAvailableResourceMetricsRequestPrivate::ListAvailableResourceMetricsRequestPrivate(
    const PiRequest::Action action, ListAvailableResourceMetricsRequest * const q)
    : PiRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAvailableResourceMetricsRequest
 * class' copy constructor.
 */
ListAvailableResourceMetricsRequestPrivate::ListAvailableResourceMetricsRequestPrivate(
    const ListAvailableResourceMetricsRequestPrivate &other, ListAvailableResourceMetricsRequest * const q)
    : PiRequestPrivate(other, q)
{

}

} // namespace Pi
} // namespace QtAws
