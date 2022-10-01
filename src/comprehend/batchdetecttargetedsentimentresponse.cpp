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

#include "batchdetecttargetedsentimentresponse.h"
#include "batchdetecttargetedsentimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectTargetedSentimentResponse
 * \brief The BatchDetectTargetedSentimentResponse class provides an interace for Comprehend BatchDetectTargetedSentiment responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectTargetedSentiment
 */

/*!
 * Constructs a BatchDetectTargetedSentimentResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDetectTargetedSentimentResponse::BatchDetectTargetedSentimentResponse(
        const BatchDetectTargetedSentimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectTargetedSentimentResponsePrivate(this), parent)
{
    setRequest(new BatchDetectTargetedSentimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDetectTargetedSentimentRequest * BatchDetectTargetedSentimentResponse::request() const
{
    Q_D(const BatchDetectTargetedSentimentResponse);
    return static_cast<const BatchDetectTargetedSentimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend BatchDetectTargetedSentiment \a response.
 */
void BatchDetectTargetedSentimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDetectTargetedSentimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::BatchDetectTargetedSentimentResponsePrivate
 * \brief The BatchDetectTargetedSentimentResponsePrivate class provides private implementation for BatchDetectTargetedSentimentResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectTargetedSentimentResponsePrivate object with public implementation \a q.
 */
BatchDetectTargetedSentimentResponsePrivate::BatchDetectTargetedSentimentResponsePrivate(
    BatchDetectTargetedSentimentResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend BatchDetectTargetedSentiment response element from \a xml.
 */
void BatchDetectTargetedSentimentResponsePrivate::parseBatchDetectTargetedSentimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectTargetedSentimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
