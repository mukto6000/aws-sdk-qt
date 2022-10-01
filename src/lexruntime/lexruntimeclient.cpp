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

#include "lexruntimeclient.h"
#include "lexruntimeclient_p.h"

#include "core/awssignaturev4.h"
#include "deletesessionrequest.h"
#include "deletesessionresponse.h"
#include "getsessionrequest.h"
#include "getsessionresponse.h"
#include "postcontentrequest.h"
#include "postcontentresponse.h"
#include "posttextrequest.h"
#include "posttextresponse.h"
#include "putsessionrequest.h"
#include "putsessionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LexRuntime
 * \brief Contains classess for accessing Amazon Lex Runtime Service.
 *
 * \inmodule QtAwsLexRuntime
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::LexRuntimeClient
 * \brief The LexRuntimeClient class provides access to the Amazon Lex Runtime Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLexRuntime
 *
 *  Amazon Lex provides both build and runtime endpoints. Each endpoint provides a set of operations (API). Your
 *  conversational bot uses the runtime API to understand user utterances (user input text or voice). For example, suppose a
 *  user says "I want pizza", your bot sends this input to Amazon Lex using the runtime API. Amazon Lex recognizes that the
 *  user request is for the OrderPizza intent (one of the intents defined in the bot). Then Amazon Lex engages in user
 *  conversation on behalf of the bot to elicit required information (slot values, such as pizza size and crust type), and
 *  then performs fulfillment activity (that you configured when you created the bot). You use the build-time API to create
 *  and manage your Amazon Lex bot. For a list of build-time operations, see the build-time API, .
 */

/*!
 * \brief Constructs a LexRuntimeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LexRuntimeClient::LexRuntimeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LexRuntimeClientPrivate(this), parent)
{
    Q_D(LexRuntimeClient);
    d->apiVersion = QStringLiteral("2016-11-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("runtime.lex");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Lex Runtime Service");
    d->serviceName = QStringLiteral("lex");
}

/*!
 * \overload LexRuntimeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LexRuntimeClient::LexRuntimeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LexRuntimeClientPrivate(this), parent)
{
    Q_D(LexRuntimeClient);
    d->apiVersion = QStringLiteral("2016-11-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("runtime.lex");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Lex Runtime Service");
    d->serviceName = QStringLiteral("lex");
}

/*!
 * Sends \a request to the LexRuntimeClient service, and returns a pointer to an
 * DeleteSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes session information for a specified bot, alias, and user ID.
 */
DeleteSessionResponse * LexRuntimeClient::deleteSession(const DeleteSessionRequest &request)
{
    return qobject_cast<DeleteSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexRuntimeClient service, and returns a pointer to an
 * GetSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns session information for a specified bot, alias, and user
 */
GetSessionResponse * LexRuntimeClient::getSession(const GetSessionRequest &request)
{
    return qobject_cast<GetSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexRuntimeClient service, and returns a pointer to an
 * PostContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends user input (text or speech) to Amazon Lex. Clients use this API to send text and audio requests to Amazon Lex at
 * runtime. Amazon Lex interprets the user input using the machine learning model that it built for the bot.
 *
 * </p
 *
 * The <code>PostContent</code> operation supports audio input at 8kHz and 16kHz. You can use 8kHz audio to achieve higher
 * speech recognition accuracy in telephone audio applications.
 *
 * </p
 *
 * In response, Amazon Lex returns the next message to convey to the user. Consider the following example messages:
 *
 * </p <ul> <li>
 *
 * For a user input "I would like a pizza," Amazon Lex might return a response with a message eliciting slot data (for
 * example, <code>PizzaSize</code>): "What size pizza would you like?".
 *
 * </p </li> <li>
 *
 * After the user provides all of the pizza order information, Amazon Lex might return a response with a message to get
 * user confirmation: "Order the pizza?".
 *
 * </p </li> <li>
 *
 * After the user replies "Yes" to the confirmation prompt, Amazon Lex might return a conclusion statement: "Thank you,
 * your cheese pizza has been ordered.".
 *
 * </p </li> </ul>
 *
 * Not all Amazon Lex messages require a response from the user. For example, conclusion statements do not require a
 * response. Some messages require only a yes or no response. In addition to the <code>message</code>, Amazon Lex provides
 * additional context about the message in the response that you can use to enhance client behavior, such as displaying the
 * appropriate client user interface. Consider the following examples:
 *
 * </p <ul> <li>
 *
 * If the message is to elicit slot data, Amazon Lex returns the following context information:
 *
 * </p <ul> <li>
 *
 * <code>x-amz-lex-dialog-state</code> header set to <code>ElicitSlot</code>
 *
 * </p </li> <li>
 *
 * <code>x-amz-lex-intent-name</code> header set to the intent name in the current context
 *
 * </p </li> <li>
 *
 * <code>x-amz-lex-slot-to-elicit</code> header set to the slot name for which the <code>message</code> is eliciting
 * information
 *
 * </p </li> <li>
 *
 * <code>x-amz-lex-slots</code> header set to a map of slots configured for the intent with their current values
 *
 * </p </li> </ul> </li> <li>
 *
 * If the message is a confirmation prompt, the <code>x-amz-lex-dialog-state</code> header is set to
 * <code>Confirmation</code> and the <code>x-amz-lex-slot-to-elicit</code> header is omitted.
 *
 * </p </li> <li>
 *
 * If the message is a clarification prompt configured for the intent, indicating that the user intent is not understood,
 * the <code>x-amz-dialog-state</code> header is set to <code>ElicitIntent</code> and the <code>x-amz-slot-to-elicit</code>
 * header is omitted.
 *
 * </p </li> </ul>
 *
 * In addition, Amazon Lex also returns your application-specific <code>sessionAttributes</code>. For more information, see
 * <a href="https://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html">Managing Conversation Context</a>.
 */
PostContentResponse * LexRuntimeClient::postContent(const PostContentRequest &request)
{
    return qobject_cast<PostContentResponse *>(send(request));
}

/*!
 * Sends \a request to the LexRuntimeClient service, and returns a pointer to an
 * PostTextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends user input to Amazon Lex. Client applications can use this API to send requests to Amazon Lex at runtime. Amazon
 * Lex then interprets the user input using the machine learning model it built for the bot.
 *
 * </p
 *
 * In response, Amazon Lex returns the next <code>message</code> to convey to the user an optional
 * <code>responseCard</code> to display. Consider the following example messages:
 *
 * </p <ul> <li>
 *
 * For a user input "I would like a pizza", Amazon Lex might return a response with a message eliciting slot data (for
 * example, PizzaSize): "What size pizza would you like?"
 *
 * </p </li> <li>
 *
 * After the user provides all of the pizza order information, Amazon Lex might return a response with a message to obtain
 * user confirmation "Proceed with the pizza order?".
 *
 * </p </li> <li>
 *
 * After the user replies to a confirmation prompt with a "yes", Amazon Lex might return a conclusion statement: "Thank
 * you, your cheese pizza has been ordered.".
 *
 * </p </li> </ul>
 *
 * Not all Amazon Lex messages require a user response. For example, a conclusion statement does not require a response.
 * Some messages require only a "yes" or "no" user response. In addition to the <code>message</code>, Amazon Lex provides
 * additional context about the message in the response that you might use to enhance client behavior, for example, to
 * display the appropriate client user interface. These are the <code>slotToElicit</code>, <code>dialogState</code>,
 * <code>intentName</code>, and <code>slots</code> fields in the response. Consider the following examples:
 *
 * </p <ul> <li>
 *
 * If the message is to elicit slot data, Amazon Lex returns the following context
 *
 * information> <ul> <li>
 *
 * <code>dialogState</code> set to ElicitSlot
 *
 * </p </li> <li>
 *
 * <code>intentName</code> set to the intent name in the current context
 *
 * </p </li> <li>
 *
 * <code>slotToElicit</code> set to the slot name for which the <code>message</code> is eliciting information
 *
 * </p </li> <li>
 *
 * <code>slots</code> set to a map of slots, configured for the intent, with currently known values
 *
 * </p </li> </ul> </li> <li>
 *
 * If the message is a confirmation prompt, the <code>dialogState</code> is set to ConfirmIntent and
 * <code>SlotToElicit</code> is set to null.
 *
 * </p </li> <li>
 *
 * If the message is a clarification prompt (configured for the intent) that indicates that user intent is not understood,
 * the <code>dialogState</code> is set to ElicitIntent and <code>slotToElicit</code> is set to null.
 *
 * </p </li> </ul>
 *
 * In addition, Amazon Lex also returns your application-specific <code>sessionAttributes</code>. For more information, see
 * <a href="https://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html">Managing Conversation Context</a>.
 */
PostTextResponse * LexRuntimeClient::postText(const PostTextRequest &request)
{
    return qobject_cast<PostTextResponse *>(send(request));
}

/*!
 * Sends \a request to the LexRuntimeClient service, and returns a pointer to an
 * PutSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new session or modifies an existing session with an Amazon Lex bot. Use this operation to enable your
 * application to set the state of the
 *
 * bot>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/lex/latest/dg/how-session-api.html">Managing
 */
PutSessionResponse * LexRuntimeClient::putSession(const PutSessionRequest &request)
{
    return qobject_cast<PutSessionResponse *>(send(request));
}

/*!
 * \class QtAws::LexRuntime::LexRuntimeClientPrivate
 * \brief The LexRuntimeClientPrivate class provides private implementation for LexRuntimeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a LexRuntimeClientPrivate object with public implementation \a q.
 */
LexRuntimeClientPrivate::LexRuntimeClientPrivate(LexRuntimeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace LexRuntime
} // namespace QtAws
