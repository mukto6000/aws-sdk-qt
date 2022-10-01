// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepartnereventsourceresponse.h"
#include "deletepartnereventsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::DeletePartnerEventSourceResponse
 * \brief The DeletePartnerEventSourceResponse class provides an interace for CloudWatchEvents DeletePartnerEventSource responses.
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
 * \sa CloudWatchEventsClient::deletePartnerEventSource
 */

/*!
 * Constructs a DeletePartnerEventSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePartnerEventSourceResponse::DeletePartnerEventSourceResponse(
        const DeletePartnerEventSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new DeletePartnerEventSourceResponsePrivate(this), parent)
{
    setRequest(new DeletePartnerEventSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePartnerEventSourceRequest * DeletePartnerEventSourceResponse::request() const
{
    Q_D(const DeletePartnerEventSourceResponse);
    return static_cast<const DeletePartnerEventSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents DeletePartnerEventSource \a response.
 */
void DeletePartnerEventSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePartnerEventSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::DeletePartnerEventSourceResponsePrivate
 * \brief The DeletePartnerEventSourceResponsePrivate class provides private implementation for DeletePartnerEventSourceResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a DeletePartnerEventSourceResponsePrivate object with public implementation \a q.
 */
DeletePartnerEventSourceResponsePrivate::DeletePartnerEventSourceResponsePrivate(
    DeletePartnerEventSourceResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents DeletePartnerEventSource response element from \a xml.
 */
void DeletePartnerEventSourceResponsePrivate::parseDeletePartnerEventSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePartnerEventSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
