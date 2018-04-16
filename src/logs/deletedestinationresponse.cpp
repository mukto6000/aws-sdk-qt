/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletedestinationresponse.h"
#include "deletedestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::DeleteDestinationResponse
 *
 * \brief The DeleteDestinationResponse class encapsulates CloudWatchLogs DeleteDestination responses.
 *
 * \ingroup CloudWatchLogs
 *
 *  You can use Amazon CloudWatch Logs to monitor, store, and access your log files from Amazon EC2 instances, AWS
 *  CloudTrail, or other sources. You can then retrieve the associated log data from CloudWatch Logs using the CloudWatch
 *  console, CloudWatch Logs commands in the AWS CLI, CloudWatch Logs API, or CloudWatch Logs
 * 
 *  SDK>
 * 
 *  You can use CloudWatch Logs
 * 
 *  to> <ul> <li>
 * 
 *  <b>Monitor logs from EC2 instances in real-time</b>: You can use CloudWatch Logs to monitor applications and systems
 *  using log data. For example, CloudWatch Logs can track the number of errors that occur in your application logs and send
 *  you a notification whenever the rate of errors exceeds a threshold that you specify. CloudWatch Logs uses your log data
 *  for monitoring; so, no code changes are required. For example, you can monitor application logs for specific literal
 *  terms (such as "NullReferenceException") or count the number of occurrences of a literal term at a particular position
 *  in log data (such as "404" status codes in an Apache access log). When the term you are searching for is found,
 *  CloudWatch Logs reports the data to a CloudWatch metric that you
 * 
 *  specify> </li> <li>
 * 
 *  <b>Monitor AWS CloudTrail logged events</b>: You can create alarms in CloudWatch and receive notifications of particular
 *  API activity as captured by CloudTrail and use the notification to perform
 * 
 *  troubleshooting> </li> <li>
 * 
 *  <b>Archive log data</b>: You can use CloudWatch Logs to store your log data in highly durable storage. You can change
 *  the log retention setting so that any log events older than this setting are automatically deleted. The CloudWatch Logs
 *  agent makes it easy to quickly send both rotated and non-rotated log data off of a host and into the log service. You
 *  can then access the raw log data when you need
 *
 * \sa CloudWatchLogsClient::deleteDestination
 */

/*!
 * @brief  Constructs a new DeleteDestinationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDestinationResponse::DeleteDestinationResponse(
        const DeleteDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DeleteDestinationResponsePrivate(this), parent)
{
    setRequest(new DeleteDestinationRequest(request));
    setReply(reply);
}

const DeleteDestinationRequest * DeleteDestinationResponse::request() const
{
    Q_D(const DeleteDestinationResponse);
    return static_cast<const DeleteDestinationRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudWatchLogs DeleteDestination response.
 *
 * @param  response  Response to parse.
 */
void DeleteDestinationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteDestinationResponsePrivate
 *
 * \brief Private implementation for DeleteDestinationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDestinationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDestinationResponse instance.
 */
DeleteDestinationResponsePrivate::DeleteDestinationResponsePrivate(
    DeleteDestinationResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudWatchLogs DeleteDestinationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDestinationResponsePrivate::parseDeleteDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDestinationResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
