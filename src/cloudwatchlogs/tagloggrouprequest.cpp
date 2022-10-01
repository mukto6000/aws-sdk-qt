// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagloggrouprequest.h"
#include "tagloggrouprequest_p.h"
#include "tagloggroupresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::TagLogGroupRequest
 * \brief The TagLogGroupRequest class provides an interface for CloudWatchLogs TagLogGroup requests.
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
 * \sa CloudWatchLogsClient::tagLogGroup
 */

/*!
 * Constructs a copy of \a other.
 */
TagLogGroupRequest::TagLogGroupRequest(const TagLogGroupRequest &other)
    : CloudWatchLogsRequest(new TagLogGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagLogGroupRequest object.
 */
TagLogGroupRequest::TagLogGroupRequest()
    : CloudWatchLogsRequest(new TagLogGroupRequestPrivate(CloudWatchLogsRequest::TagLogGroupAction, this))
{

}

/*!
 * \reimp
 */
bool TagLogGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagLogGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagLogGroupRequest::response(QNetworkReply * const reply) const
{
    return new TagLogGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchLogs::TagLogGroupRequestPrivate
 * \brief The TagLogGroupRequestPrivate class provides private implementation for TagLogGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a TagLogGroupRequestPrivate object for CloudWatchLogs \a action,
 * with public implementation \a q.
 */
TagLogGroupRequestPrivate::TagLogGroupRequestPrivate(
    const CloudWatchLogsRequest::Action action, TagLogGroupRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagLogGroupRequest
 * class' copy constructor.
 */
TagLogGroupRequestPrivate::TagLogGroupRequestPrivate(
    const TagLogGroupRequestPrivate &other, TagLogGroupRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
