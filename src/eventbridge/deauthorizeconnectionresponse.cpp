// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deauthorizeconnectionresponse.h"
#include "deauthorizeconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::DeauthorizeConnectionResponse
 * \brief The DeauthorizeConnectionResponse class provides an interace for EventBridge DeauthorizeConnection responses.
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
 * \sa EventBridgeClient::deauthorizeConnection
 */

/*!
 * Constructs a DeauthorizeConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeauthorizeConnectionResponse::DeauthorizeConnectionResponse(
        const DeauthorizeConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new DeauthorizeConnectionResponsePrivate(this), parent)
{
    setRequest(new DeauthorizeConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeauthorizeConnectionRequest * DeauthorizeConnectionResponse::request() const
{
    Q_D(const DeauthorizeConnectionResponse);
    return static_cast<const DeauthorizeConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge DeauthorizeConnection \a response.
 */
void DeauthorizeConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeauthorizeConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::DeauthorizeConnectionResponsePrivate
 * \brief The DeauthorizeConnectionResponsePrivate class provides private implementation for DeauthorizeConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a DeauthorizeConnectionResponsePrivate object with public implementation \a q.
 */
DeauthorizeConnectionResponsePrivate::DeauthorizeConnectionResponsePrivate(
    DeauthorizeConnectionResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge DeauthorizeConnection response element from \a xml.
 */
void DeauthorizeConnectionResponsePrivate::parseDeauthorizeConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeauthorizeConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
