// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatekmskeyresponse.h"
#include "associatekmskeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::AssociateKmsKeyResponse
 * \brief The AssociateKmsKeyResponse class provides an interace for CloudWatchLogs AssociateKmsKey responses.
 *
 * \inmodule QtAwsCloudWatchLogs
 *
 *  You can use Amazon CloudWatch Logs to monitor, store, and access your log files from EC2 instances, CloudTrail, and
 *  other sources. You can then retrieve the associated log data from CloudWatch Logs using the CloudWatch console,
 *  CloudWatch Logs commands in the Amazon Web Services CLI, CloudWatch Logs API, or CloudWatch Logs
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
 *  for monitoring so no code changes are required. For example, you can monitor application logs for specific literal terms
 *  (such as "NullReferenceException") or count the number of occurrences of a literal term at a particular position in log
 *  data (such as "404" status codes in an Apache access log). When the term you are searching for is found, CloudWatch Logs
 *  reports the data to a CloudWatch metric that you
 * 
 *  specify> </li> <li>
 * 
 *  <b>Monitor CloudTrail logged events</b>: You can create alarms in CloudWatch and receive notifications of particular API
 *  activity as captured by CloudTrail. You can use the notification to perform
 * 
 *  troubleshooting> </li> <li>
 * 
 *  <b>Archive log data</b>: You can use CloudWatch Logs to store your log data in highly durable storage. You can change
 *  the log retention setting so that any log events older than this setting are automatically deleted. The CloudWatch Logs
 *  agent makes it easy to quickly send both rotated and non-rotated log data off of a host and into the log service. You
 *  can then access the raw log data when you need
 *
 * \sa CloudWatchLogsClient::associateKmsKey
 */

/*!
 * Constructs a AssociateKmsKeyResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateKmsKeyResponse::AssociateKmsKeyResponse(
        const AssociateKmsKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new AssociateKmsKeyResponsePrivate(this), parent)
{
    setRequest(new AssociateKmsKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateKmsKeyRequest * AssociateKmsKeyResponse::request() const
{
    Q_D(const AssociateKmsKeyResponse);
    return static_cast<const AssociateKmsKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchLogs AssociateKmsKey \a response.
 */
void AssociateKmsKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateKmsKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchLogs::AssociateKmsKeyResponsePrivate
 * \brief The AssociateKmsKeyResponsePrivate class provides private implementation for AssociateKmsKeyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a AssociateKmsKeyResponsePrivate object with public implementation \a q.
 */
AssociateKmsKeyResponsePrivate::AssociateKmsKeyResponsePrivate(
    AssociateKmsKeyResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchLogs AssociateKmsKey response element from \a xml.
 */
void AssociateKmsKeyResponsePrivate::parseAssociateKmsKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateKmsKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
