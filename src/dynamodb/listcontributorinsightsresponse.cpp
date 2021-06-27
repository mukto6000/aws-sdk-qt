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

#include "listcontributorinsightsresponse.h"
#include "listcontributorinsightsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::ListContributorInsightsResponse
 * \brief The ListContributorInsightsResponse class provides an interace for DynamoDB ListContributorInsights responses.
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
 * \sa DynamoDBClient::listContributorInsights
 */

/*!
 * Constructs a ListContributorInsightsResponse object for \a reply to \a request, with parent \a parent.
 */
ListContributorInsightsResponse::ListContributorInsightsResponse(
        const ListContributorInsightsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new ListContributorInsightsResponsePrivate(this), parent)
{
    setRequest(new ListContributorInsightsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContributorInsightsRequest * ListContributorInsightsResponse::request() const
{
    return static_cast<const ListContributorInsightsRequest *>(DynamoDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DynamoDB ListContributorInsights \a response.
 */
void ListContributorInsightsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContributorInsightsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDB::ListContributorInsightsResponsePrivate
 * \brief The ListContributorInsightsResponsePrivate class provides private implementation for ListContributorInsightsResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a ListContributorInsightsResponsePrivate object with public implementation \a q.
 */
ListContributorInsightsResponsePrivate::ListContributorInsightsResponsePrivate(
    ListContributorInsightsResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDB ListContributorInsights response element from \a xml.
 */
void ListContributorInsightsResponsePrivate::parseListContributorInsightsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContributorInsightsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDB
} // namespace QtAws
