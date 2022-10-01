// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexportresponse.h"
#include "describeexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::DescribeExportResponse
 * \brief The DescribeExportResponse class provides an interace for DynamoDb DescribeExport responses.
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
 * \sa DynamoDbClient::describeExport
 */

/*!
 * Constructs a DescribeExportResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExportResponse::DescribeExportResponse(
        const DescribeExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new DescribeExportResponsePrivate(this), parent)
{
    setRequest(new DescribeExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExportRequest * DescribeExportResponse::request() const
{
    Q_D(const DescribeExportResponse);
    return static_cast<const DescribeExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb DescribeExport \a response.
 */
void DescribeExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::DescribeExportResponsePrivate
 * \brief The DescribeExportResponsePrivate class provides private implementation for DescribeExportResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DescribeExportResponsePrivate object with public implementation \a q.
 */
DescribeExportResponsePrivate::DescribeExportResponsePrivate(
    DescribeExportResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb DescribeExport response element from \a xml.
 */
void DescribeExportResponsePrivate::parseDescribeExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
