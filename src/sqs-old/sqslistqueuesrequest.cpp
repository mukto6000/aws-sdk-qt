// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqslistqueuesrequest.h"
#include "sqslistqueuesrequest_p.h"
#include "sqslistqueuesresponse.h"
#include "sqsrequest_p.h"

#define QUEUE_NAME_PREFIX QLatin1String("QueueNamePrefix")

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsListQueuesRequest
 *
 * @brief  Implements SQS ListQueues requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ListQueues.html
 */

/**
 * @brief  Constructs a new SqsListQueuesRequest.
 *
 * @param  queueNamePrefix  String to use for filtering the list results.
 */
SqsListQueuesRequest::SqsListQueuesRequest(
    const QString &queueNamePrefix)
    : SqsRequest(new SqsListQueuesRequestPrivate(SqsRequest::ListQueuesAction, this))
{
    setQueueNamePrefix(queueNamePrefix);
}

/**
 * @brief  Constructs a new SqsListQueuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsListQueuesRequest::SqsListQueuesRequest(const SqsListQueuesRequest &other)
    : SqsRequest(new SqsListQueuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsListQueuesRequest object.
 */
SqsListQueuesRequest::SqsListQueuesRequest()
    : SqsRequest(new SqsListQueuesRequestPrivate(SqsRequest::ListQueuesAction, this))
{

}

bool SqsListQueuesRequest::isValid() const
{
    return true;
}

/**
 * @brief  Get the string to use for filtering the list results.
 *
 * @return A string to use for filtering the list results.
 */
QString SqsListQueuesRequest::queueNamePrefix() const
{
    return parameter(QUEUE_NAME_PREFIX).toString();
}

/**
 * @brief  Set a string to use for filtering the list results.
 *
 * @param  queueNamePrefix  The string to use for filtering the list results.
 */
void SqsListQueuesRequest::setQueueNamePrefix(const QString &queueNamePrefix)
{
    setParameter(QUEUE_NAME_PREFIX, queueNamePrefix);
}

/**
 * @brief  Construct an SqsListQueuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsListQueuesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsListQueuesRequest::response(QNetworkReply * const reply) const
{
    return new SqsListQueuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsListQueuesRequestPrivate
 *
 * @brief  Private implementation for SqsListQueuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsListQueuesResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsListQueuesRequest instance.
 */
SqsListQueuesRequestPrivate::SqsListQueuesRequestPrivate(
    const SqsRequest::Action action, SqsListQueuesRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsListQueuesResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsListQueuesResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsListQueuesRequest instance.
 */
SqsListQueuesRequestPrivate::SqsListQueuesRequestPrivate(
    const SqsListQueuesRequestPrivate &other, SqsListQueuesRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
