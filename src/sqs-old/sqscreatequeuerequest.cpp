// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqscreatequeuerequest.h"
#include "sqscreatequeuerequest_p.h"
#include "sqscreatequeueresponse.h"

#define ATTRIBUTE_ENTRY_N                    QLatin1String("Attribute.%1.%2")
#define DELAY_SECONDS                        QLatin1String("DelaySeconds")
#define MAXIMUM_MESSAGE_SIZE                 QLatin1String("MaximumMessageSize")
#define MESSAGE_RETENTION_PERIOD             QLatin1String("MessageRetentionPeriod")
#define QUEUE_NAME                           QLatin1String("QueueName")
#define POLICY                               QLatin1String("Policy")
#define RECEIVE_MESSAGE_WAIT_TIMEOUT_SECONDS QLatin1String("ReceiveMessageWaitTimeSeconds")
#define VISIBILITY_TIMEOUT                   QLatin1String("VisibilityTimeout")

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsCreateQueueRequest
 *
 * @brief  Implements SQS CreateQueue requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_CreateQueue.html
 */

/**
 * @brief  Constructs a new SqsCreateQueueRequest object.
 *
 * @param  queueName  Name of the queue to be created.
 */
SqsCreateQueueRequest::SqsCreateQueueRequest(const QString &queueName)
    : SqsRequest(new SqsCreateQueueRequestPrivate(SqsRequest::CreateQueueAction, this))
{
    setQueueName(queueName);
}

/**
 * @brief  Constructs a new SqsCreateQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsCreateQueueRequest::SqsCreateQueueRequest(const SqsCreateQueueRequest &other)
    : SqsRequest(new SqsCreateQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs an invalid SqsCreateQueueRequest object.
 *
 * The constructed object will not be considered valid (ie isValid will return
 * false) untill setQueueName is invoked with a non-empty queue name.
 */
SqsCreateQueueRequest::SqsCreateQueueRequest()
    : SqsRequest(new SqsCreateQueueRequestPrivate(SqsRequest::CreateQueueAction, this))
{

}

/**
 * @brief  Is this request valid?
 *
 * This implementation simply checks that this request has a valid queue name,
 * as defined by SqsRequest::isValidQueueName.
 *
 * @returns  \c true if this request is considered valid, \c false other.
 *
 * @see  SqsRequest::isValidQueueName
 */
bool SqsCreateQueueRequest::isValid() const
{
    return isValidQueueName(queueName());
}

/**
 * @brief  Get the value of an attribute to be set on the created queue.
 *
 * The \a name parameter should be one of the attributes defined by the SQS
 * documentation.  The explicit attribute accessors function (such as
 * delaySecond, maximumMessageSize, etc) should be used instead of directly
 * accessing attributes via this function.  However, this function may be used
 * if Amazon adds support for new attributes that are not yet covered by this
 * library explicitly.
 *
 * @param  name          Name of the queue attribute to get the value of.
 * @param  defaultValue  Value to return if \a name is not found.
 *
 * @return Value of the \a name attribute, or \a defaultValue if not found.
 */
QVariant SqsCreateQueueRequest::attribute(const QString &name, const QVariant &defaultValue) const
{
    return attributes().value(name, defaultValue);
}

/**
 * @brief  Get a map of all attributes set to be included with this request.
 *
 * @return A map of all attributes set to be included with this request.
 */
QVariantMap SqsCreateQueueRequest::attributes() const
{
    return parameter(ATTRIBUTE_ENTRY_N).toMap();
}

/**
 * @brief  Get the value of DelaySeconds queue attribute.
 *
 * @return The value of DelaySeconds queue attribute, or -1 if not set.
 */
int SqsCreateQueueRequest::delaySeconds() const
{
    return attribute(DELAY_SECONDS, -1).toInt();
}

/**
 * @brief  Get the value of MaximumMessageSize queue attribute.
 *
 * @return The value of MaximumMessageSize queue attribute, or -1 if not set.
 */
int SqsCreateQueueRequest::maximumMessageSize() const
{
    return attribute(MAXIMUM_MESSAGE_SIZE, -1).toInt();
}

/**
 * @brief  Get the value of MessageRetentionPeriod queue attribute.
 *
 * @return The value of MessageRetentionPeriod queue attribute, or -1 if not set.
 */
int SqsCreateQueueRequest::messageRetentionPeriod() const
{
    return attribute(MESSAGE_RETENTION_PERIOD, -1).toInt();
}

/**
 * @brief  Get the value of Policy queue attribute.
 *
 * @return The value of Policy queue attribute, or a null QString if not set.
 */
QString SqsCreateQueueRequest::policy() const
{
    return attribute(POLICY).toString();
}

/**
 * @brief  Get the name of the queue to be created.
 *
 * @return The name of the queue to be created, or a null QString if not yet set.
 */
QString SqsCreateQueueRequest::queueName() const
{
    return parameter(QUEUE_NAME).toString();
}

/**
 * @brief  Get the value of the ReceiveMessageWaitTimeoutSeconds queue attribute.
 *
 * @return The value of the ReceiveMessageWaitTimeoutSeconds queue attribute, or -1
 *         if not set.
 */
int SqsCreateQueueRequest::receiveMessageWaitTimeSeconds() const
{
    return attribute(RECEIVE_MESSAGE_WAIT_TIMEOUT_SECONDS, -1).toInt();
}

/**
 * @brief  Get the value of the VisibilityTimeout queue attribute.
 *
 * @return The value of the VisibilityTimeout queue attribute, or -1 if not set.
 */
int SqsCreateQueueRequest::visibilityTimeout() const
{
    return attribute(VISIBILITY_TIMEOUT, -1).toInt();
}

/**
 * @brief  Set the value of an attribute to be include in the create queue request.
 *
 * The \a name parameter should be one of the attributes defined by the SQS
 * documentation.  The explicit attribute setter functions (such as delaySecond,
 * maximumMessageSize, etc) should be used instead of directly setting
 * attributes via this function.  However, this function may be used if Amazon
 * adds support for new attributes that are not yet covered by this library
 * explicitly.
 *
 * @param  name   Name of the queue attribute to set the value of.
 * @param  value  Value to set for the \a name attribute.
 *
 * @note  Attribues can be removed by setting \a value to a null QVariant.
 */
void SqsCreateQueueRequest::setAttribute(const QString &name, const QVariant &value)
{
    QVariantMap attributes = this->attributes();
    if (value.isNull()) {
        attributes.remove(name);
    } else {
        attributes.insert(name, value);
    }
    setAttributes(attributes);
}

/**
 * @brief  Set the attributes to be included in the create queue request.
 *
 * The given \a attributes will entirely replace any existing attibutes map.
 *
 * @param  attributes  Map of all attributes to be includes with the request.
 */
void SqsCreateQueueRequest::setAttributes(const QVariantMap &attributes)
{
    setParameter(ATTRIBUTE_ENTRY_N, attributes);
}

/**
 * @brief  Set the value of DelaySeconds queue attribute.
 *
 * If \a delay is negative, then any existing DelaySeconds attribute will be
 * cleared instead.
 *
 * @param  delay  Value to set for the DelaySeconds attribute.
 */
void SqsCreateQueueRequest::setDelaySeconds(int delay)
{
    setAttribute(DELAY_SECONDS, (delay < 0) ? QVariant() : QVariant(delay));
}

/**
 * @brief  Set the value of MaximumMessageSize queue attribute.
 *
 * If \a size is negative, then any existing MaximumMessageSize attribute will
 * be cleared instead.
 *
 * @param  size  Value to set for the MaximumMessageSize attribute.
 */
void SqsCreateQueueRequest::setMaximumMessageSize(int size)
{
    setAttribute(MAXIMUM_MESSAGE_SIZE, (size < 0) ? QVariant() : QVariant(size));
}

/**
 * @brief  Set the value of MessageRetentionPeriod queue attribute.
 *
 * If \a period is negative, then any existing MessageRetentionPeriod attribute
 * will be cleared instead.
 *
 * @param  period  Value to set for the MessageRetentionPeriod attribute.
 */
void SqsCreateQueueRequest::setMessageRetentionPeriod(int period)
{
    setAttribute(MESSAGE_RETENTION_PERIOD, (period < 0) ? QVariant() : QVariant(period));
}

/**
 * @brief  Set the value of Policy queue attribute.
 *
 * If \a policy is a null QString, then any existing Policy attribute will be
 * cleared instead.
 *
 * @param  policy  Value to set for the Policy attribute.
 */
void SqsCreateQueueRequest::setPolicy(const QString &policy)
{
    setAttribute(POLICY, (policy.isNull()) ? QVariant() : QVariant(policy));
}

/**
 * @brief  Set the name of the queue to be created.
 *
 * @param  queueName  Name of the queue to be created.
 */
void SqsCreateQueueRequest::setQueueName(const QString &queueName)
{
    setParameter(QUEUE_NAME, queueName);
}

/**
 * @brief  Set the value of ReceiveMessageWaitTimeoutSeconds queue attribute.
 *
 * If \a time is negative, then any existing ReceiveMessageWaitTimeoutSeconds
 * attribute will be cleared instead.
 *
 * @param  time  Value to set for the ReceiveMessageWaitTimeoutSeconds attribute.
 */
void SqsCreateQueueRequest::setReceiveMessageWaitTimeSeconds(int time)
{
    setAttribute(RECEIVE_MESSAGE_WAIT_TIMEOUT_SECONDS, (time < 0) ? QVariant() : QVariant(time));
}

/**
 * @brief  Set the value of VisibilityTimeout queue attribute.
 *
 * If \a timeout is negative, then any existing VisibilityTimeout attribute will
 * be cleared instead
 *
 * @param  timeout  Value to set for the VisibilityTimeout attribute.
 */
void SqsCreateQueueRequest::setVisibilityTimeout(int timeout)
{
    setAttribute(VISIBILITY_TIMEOUT, (timeout < 0) ? QVariant() : QVariant(timeout));
}

/**
 * @brief  Construct an SqsCreateQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsCreateQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsCreateQueueRequest::response(QNetworkReply * const reply) const
{
    return new SqsCreateQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsCreateQueueRequestPrivate
 *
 * @brief  Private implementation for SqsCreateQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsCreateQueueResponsePrivate object.
 *
 * @param  action  SQS action being perfomed.
 * @param  q       Pointer to this object's public SqsCreateQueueRequest instance.
 */
SqsCreateQueueRequestPrivate::SqsCreateQueueRequestPrivate(
    const SqsRequest::Action action, SqsCreateQueueRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsCreateQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsCreateQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsCreateQueueRequest instance.
 */
SqsCreateQueueRequestPrivate::SqsCreateQueueRequestPrivate(
    const SqsCreateQueueRequestPrivate &other, SqsCreateQueueRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
