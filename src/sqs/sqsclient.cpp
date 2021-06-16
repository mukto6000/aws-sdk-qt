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

#include "sqsclient.h"
#include "sqsclient_p.h"

#include "core/awssignaturev4.h"
#include "addpermissionrequest.h"
#include "addpermissionresponse.h"
#include "changemessagevisibilityrequest.h"
#include "changemessagevisibilityresponse.h"
#include "changemessagevisibilitybatchrequest.h"
#include "changemessagevisibilitybatchresponse.h"
#include "createqueuerequest.h"
#include "createqueueresponse.h"
#include "deletemessagerequest.h"
#include "deletemessageresponse.h"
#include "deletemessagebatchrequest.h"
#include "deletemessagebatchresponse.h"
#include "deletequeuerequest.h"
#include "deletequeueresponse.h"
#include "getqueueattributesrequest.h"
#include "getqueueattributesresponse.h"
#include "getqueueurlrequest.h"
#include "getqueueurlresponse.h"
#include "listdeadlettersourcequeuesrequest.h"
#include "listdeadlettersourcequeuesresponse.h"
#include "listqueuetagsrequest.h"
#include "listqueuetagsresponse.h"
#include "listqueuesrequest.h"
#include "listqueuesresponse.h"
#include "purgequeuerequest.h"
#include "purgequeueresponse.h"
#include "receivemessagerequest.h"
#include "receivemessageresponse.h"
#include "removepermissionrequest.h"
#include "removepermissionresponse.h"
#include "sendmessagerequest.h"
#include "sendmessageresponse.h"
#include "sendmessagebatchrequest.h"
#include "sendmessagebatchresponse.h"
#include "setqueueattributesrequest.h"
#include "setqueueattributesresponse.h"
#include "tagqueuerequest.h"
#include "tagqueueresponse.h"
#include "untagqueuerequest.h"
#include "untagqueueresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SQS
 * \brief Contains classess for accessing Amazon Simple Queue Service ( SQS).
 *
 * \inmodule QtAwsSqs
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::SqsClient
 * \brief The SqsClient class provides access to the Amazon Simple Queue Service ( SQS) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSQS
 *
 *  Welcome to the <i>Amazon Simple Queue Service API
 * 
 *  Reference</i>>
 * 
 *  Amazon Simple Queue Service (Amazon SQS) is a reliable, highly-scalable hosted queue for storing messages as they travel
 *  between applications or microservices. Amazon SQS moves data between distributed application components and helps you
 *  decouple these
 * 
 *  components>
 * 
 *  For information on the permissions you need to use this API, see <a
 *  href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-authentication-and-access-control.html">Identity
 *  and access management</a> in the <i>Amazon Simple Queue Service Developer Guide.</i>
 * 
 *  </p
 * 
 *  You can use <a href="http://aws.amazon.com/tools/#sdk">AWS SDKs</a> to access Amazon SQS using your favorite programming
 *  language. The SDKs perform tasks such as the following
 * 
 *  automatically> <ul> <li>
 * 
 *  Cryptographically sign your service
 * 
 *  request> </li> <li>
 * 
 *  Retry
 * 
 *  request> </li> <li>
 * 
 *  Handle error
 * 
 *  response> </li> </ul>
 * 
 *  <b>Additional information</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/sqs/">Amazon SQS Product Page</a>
 * 
 *  </p </li> <li>
 * 
 *  <i>Amazon Simple Queue Service Developer Guide</i>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-making-api-requests.html">Making
 *  API Requests</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-metadata.html#sqs-message-attributes">Amazon
 *  SQS Message Attributes</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Amazon
 *  SQS Dead-Letter Queues</a>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/cli/latest/reference/sqs/index.html">Amazon SQS in the <i>AWS CLI Command
 *  Reference</i> </a>
 * 
 *  </p </li> <li>
 * 
 *  <i>Amazon Web Services General Reference</i>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sqs_region">Regions and Endpoints</a>
 */

/*!
 * \brief Constructs a SqsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SqsClient::SqsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SqsClientPrivate(this), parent)
{
    Q_D(SqsClient);
    d->apiVersion = QStringLiteral("2012-11-05");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("sqs");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Simple Queue Service");
    d->serviceName = QStringLiteral("sqs");
}

/*!
 * \overload SqsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SqsClient::SqsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SqsClientPrivate(this), parent)
{
    Q_D(SqsClient);
    d->apiVersion = QStringLiteral("2012-11-05");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("sqs");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Simple Queue Service");
    d->serviceName = QStringLiteral("sqs");
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * AddPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a permission to a queue for a specific <a
 * href="https://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>. This allows sharing access to the
 *
 * queue>
 *
 * When you create a queue, you have full control access rights for the queue. Only you, the owner of the queue, can grant
 * or deny permissions to the queue. For more information about these permissions, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-writing-an-sqs-policy.html#write-messages-to-shared-queue">Allow
 * Developers to Write Messages to a Shared Queue</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>> <note> <ul> <li>
 *
 * <code>AddPermission</code> generates a policy for you. You can use <code> <a>SetQueueAttributes</a> </code> to upload
 * your policy. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-creating-custom-policies.html">Using
 * Custom Policies with the Amazon SQS Access Policy Language</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>> </li> <li>
 *
 * An Amazon SQS policy can have a maximum of 7
 *
 * actions> </li> <li>
 *
 * To remove the ability to change queue permissions, you must deny permission to the <code>AddPermission</code>,
 * <code>RemovePermission</code>, and <code>SetQueueAttributes</code> actions in your IAM
 *
 * policy> </li> </ul> </note>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;AttributeName.1=first</code>
 *
 * </p
 *
 * <code>&amp;AttributeName.2=second</code>
 *
 * </p <note>
 *
 * Cross-account permissions don't apply to this action. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
 * cross-account permissions to a role and a user name</a> in the <i>Amazon Simple Queue Service Developer
 */
AddPermissionResponse * SqsClient::addPermission(const AddPermissionRequest &request)
{
    return qobject_cast<AddPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * ChangeMessageVisibilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the visibility timeout of a specified message in a queue to a new value. The default visibility timeout for a
 * message is 30 seconds. The minimum is 0 seconds. The maximum is 12 hours. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
 * Timeout</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * For example, you have a message with a visibility timeout of 5 minutes. After 3 minutes, you call
 * <code>ChangeMessageVisibility</code> with a timeout of 10 minutes. You can continue to call
 * <code>ChangeMessageVisibility</code> to extend the visibility timeout to the maximum allowed time. If you try to extend
 * the visibility timeout beyond the maximum, your request is
 *
 * rejected>
 *
 * An Amazon SQS message has three basic
 *
 * states> <ol> <li>
 *
 * Sent to a queue by a
 *
 * producer> </li> <li>
 *
 * Received from the queue by a
 *
 * consumer> </li> <li>
 *
 * Deleted from the
 *
 * queue> </li> </ol>
 *
 * A message is considered to be <i>stored</i> after it is sent to a queue by a producer, but not yet received from the
 * queue by a consumer (that is, between states 1 and 2). There is no limit to the number of stored messages. A message is
 * considered to be <i>in flight</i> after it is received from a queue by a consumer, but not yet deleted from the queue
 * (that is, between states 2 and 3). There is a limit to the number of inflight
 *
 * messages>
 *
 * Limits that apply to inflight messages are unrelated to the <i>unlimited</i> number of stored
 *
 * messages>
 *
 * For most standard queues (depending on queue traffic and message backlog), there can be a maximum of approximately
 * 120,000 inflight messages (received from a queue by a consumer, but not yet deleted from the queue). If you reach this
 * limit, Amazon SQS returns the <code>OverLimit</code> error message. To avoid reaching the limit, you should delete
 * messages from the queue after they're processed. You can also increase the number of queues you use to process your
 * messages. To request a limit increase, <a
 * href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase&amp;limitType=service-code-sqs">file
 * a support
 *
 * request</a>>
 *
 * For FIFO queues, there can be a maximum of 20,000 inflight messages (received from a queue by a consumer, but not yet
 * deleted from the queue). If you reach this limit, Amazon SQS returns no error
 *
 * messages> <b>
 *
 * If you attempt to set the <code>VisibilityTimeout</code> to a value greater than the maximum time left, Amazon SQS
 * returns an error. Amazon SQS doesn't automatically recalculate and increase the timeout to the maximum remaining
 *
 * time>
 *
 * Unlike with a queue, when you change the visibility timeout for a specific message the timeout value is applied
 * immediately but isn't saved in memory for that message. If you don't delete a message after it is received, the
 * visibility timeout for the message reverts to the original timeout value (not to the value you set using the
 * <code>ChangeMessageVisibility</code> action) the next time the message is
 */
ChangeMessageVisibilityResponse * SqsClient::changeMessageVisibility(const ChangeMessageVisibilityRequest &request)
{
    return qobject_cast<ChangeMessageVisibilityResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * ChangeMessageVisibilityBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the visibility timeout of multiple messages. This is a batch version of <code>
 * <a>ChangeMessageVisibility</a>.</code> The result of the action on each message is reported individually in the
 * response. You can send up to 10 <code> <a>ChangeMessageVisibility</a> </code> requests with each
 * <code>ChangeMessageVisibilityBatch</code>
 *
 * action> <b>
 *
 * Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch
 * errors even when the call returns an HTTP status code of
 *
 * <code>200</code>> </b>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;AttributeName.1=first</code>
 *
 * </p
 *
 * <code>&amp;AttributeName.2=second</code>
 */
ChangeMessageVisibilityBatchResponse * SqsClient::changeMessageVisibilityBatch(const ChangeMessageVisibilityBatchRequest &request)
{
    return qobject_cast<ChangeMessageVisibilityBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * CreateQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new standard or FIFO queue. You can pass one or more attributes in the request. Keep the following in
 *
 * mind> <ul> <li>
 *
 * If you don't specify the <code>FifoQueue</code> attribute, Amazon SQS creates a standard
 *
 * queue> <note>
 *
 * You can't change the queue type after you create it and you can't convert an existing standard queue into a FIFO queue.
 * You must either create a new FIFO queue for your application or delete your existing standard queue and recreate it as a
 * FIFO queue. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-moving">Moving
 * From a Standard Queue to a FIFO Queue</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.
 *
 * </p </note> </li> <li>
 *
 * If you don't provide a value for an attribute, the queue is created with the default value for the
 *
 * attribute> </li> <li>
 *
 * If you delete a queue, you must wait at least 60 seconds before creating a queue with the same
 *
 * name> </li> </ul>
 *
 * To successfully create a new queue, you must provide a queue name that adheres to the <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/limits-queues.html">limits related to
 * queues</a> and is unique within the scope of your
 *
 * queues> <note>
 *
 * After you create a queue, you must wait at least one second after the queue is created to be able to use the
 *
 * queue> </note>
 *
 * To get the queue URL, use the <code> <a>GetQueueUrl</a> </code> action. <code> <a>GetQueueUrl</a> </code> requires only
 * the <code>QueueName</code> parameter. be aware of existing queue
 *
 * names> <ul> <li>
 *
 * If you provide the name of an existing queue along with the exact names and values of all the queue's attributes,
 * <code>CreateQueue</code> returns the queue URL for the existing
 *
 * queue> </li> <li>
 *
 * If the queue name, attribute names, or attribute values don't match an existing queue, <code>CreateQueue</code> returns
 * an
 *
 * error> </li> </ul>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;AttributeName.1=first</code>
 *
 * </p
 *
 * <code>&amp;AttributeName.2=second</code>
 *
 * </p <note>
 *
 * Cross-account permissions don't apply to this action. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
 * cross-account permissions to a role and a user name</a> in the <i>Amazon Simple Queue Service Developer
 */
CreateQueueResponse * SqsClient::createQueue(const CreateQueueRequest &request)
{
    return qobject_cast<CreateQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * DeleteMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified message from the specified queue. To select the message to delete, use the
 * <code>ReceiptHandle</code> of the message (<i>not</i> the <code>MessageId</code> which you receive when you send the
 * message). Amazon SQS can delete a message from a queue even if a visibility timeout setting causes the message to be
 * locked by another consumer. Amazon SQS automatically deletes messages left in a queue longer than the retention period
 * configured for the queue.
 *
 * </p <note>
 *
 * The <code>ReceiptHandle</code> is associated with a <i>specific instance</i> of receiving a message. If you receive a
 * message more than once, the <code>ReceiptHandle</code> is different each time you receive a message. When you use the
 * <code>DeleteMessage</code> action, you must provide the most recently received <code>ReceiptHandle</code> for the
 * message (otherwise, the request succeeds, but the message might not be
 *
 * deleted)>
 *
 * For standard queues, it is possible to receive a message even after you delete it. This might happen on rare occasions
 * if one of the servers which stores a copy of the message is unavailable when you send the request to delete the message.
 * The copy remains on the server and might be returned to you during a subsequent receive request. You should ensure that
 * your application is idempotent, so that receiving a message more than once does not cause
 */
DeleteMessageResponse * SqsClient::deleteMessage(const DeleteMessageRequest &request)
{
    return qobject_cast<DeleteMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * DeleteMessageBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes up to ten messages from the specified queue. This is a batch version of <code> <a>DeleteMessage</a>.</code> The
 * result of the action on each message is reported individually in the
 *
 * response> <b>
 *
 * Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch
 * errors even when the call returns an HTTP status code of
 *
 * <code>200</code>> </b>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;AttributeName.1=first</code>
 *
 * </p
 *
 * <code>&amp;AttributeName.2=second</code>
 */
DeleteMessageBatchResponse * SqsClient::deleteMessageBatch(const DeleteMessageBatchRequest &request)
{
    return qobject_cast<DeleteMessageBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * DeleteQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the queue specified by the <code>QueueUrl</code>, regardless of the queue's
 *
 * contents> <b>
 *
 * Be careful with the <code>DeleteQueue</code> action: When you delete a queue, any messages in the queue are no longer
 * available.
 *
 * </p </b>
 *
 * When you delete a queue, the deletion process takes up to 60 seconds. Requests you send involving that queue during the
 * 60 seconds might succeed. For example, a <code> <a>SendMessage</a> </code> request might succeed, but after 60 seconds
 * the queue and the message you sent no longer
 *
 * exist>
 *
 * When you delete a queue, you must wait at least 60 seconds before creating a queue with the same
 *
 * name> <note>
 *
 * Cross-account permissions don't apply to this action. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
 * cross-account permissions to a role and a user name</a> in the <i>Amazon Simple Queue Service Developer
 */
DeleteQueueResponse * SqsClient::deleteQueue(const DeleteQueueRequest &request)
{
    return qobject_cast<DeleteQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * GetQueueAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets attributes for the specified
 *
 * queue> <note>
 *
 * To determine whether a queue is <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>, you can
 * check whether <code>QueueName</code> ends with the <code>.fifo</code>
 */
GetQueueAttributesResponse * SqsClient::getQueueAttributes(const GetQueueAttributesRequest &request)
{
    return qobject_cast<GetQueueAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * GetQueueUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the URL of an existing Amazon SQS
 *
 * queue>
 *
 * To access a queue that belongs to another AWS account, use the <code>QueueOwnerAWSAccountId</code> parameter to specify
 * the account ID of the queue's owner. The queue's owner must grant you permission to access the queue. For more
 * information about shared queue access, see <code> <a>AddPermission</a> </code> or see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-writing-an-sqs-policy.html#write-messages-to-shared-queue">Allow
 * Developers to Write Messages to a Shared Queue</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.
 */
GetQueueUrlResponse * SqsClient::getQueueUrl(const GetQueueUrlRequest &request)
{
    return qobject_cast<GetQueueUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * ListDeadLetterSourceQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of your queues that have the <code>RedrivePolicy</code> queue attribute configured with a dead-letter
 *
 * queue>
 *
 * The <code>ListDeadLetterSourceQueues</code> methods supports pagination. Set parameter <code>MaxResults</code> in the
 * request to specify the maximum number of results to be returned in the response. If you do not set
 * <code>MaxResults</code>, the response includes a maximum of 1,000 results. If you set <code>MaxResults</code> and there
 * are additional results to display, the response includes a value for <code>NextToken</code>. Use <code>NextToken</code>
 * as a parameter in your next request to <code>ListDeadLetterSourceQueues</code> to receive the next page of results.
 *
 * </p
 *
 * For more information about using dead-letter queues, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
 * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service Developer
 */
ListDeadLetterSourceQueuesResponse * SqsClient::listDeadLetterSourceQueues(const ListDeadLetterSourceQueuesRequest &request)
{
    return qobject_cast<ListDeadLetterSourceQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * ListQueueTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all cost allocation tags added to the specified Amazon SQS queue. For an overview, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging Your
 * Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>> <note>
 *
 * Cross-account permissions don't apply to this action. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
 * cross-account permissions to a role and a user name</a> in the <i>Amazon Simple Queue Service Developer
 */
ListQueueTagsResponse * SqsClient::listQueueTags(const ListQueueTagsRequest &request)
{
    return qobject_cast<ListQueueTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * ListQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of your queues in the current region. The response includes a maximum of 1,000 results. If you specify a
 * value for the optional <code>QueueNamePrefix</code> parameter, only queues with a name that begins with the specified
 * value are
 *
 * returned>
 *
 * The <code>listQueues</code> methods supports pagination. Set parameter <code>MaxResults</code> in the request to specify
 * the maximum number of results to be returned in the response. If you do not set <code>MaxResults</code>, the response
 * includes a maximum of 1,000 results. If you set <code>MaxResults</code> and there are additional results to display, the
 * response includes a value for <code>NextToken</code>. Use <code>NextToken</code> as a parameter in your next request to
 * <code>listQueues</code> to receive the next page of results.
 *
 * </p <note>
 *
 * Cross-account permissions don't apply to this action. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
 * cross-account permissions to a role and a user name</a> in the <i>Amazon Simple Queue Service Developer
 */
ListQueuesResponse * SqsClient::listQueues(const ListQueuesRequest &request)
{
    return qobject_cast<ListQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * PurgeQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the messages in a queue specified by the <code>QueueURL</code>
 *
 * parameter> <b>
 *
 * When you use the <code>PurgeQueue</code> action, you can't retrieve any messages deleted from a
 *
 * queue>
 *
 * The message deletion process takes up to 60 seconds. We recommend waiting for 60 seconds regardless of your queue's
 * size.
 *
 * </p </b>
 *
 * Messages sent to the queue <i>before</i> you call <code>PurgeQueue</code> might be received but are deleted within the
 * next
 *
 * minute>
 *
 * Messages sent to the queue <i>after</i> you call <code>PurgeQueue</code> might be deleted while the queue is being
 */
PurgeQueueResponse * SqsClient::purgeQueue(const PurgeQueueRequest &request)
{
    return qobject_cast<PurgeQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * ReceiveMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves one or more messages (up to 10), from the specified queue. Using the <code>WaitTimeSeconds</code> parameter
 * enables long-poll support. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-long-polling.html">Amazon SQS Long
 * Polling</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.
 *
 * </p
 *
 * Short poll is the default behavior where a weighted random set of machines is sampled on a <code>ReceiveMessage</code>
 * call. Thus, only the messages on the sampled machines are returned. If the number of messages in the queue is small
 * (fewer than 1,000), you most likely get fewer messages than you requested per <code>ReceiveMessage</code> call. If the
 * number of messages in the queue is extremely small, you might not receive any messages in a particular
 * <code>ReceiveMessage</code> response. If this happens, repeat the request.
 *
 * </p
 *
 * For each message returned, the response includes the
 *
 * following> <ul> <li>
 *
 * The message
 *
 * body> </li> <li>
 *
 * An MD5 digest of the message body. For information about MD5, see <a
 *
 * href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>> </li> <li>
 *
 * The <code>MessageId</code> you received when you sent the message to the
 *
 * queue> </li> <li>
 *
 * The receipt
 *
 * handle> </li> <li>
 *
 * The message
 *
 * attributes> </li> <li>
 *
 * An MD5 digest of the message
 *
 * attributes> </li> </ul>
 *
 * The receipt handle is the identifier you must provide when deleting the message. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-message-identifiers.html">Queue
 * and Message Identifiers</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * You can provide the <code>VisibilityTimeout</code> parameter in your request. The parameter is applied to the messages
 * that Amazon SQS returns in the response. If you don't include the parameter, the overall visibility timeout for the
 * queue is used for the returned messages. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
 * Timeout</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * A message that isn't deleted or a message whose visibility isn't extended before the visibility timeout expires counts
 * as a failed receive. Depending on the configuration of the queue, the message might be sent to the dead-letter
 *
 * queue> <note>
 *
 * In the future, new attributes might be added. If you write code that calls this action, we recommend that you structure
 * your code so that it can handle new attributes
 */
ReceiveMessageResponse * SqsClient::receiveMessage(const ReceiveMessageRequest &request)
{
    return qobject_cast<ReceiveMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * RemovePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes any permissions in the queue policy that matches the specified <code>Label</code>
 *
 * parameter> <note> <ul> <li>
 *
 * Only the owner of a queue can remove permissions from
 *
 * it> </li> <li>
 *
 * Cross-account permissions don't apply to this action. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
 * cross-account permissions to a role and a user name</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>> </li> <li>
 *
 * To remove the ability to change queue permissions, you must deny permission to the <code>AddPermission</code>,
 * <code>RemovePermission</code>, and <code>SetQueueAttributes</code> actions in your IAM
 */
RemovePermissionResponse * SqsClient::removePermission(const RemovePermissionRequest &request)
{
    return qobject_cast<RemovePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * SendMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delivers a message to the specified
 *
 * queue> <b>
 *
 * A message can include only XML, JSON, and unformatted text. The following Unicode characters are
 *
 * allowed>
 *
 * <code>#x9</code> | <code>#xA</code> | <code>#xD</code> | <code>#x20</code> to <code>#xD7FF</code> | <code>#xE000</code>
 * to <code>#xFFFD</code> | <code>#x10000</code> to <code>#x10FFFF</code>
 *
 * </p
 *
 * Any characters not included in this list will be rejected. For more information, see the <a
 * href="http://www.w3.org/TR/REC-xml/#charsets">W3C specification for
 */
SendMessageResponse * SqsClient::sendMessage(const SendMessageRequest &request)
{
    return qobject_cast<SendMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * SendMessageBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delivers up to ten messages to the specified queue. This is a batch version of <code> <a>SendMessage</a>.</code> For a
 * FIFO queue, multiple messages within a single batch are enqueued in the order they are
 *
 * sent>
 *
 * The result of sending each message is reported individually in the response. Because the batch request can result in a
 * combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP
 * status code of
 *
 * <code>200</code>>
 *
 * The maximum allowed individual message size and the maximum total payload size (the sum of the individual lengths of all
 * of the batched messages) are both 256 KB (262,144
 *
 * bytes)> <b>
 *
 * A message can include only XML, JSON, and unformatted text. The following Unicode characters are
 *
 * allowed>
 *
 * <code>#x9</code> | <code>#xA</code> | <code>#xD</code> | <code>#x20</code> to <code>#xD7FF</code> | <code>#xE000</code>
 * to <code>#xFFFD</code> | <code>#x10000</code> to <code>#x10FFFF</code>
 *
 * </p
 *
 * Any characters not included in this list will be rejected. For more information, see the <a
 * href="http://www.w3.org/TR/REC-xml/#charsets">W3C specification for
 *
 * characters</a>> </b>
 *
 * If you don't specify the <code>DelaySeconds</code> parameter for an entry, Amazon SQS uses the default value for the
 *
 * queue>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;AttributeName.1=first</code>
 *
 * </p
 *
 * <code>&amp;AttributeName.2=second</code>
 */
SendMessageBatchResponse * SqsClient::sendMessageBatch(const SendMessageBatchRequest &request)
{
    return qobject_cast<SendMessageBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * SetQueueAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the value of one or more queue attributes. When you change a queue's attributes, the change can take up to 60
 * seconds for most of the attributes to propagate throughout the Amazon SQS system. Changes made to the
 * <code>MessageRetentionPeriod</code> attribute can take up to 15
 *
 * minutes> <note> <ul> <li>
 *
 * In the future, new attributes might be added. If you write code that calls this action, we recommend that you structure
 * your code so that it can handle new attributes
 *
 * gracefully> </li> <li>
 *
 * Cross-account permissions don't apply to this action. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
 * cross-account permissions to a role and a user name</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>> </li> <li>
 *
 * To remove the ability to change queue permissions, you must deny permission to the <code>AddPermission</code>,
 * <code>RemovePermission</code>, and <code>SetQueueAttributes</code> actions in your IAM
 */
SetQueueAttributesResponse * SqsClient::setQueueAttributes(const SetQueueAttributesRequest &request)
{
    return qobject_cast<SetQueueAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * TagQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add cost allocation tags to the specified Amazon SQS queue. For an overview, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging Your
 * Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * When you use queue tags, keep the following guidelines in
 *
 * mind> <ul> <li>
 *
 * Adding more than 50 tags to a queue isn't
 *
 * recommended> </li> <li>
 *
 * Tags don't have any semantic meaning. Amazon SQS interprets tags as character
 *
 * strings> </li> <li>
 *
 * Tags are
 *
 * case-sensitive> </li> <li>
 *
 * A new tag with a key identical to that of an existing tag overwrites the existing
 *
 * tag> </li> </ul>
 *
 * For a full list of tag restrictions, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-limits.html#limits-queues">Limits
 * Related to Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>> <note>
 *
 * Cross-account permissions don't apply to this action. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
 * cross-account permissions to a role and a user name</a> in the <i>Amazon Simple Queue Service Developer
 */
TagQueueResponse * SqsClient::tagQueue(const TagQueueRequest &request)
{
    return qobject_cast<TagQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the SqsClient service, and returns a pointer to an
 * UntagQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove cost allocation tags from the specified Amazon SQS queue. For an overview, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging Your
 * Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>> <note>
 *
 * Cross-account permissions don't apply to this action. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
 * cross-account permissions to a role and a user name</a> in the <i>Amazon Simple Queue Service Developer
 */
UntagQueueResponse * SqsClient::untagQueue(const UntagQueueRequest &request)
{
    return qobject_cast<UntagQueueResponse *>(send(request));
}

/*!
 * \class QtAws::SQS::SqsClientPrivate
 * \brief The SqsClientPrivate class provides private implementation for SqsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSQS
 */

/*!
 * Constructs a SqsClientPrivate object with public implementation \a q.
 */
SqsClientPrivate::SqsClientPrivate(SqsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SQS
} // namespace QtAws
