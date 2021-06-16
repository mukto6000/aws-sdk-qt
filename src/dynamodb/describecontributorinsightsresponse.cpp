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

#include "describecontributorinsightsresponse.h"
#include "describecontributorinsightsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::DescribeContributorInsightsResponse
 * \brief The DescribeContributorInsightsResponse class provides an interace for DynamoDB DescribeContributorInsights responses.
 *
 * \inmodule QtAwsDynamoDB
 *
 *  <fullname>Amazon DynamoDB</fullname>
 * 
 *  Amazon DynamoDB is a fully managed NoSQL database service that provides fast and predictable performance with seamless
 *  scalability. DynamoDB lets you offload the administrative burdens of operating and scaling a distributed database, so
 *  that you don't have to worry about hardware provisioning, setup and configuration, replication, software patching, or
 *  cluster
 * 
 *  scaling>
 * 
 *  With DynamoDB, you can create database tables that can store and retrieve any amount of data, and serve any level of
 *  request traffic. You can scale up or scale down your tables' throughput capacity without downtime or performance
 *  degradation, and use the AWS Management Console to monitor resource utilization and performance
 * 
 *  metrics>
 * 
 *  DynamoDB automatically spreads the data and traffic for your tables over a sufficient number of servers to handle your
 *  throughput and storage requirements, while maintaining consistent and fast performance. All of your data is stored on
 *  solid state disks (SSDs) and automatically replicated across multiple Availability Zones in an AWS region, providing
 *  built-in high availability and data durability.
 *
 * \sa DynamoDBClient::describeContributorInsights
 */

/*!
 * Constructs a DescribeContributorInsightsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeContributorInsightsResponse::DescribeContributorInsightsResponse(
        const DescribeContributorInsightsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new DescribeContributorInsightsResponsePrivate(this), parent)
{
    setRequest(new DescribeContributorInsightsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeContributorInsightsRequest * DescribeContributorInsightsResponse::request() const
{
    Q_D(const DescribeContributorInsightsResponse);
    return static_cast<const DescribeContributorInsightsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDB DescribeContributorInsights \a response.
 */
void DescribeContributorInsightsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeContributorInsightsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDB::DescribeContributorInsightsResponsePrivate
 * \brief The DescribeContributorInsightsResponsePrivate class provides private implementation for DescribeContributorInsightsResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a DescribeContributorInsightsResponsePrivate object with public implementation \a q.
 */
DescribeContributorInsightsResponsePrivate::DescribeContributorInsightsResponsePrivate(
    DescribeContributorInsightsResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDB DescribeContributorInsights response element from \a xml.
 */
void DescribeContributorInsightsResponsePrivate::parseDescribeContributorInsightsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContributorInsightsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDB
} // namespace QtAws
