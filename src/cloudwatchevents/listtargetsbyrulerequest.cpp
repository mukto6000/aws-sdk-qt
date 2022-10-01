// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtargetsbyrulerequest.h"
#include "listtargetsbyrulerequest_p.h"
#include "listtargetsbyruleresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::ListTargetsByRuleRequest
 * \brief The ListTargetsByRuleRequest class provides an interface for CloudWatchEvents ListTargetsByRule requests.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon EventBridge helps you to respond to state changes in your Amazon Web Services resources. When your resources
 *  change state, they automatically send events to an event stream. You can create rules that match selected events in the
 *  stream and route them to targets to take action. You can also use rules to take action on a predetermined schedule. For
 *  example, you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance enters
 *  the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential security
 *  or availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon EventBridge, see the <a
 *  href="https://docs.aws.amazon.com/eventbridge/latest/userguide">Amazon EventBridge User
 *
 * \sa CloudWatchEventsClient::listTargetsByRule
 */

/*!
 * Constructs a copy of \a other.
 */
ListTargetsByRuleRequest::ListTargetsByRuleRequest(const ListTargetsByRuleRequest &other)
    : CloudWatchEventsRequest(new ListTargetsByRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTargetsByRuleRequest object.
 */
ListTargetsByRuleRequest::ListTargetsByRuleRequest()
    : CloudWatchEventsRequest(new ListTargetsByRuleRequestPrivate(CloudWatchEventsRequest::ListTargetsByRuleAction, this))
{

}

/*!
 * \reimp
 */
bool ListTargetsByRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTargetsByRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTargetsByRuleRequest::response(QNetworkReply * const reply) const
{
    return new ListTargetsByRuleResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchEvents::ListTargetsByRuleRequestPrivate
 * \brief The ListTargetsByRuleRequestPrivate class provides private implementation for ListTargetsByRuleRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a ListTargetsByRuleRequestPrivate object for CloudWatchEvents \a action,
 * with public implementation \a q.
 */
ListTargetsByRuleRequestPrivate::ListTargetsByRuleRequestPrivate(
    const CloudWatchEventsRequest::Action action, ListTargetsByRuleRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTargetsByRuleRequest
 * class' copy constructor.
 */
ListTargetsByRuleRequestPrivate::ListTargetsByRuleRequestPrivate(
    const ListTargetsByRuleRequestPrivate &other, ListTargetsByRuleRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
