// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchwriteitemresponse.h"
#include "batchwriteitemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::BatchWriteItemResponse
 * \brief The BatchWriteItemResponse class provides an interace for DynamoDb BatchWriteItem responses.
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
 * \sa DynamoDbClient::batchWriteItem
 */

/*!
 * Constructs a BatchWriteItemResponse object for \a reply to \a request, with parent \a parent.
 */
BatchWriteItemResponse::BatchWriteItemResponse(
        const BatchWriteItemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new BatchWriteItemResponsePrivate(this), parent)
{
    setRequest(new BatchWriteItemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchWriteItemRequest * BatchWriteItemResponse::request() const
{
    Q_D(const BatchWriteItemResponse);
    return static_cast<const BatchWriteItemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb BatchWriteItem \a response.
 */
void BatchWriteItemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchWriteItemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::BatchWriteItemResponsePrivate
 * \brief The BatchWriteItemResponsePrivate class provides private implementation for BatchWriteItemResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a BatchWriteItemResponsePrivate object with public implementation \a q.
 */
BatchWriteItemResponsePrivate::BatchWriteItemResponsePrivate(
    BatchWriteItemResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb BatchWriteItem response element from \a xml.
 */
void BatchWriteItemResponsePrivate::parseBatchWriteItemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchWriteItemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
