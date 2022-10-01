// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqslistdeadlettersourcequeuesresponse.h"
#include "sqslistdeadlettersourcequeuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsListDeadLetterSourceQueuesResponse
 *
 * @brief  Handles SQS ListDeadLetterSourceQueues responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ListDeadLetterSourceQueues.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsListDeadLetterSourceQueuesResponse::SqsListDeadLetterSourceQueuesResponse(const SqsListDeadLetterSourceQueuesRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsListDeadLetterSourceQueuesResponsePrivate(this), parent)
{
    setRequest(new SqsListDeadLetterSourceQueuesRequest(request));
    setReply(reply);
}

bool SqsListDeadLetterSourceQueuesResponse::isValid() const
{
    //Q_D(const SqsListDeadLetterSourceQueuesResponse);
    /// @todo
    return ((false) && (SqsResponse::isValid()));
}

const SqsListDeadLetterSourceQueuesRequest * SqsListDeadLetterSourceQueuesResponse::request() const
{
    Q_D(const SqsListDeadLetterSourceQueuesResponse);
    return static_cast<const SqsListDeadLetterSourceQueuesRequest *>(d->request);
}

/**
 * @brief  Parse an SQS ListDeadLetterSourceQueues response.
 *
 * This implementation parses SQS ListDeadLetterSourceQueuesResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <ListDeadLetterSourceQueuesResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </ListDeadLetterSourceQueuesResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsListDeadLetterSourceQueuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsListDeadLetterSourceQueuesResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        /// @todo
        if (xml.name() == QLatin1String("ListDeadLetterSourceQueuesResponse")) {
            d->parseListDeadLetterSourceQueuesResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsListDeadLetterSourceQueuesResponsePrivate
 *
 * @brief  Private implementation for SqsListDeadLetterSourceQueuesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsListDeadLetterSourceQueuesResponse instance.
 */
SqsListDeadLetterSourceQueuesResponsePrivate::SqsListDeadLetterSourceQueuesResponsePrivate(
    SqsListDeadLetterSourceQueuesResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS ListDeadLetterSourceQueuesResponse element.
 *
 * This implementation parses SQS ListDeadLetterSourceQueuesResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <ListDeadLetterSourceQueuesResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </ListDeadLetterSourceQueuesResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsListDeadLetterSourceQueuesResponsePrivate::parseListDeadLetterSourceQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeadLetterSourceQueuesResponse"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ResponseMetadata")) {
            parseResponseMetadata(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

} // namespace SqsOld
} // namespace QtAws
