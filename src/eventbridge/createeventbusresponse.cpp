/*
    Copyright 2013-2020 Paul Colby

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

#include "createeventbusresponse.h"
#include "createeventbusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::CreateEventBusResponse
 * \brief The CreateEventBusResponse class provides an interace for EventBridge CreateEventBus responses.
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
 * \sa EventBridgeClient::createEventBus
 */

/*!
 * Constructs a CreateEventBusResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEventBusResponse::CreateEventBusResponse(
        const CreateEventBusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new CreateEventBusResponsePrivate(this), parent)
{
    setRequest(new CreateEventBusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEventBusRequest * CreateEventBusResponse::request() const
{
    Q_D(const CreateEventBusResponse);
    return static_cast<const CreateEventBusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge CreateEventBus \a response.
 */
void CreateEventBusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEventBusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::CreateEventBusResponsePrivate
 * \brief The CreateEventBusResponsePrivate class provides private implementation for CreateEventBusResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a CreateEventBusResponsePrivate object with public implementation \a q.
 */
CreateEventBusResponsePrivate::CreateEventBusResponsePrivate(
    CreateEventBusResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge CreateEventBus response element from \a xml.
 */
void CreateEventBusResponsePrivate::parseCreateEventBusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventBusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
