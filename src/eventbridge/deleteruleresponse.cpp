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

#include "deleteruleresponse.h"
#include "deleteruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::DeleteRuleResponse
 * \brief The DeleteRuleResponse class provides an interace for EventBridge DeleteRule responses.
 *
 * \inmodule QtAwsEventBridge
 *
 *  Amazon EventBridge helps you to respond to state changes in your AWS resources. When your resources change state, they
 *  automatically send events into an event stream. You can create rules that match selected events in the stream and route
 *  them to targets to take action. You can also use rules to take action on a predetermined schedule. For example, you can
 *  configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  stat> </li> <li>
 * 
 *  Direct specific API records from AWS CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential
 *  security or availability
 * 
 *  risk> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volum> </li> </ul>
 * 
 *  For more information about the features of Amazon EventBridge, see the <a
 *  href="https://docs.aws.amazon.com/eventbridge/latest/userguide/">Amazon EventBridge User
 *
 * \sa EventBridgeClient::deleteRule
 */

/*!
 * Constructs a DeleteRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRuleResponse::DeleteRuleResponse(
        const DeleteRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new DeleteRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRuleRequest * DeleteRuleResponse::request() const
{
    Q_D(const DeleteRuleResponse);
    return static_cast<const DeleteRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge DeleteRule \a response.
 */
void DeleteRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::DeleteRuleResponsePrivate
 * \brief The DeleteRuleResponsePrivate class provides private implementation for DeleteRuleResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a DeleteRuleResponsePrivate object with public implementation \a q.
 */
DeleteRuleResponsePrivate::DeleteRuleResponsePrivate(
    DeleteRuleResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge DeleteRule response element from \a xml.
 */
void DeleteRuleResponsePrivate::parseDeleteRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
