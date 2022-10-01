// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventbusresponse.h"
#include "describeeventbusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::DescribeEventBusResponse
 * \brief The DescribeEventBusResponse class provides an interace for EventBridge DescribeEventBus responses.
 *
 * \inmodule QtAwsEventBridge
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
 * \sa EventBridgeClient::describeEventBus
 */

/*!
 * Constructs a DescribeEventBusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEventBusResponse::DescribeEventBusResponse(
        const DescribeEventBusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new DescribeEventBusResponsePrivate(this), parent)
{
    setRequest(new DescribeEventBusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEventBusRequest * DescribeEventBusResponse::request() const
{
    Q_D(const DescribeEventBusResponse);
    return static_cast<const DescribeEventBusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge DescribeEventBus \a response.
 */
void DescribeEventBusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEventBusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::DescribeEventBusResponsePrivate
 * \brief The DescribeEventBusResponsePrivate class provides private implementation for DescribeEventBusResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a DescribeEventBusResponsePrivate object with public implementation \a q.
 */
DescribeEventBusResponsePrivate::DescribeEventBusResponsePrivate(
    DescribeEventBusResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge DescribeEventBus response element from \a xml.
 */
void DescribeEventBusResponsePrivate::parseDescribeEventBusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventBusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
