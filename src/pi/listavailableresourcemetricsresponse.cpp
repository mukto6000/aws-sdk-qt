// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listavailableresourcemetricsresponse.h"
#include "listavailableresourcemetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pi {

/*!
 * \class QtAws::Pi::ListAvailableResourceMetricsResponse
 * \brief The ListAvailableResourceMetricsResponse class provides an interace for Pi ListAvailableResourceMetrics responses.
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
 * Constructs a ListAvailableResourceMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAvailableResourceMetricsResponse::ListAvailableResourceMetricsResponse(
        const ListAvailableResourceMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PiResponse(new ListAvailableResourceMetricsResponsePrivate(this), parent)
{
    setRequest(new ListAvailableResourceMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAvailableResourceMetricsRequest * ListAvailableResourceMetricsResponse::request() const
{
    Q_D(const ListAvailableResourceMetricsResponse);
    return static_cast<const ListAvailableResourceMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pi ListAvailableResourceMetrics \a response.
 */
void ListAvailableResourceMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAvailableResourceMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pi::ListAvailableResourceMetricsResponsePrivate
 * \brief The ListAvailableResourceMetricsResponsePrivate class provides private implementation for ListAvailableResourceMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsPi
 */

/*!
 * Constructs a ListAvailableResourceMetricsResponsePrivate object with public implementation \a q.
 */
ListAvailableResourceMetricsResponsePrivate::ListAvailableResourceMetricsResponsePrivate(
    ListAvailableResourceMetricsResponse * const q) : PiResponsePrivate(q)
{

}

/*!
 * Parses a Pi ListAvailableResourceMetrics response element from \a xml.
 */
void ListAvailableResourceMetricsResponsePrivate::parseListAvailableResourceMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAvailableResourceMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pi
} // namespace QtAws
