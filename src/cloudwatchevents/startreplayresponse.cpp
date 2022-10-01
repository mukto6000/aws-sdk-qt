/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startreplayresponse.h"
#include "startreplayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::StartReplayResponse
 * \brief The StartReplayResponse class provides an interace for CloudWatchEvents StartReplay responses.
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
 * \sa CloudWatchEventsClient::startReplay
 */

/*!
 * Constructs a StartReplayResponse object for \a reply to \a request, with parent \a parent.
 */
StartReplayResponse::StartReplayResponse(
        const StartReplayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new StartReplayResponsePrivate(this), parent)
{
    setRequest(new StartReplayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartReplayRequest * StartReplayResponse::request() const
{
    Q_D(const StartReplayResponse);
    return static_cast<const StartReplayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents StartReplay \a response.
 */
void StartReplayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartReplayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::StartReplayResponsePrivate
 * \brief The StartReplayResponsePrivate class provides private implementation for StartReplayResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a StartReplayResponsePrivate object with public implementation \a q.
 */
StartReplayResponsePrivate::StartReplayResponsePrivate(
    StartReplayResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents StartReplay response element from \a xml.
 */
void StartReplayResponsePrivate::parseStartReplayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReplayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
