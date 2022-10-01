// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetimetoliveresponse.h"
#include "updatetimetoliveresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::UpdateTimeToLiveResponse
 * \brief The UpdateTimeToLiveResponse class provides an interace for DynamoDb UpdateTimeToLive responses.
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
 * \sa DynamoDbClient::updateTimeToLive
 */

/*!
 * Constructs a UpdateTimeToLiveResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTimeToLiveResponse::UpdateTimeToLiveResponse(
        const UpdateTimeToLiveRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbResponse(new UpdateTimeToLiveResponsePrivate(this), parent)
{
    setRequest(new UpdateTimeToLiveRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTimeToLiveRequest * UpdateTimeToLiveResponse::request() const
{
    Q_D(const UpdateTimeToLiveResponse);
    return static_cast<const UpdateTimeToLiveRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDb UpdateTimeToLive \a response.
 */
void UpdateTimeToLiveResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTimeToLiveResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDb::UpdateTimeToLiveResponsePrivate
 * \brief The UpdateTimeToLiveResponsePrivate class provides private implementation for UpdateTimeToLiveResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a UpdateTimeToLiveResponsePrivate object with public implementation \a q.
 */
UpdateTimeToLiveResponsePrivate::UpdateTimeToLiveResponsePrivate(
    UpdateTimeToLiveResponse * const q) : DynamoDbResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDb UpdateTimeToLive response element from \a xml.
 */
void UpdateTimeToLiveResponsePrivate::parseUpdateTimeToLiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTimeToLiveResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDb
} // namespace QtAws
