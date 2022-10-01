// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsdeletemessagebatchresponse.h"
#include "sqsdeletemessagebatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsDeleteMessageBatchResponse
 *
 * @brief  Handles SQS DeleteMessageBatch responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_DeleteMessageBatch.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsDeleteMessageBatchResponse::SqsDeleteMessageBatchResponse(const SqsDeleteMessageBatchRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsDeleteMessageBatchResponsePrivate(this), parent)
{
    setRequest(new SqsDeleteMessageBatchRequest(request));
    setReply(reply);
}

bool SqsDeleteMessageBatchResponse::isValid() const
{
    //Q_D(const SqsDeleteMessageBatchResponse);
    /// @todo
    return ((false) && (SqsResponse::isValid()));
}

const SqsDeleteMessageBatchRequest * SqsDeleteMessageBatchResponse::request() const
{
    Q_D(const SqsDeleteMessageBatchResponse);
    return static_cast<const SqsDeleteMessageBatchRequest *>(d->request);
}

/**
 * @brief  Parse an SQS DeleteMessageBatch response.
 *
 * This implementation parses SQS DeleteMessageBatchResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <DeleteMessageBatchResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </DeleteMessageBatchResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsDeleteMessageBatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsDeleteMessageBatchResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        /// @todo
        if (xml.name() == QLatin1String("DeleteMessageBatchResponse")) {
            d->parseDeleteMessageBatchResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsDeleteMessageBatchResponsePrivate
 *
 * @brief  Private implementation for SqsDeleteMessageBatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteMessageBatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsDeleteMessageBatchResponse instance.
 */
SqsDeleteMessageBatchResponsePrivate::SqsDeleteMessageBatchResponsePrivate(
    SqsDeleteMessageBatchResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS DeleteMessageBatchResponse element.
 *
 * This implementation parses SQS DeleteMessageBatchResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <DeleteMessageBatchResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </DeleteMessageBatchResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsDeleteMessageBatchResponsePrivate::parseDeleteMessageBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMessageBatchResponse"));
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
