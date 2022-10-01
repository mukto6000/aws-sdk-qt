// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "connectparticipantclient.h"
#include "connectparticipantclient_p.h"

#include "core/awssignaturev4.h"
#include "completeattachmentuploadrequest.h"
#include "completeattachmentuploadresponse.h"
#include "createparticipantconnectionrequest.h"
#include "createparticipantconnectionresponse.h"
#include "disconnectparticipantrequest.h"
#include "disconnectparticipantresponse.h"
#include "getattachmentrequest.h"
#include "getattachmentresponse.h"
#include "gettranscriptrequest.h"
#include "gettranscriptresponse.h"
#include "sendeventrequest.h"
#include "sendeventresponse.h"
#include "sendmessagerequest.h"
#include "sendmessageresponse.h"
#include "startattachmentuploadrequest.h"
#include "startattachmentuploadresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ConnectParticipant
 * \brief Contains classess for accessing Amazon Connect Participant Service.
 *
 * \inmodule QtAwsConnectParticipant
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::ConnectParticipantClient
 * \brief The ConnectParticipantClient class provides access to the Amazon Connect Participant Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnectParticipant
 *
 *  Amazon Connect is a cloud-based contact center solution that makes it easy to set up and manage a customer contact
 *  center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect enables customer contacts through voice or
 * 
 *  chat>
 * 
 *  The APIs described here are used by chat participants, such as agents and
 */

/*!
 * \brief Constructs a ConnectParticipantClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ConnectParticipantClient::ConnectParticipantClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectParticipantClientPrivate(this), parent)
{
    Q_D(ConnectParticipantClient);
    d->apiVersion = QStringLiteral("2018-09-07");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("participant.connect");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Connect Participant Service");
    d->serviceName = QStringLiteral("execute-api");
}

/*!
 * \overload ConnectParticipantClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ConnectParticipantClient::ConnectParticipantClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectParticipantClientPrivate(this), parent)
{
    Q_D(ConnectParticipantClient);
    d->apiVersion = QStringLiteral("2018-09-07");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("participant.connect");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Connect Participant Service");
    d->serviceName = QStringLiteral("execute-api");
}

/*!
 * Sends \a request to the ConnectParticipantClient service, and returns a pointer to an
 * CompleteAttachmentUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to confirm that the attachment has been uploaded using the pre-signed URL provided in StartAttachmentUpload
 * API.
 *
 * </p
 *
 * The Amazon Connect Participant Service APIs do not use <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4
 */
CompleteAttachmentUploadResponse * ConnectParticipantClient::completeAttachmentUpload(const CompleteAttachmentUploadRequest &request)
{
    return qobject_cast<CompleteAttachmentUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectParticipantClient service, and returns a pointer to an
 * CreateParticipantConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the participant's connection. Note that ParticipantToken is used for invoking this API instead of
 *
 * ConnectionToken>
 *
 * The participant token is valid for the lifetime of the participant – until they are part of a
 *
 * contact>
 *
 * The response URL for <code>WEBSOCKET</code> Type has a connect expiry timeout of 100s. Clients must manually connect to
 * the returned websocket URL and subscribe to the desired topic.
 *
 * </p
 *
 * For chat, you need to publish the following on the established websocket
 *
 * connection>
 *
 * <code>{"topic":"aws/subscribe","content":{"topics":["aws/chat"]}}</code>
 *
 * </p
 *
 * Upon websocket URL expiry, as specified in the response ConnectionExpiry parameter, clients need to call this API again
 * to obtain a new websocket URL and perform the same steps as
 *
 * before>
 *
 * <b>Message streaming support</b>: This API can also be used together with the <a
 * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartContactStreaming.html">StartContactStreaming</a>
 * API to create a participant connection for chat contacts that are not using a websocket. For more information about
 * message streaming, <a href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-message-streaming.html">Enable
 * real-time chat message streaming</a> in the <i>Amazon Connect Administrator
 *
 * Guide</i>>
 *
 * <b>Feature specifications</b>: For information about feature specifications, such as the allowed number of open
 * websocket connections per participant, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html#feature-limits">Feature
 * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.
 *
 * </p <note>
 *
 * The Amazon Connect Participant Service APIs do not use <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4
 */
CreateParticipantConnectionResponse * ConnectParticipantClient::createParticipantConnection(const CreateParticipantConnectionRequest &request)
{
    return qobject_cast<CreateParticipantConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectParticipantClient service, and returns a pointer to an
 * DisconnectParticipantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disconnects a participant. Note that ConnectionToken is used for invoking this API instead of
 *
 * ParticipantToken>
 *
 * The Amazon Connect Participant Service APIs do not use <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4
 */
DisconnectParticipantResponse * ConnectParticipantClient::disconnectParticipant(const DisconnectParticipantRequest &request)
{
    return qobject_cast<DisconnectParticipantResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectParticipantClient service, and returns a pointer to an
 * GetAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a pre-signed URL for download of a completed attachment. This is an asynchronous API for use with active
 *
 * contacts>
 *
 * The Amazon Connect Participant Service APIs do not use <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4
 */
GetAttachmentResponse * ConnectParticipantClient::getAttachment(const GetAttachmentRequest &request)
{
    return qobject_cast<GetAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectParticipantClient service, and returns a pointer to an
 * GetTranscriptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a transcript of the session, including details about any attachments. Note that ConnectionToken is used for
 * invoking this API instead of
 *
 * ParticipantToken>
 *
 * The Amazon Connect Participant Service APIs do not use <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4
 */
GetTranscriptResponse * ConnectParticipantClient::getTranscript(const GetTranscriptRequest &request)
{
    return qobject_cast<GetTranscriptResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectParticipantClient service, and returns a pointer to an
 * SendEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends an event. Note that ConnectionToken is used for invoking this API instead of
 *
 * ParticipantToken>
 *
 * The Amazon Connect Participant Service APIs do not use <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4
 */
SendEventResponse * ConnectParticipantClient::sendEvent(const SendEventRequest &request)
{
    return qobject_cast<SendEventResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectParticipantClient service, and returns a pointer to an
 * SendMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a message. Note that ConnectionToken is used for invoking this API instead of
 *
 * ParticipantToken>
 *
 * The Amazon Connect Participant Service APIs do not use <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4
 */
SendMessageResponse * ConnectParticipantClient::sendMessage(const SendMessageRequest &request)
{
    return qobject_cast<SendMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectParticipantClient service, and returns a pointer to an
 * StartAttachmentUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a pre-signed Amazon S3 URL in response for uploading the file directly to
 *
 * S3>
 *
 * The Amazon Connect Participant Service APIs do not use <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4
 */
StartAttachmentUploadResponse * ConnectParticipantClient::startAttachmentUpload(const StartAttachmentUploadRequest &request)
{
    return qobject_cast<StartAttachmentUploadResponse *>(send(request));
}

/*!
 * \class QtAws::ConnectParticipant::ConnectParticipantClientPrivate
 * \brief The ConnectParticipantClientPrivate class provides private implementation for ConnectParticipantClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a ConnectParticipantClientPrivate object with public implementation \a q.
 */
ConnectParticipantClientPrivate::ConnectParticipantClientPrivate(ConnectParticipantClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ConnectParticipant
} // namespace QtAws
