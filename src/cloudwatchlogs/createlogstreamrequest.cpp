// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlogstreamrequest.h"
#include "createlogstreamrequest_p.h"
#include "createlogstreamresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::CreateLogStreamRequest
 * \brief The CreateLogStreamRequest class provides an interface for CloudWatchLogs CreateLogStream requests.
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
 * \sa CloudWatchLogsClient::createLogStream
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLogStreamRequest::CreateLogStreamRequest(const CreateLogStreamRequest &other)
    : CloudWatchLogsRequest(new CreateLogStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLogStreamRequest object.
 */
CreateLogStreamRequest::CreateLogStreamRequest()
    : CloudWatchLogsRequest(new CreateLogStreamRequestPrivate(CloudWatchLogsRequest::CreateLogStreamAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLogStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLogStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLogStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateLogStreamResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchLogs::CreateLogStreamRequestPrivate
 * \brief The CreateLogStreamRequestPrivate class provides private implementation for CreateLogStreamRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a CreateLogStreamRequestPrivate object for CloudWatchLogs \a action,
 * with public implementation \a q.
 */
CreateLogStreamRequestPrivate::CreateLogStreamRequestPrivate(
    const CloudWatchLogsRequest::Action action, CreateLogStreamRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLogStreamRequest
 * class' copy constructor.
 */
CreateLogStreamRequestPrivate::CreateLogStreamRequestPrivate(
    const CreateLogStreamRequestPrivate &other, CreateLogStreamRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
