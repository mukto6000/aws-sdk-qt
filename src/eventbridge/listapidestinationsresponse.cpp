// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapidestinationsresponse.h"
#include "listapidestinationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::ListApiDestinationsResponse
 * \brief The ListApiDestinationsResponse class provides an interace for EventBridge ListApiDestinations responses.
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
 * \sa EventBridgeClient::listApiDestinations
 */

/*!
 * Constructs a ListApiDestinationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListApiDestinationsResponse::ListApiDestinationsResponse(
        const ListApiDestinationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new ListApiDestinationsResponsePrivate(this), parent)
{
    setRequest(new ListApiDestinationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApiDestinationsRequest * ListApiDestinationsResponse::request() const
{
    Q_D(const ListApiDestinationsResponse);
    return static_cast<const ListApiDestinationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge ListApiDestinations \a response.
 */
void ListApiDestinationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApiDestinationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::ListApiDestinationsResponsePrivate
 * \brief The ListApiDestinationsResponsePrivate class provides private implementation for ListApiDestinationsResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a ListApiDestinationsResponsePrivate object with public implementation \a q.
 */
ListApiDestinationsResponsePrivate::ListApiDestinationsResponsePrivate(
    ListApiDestinationsResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge ListApiDestinations response element from \a xml.
 */
void ListApiDestinationsResponsePrivate::parseListApiDestinationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApiDestinationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
