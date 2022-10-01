// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelimitsresponse.h"
#include "describelimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::DescribeLimitsResponse
 * \brief The DescribeLimitsResponse class provides an interace for DynamoDb DescribeLimits responses.
 *
 * \inmodule QtAwsDynamoDb
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
 *  degradation, and use the Amazon Web Services Management Console to monitor resource utilization and performance
 * 
 *  metrics>
 * 
 *  DynamoDB automatically spreads the data and traffic for your tables over a sufficient number of servers to handle your
 *  throughput and storage requirements, while maintaining consistent and fast performance. All of your data is stored on
 *  solid state disks (SSDs) and automatically replicated across multiple Availability Zones in an Amazon Web Services
 *  Region, providing built-in high availability and data
 *
 * \sa DynamoDbClient::describeLimits
 */

/*!
 * Constructs a DescribeLimitsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLimitsResponse::DescribeLimitsResponse(
        const DescribeLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new DescribeLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeLimitsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLimitsRequest * DescribeLimitsResponse::request() const
{
    Q_D(const DescribeLimitsResponse);
    return static_cast<const DescribeLimitsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb DescribeLimits \a response.
 */
void DescribeLimitsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLimitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::DescribeLimitsResponsePrivate
 * \brief The DescribeLimitsResponsePrivate class provides private implementation for DescribeLimitsResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DescribeLimitsResponsePrivate object with public implementation \a q.
 */
DescribeLimitsResponsePrivate::DescribeLimitsResponsePrivate(
    DescribeLimitsResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb DescribeLimits response element from \a xml.
 */
void DescribeLimitsResponsePrivate::parseDescribeLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLimitsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
