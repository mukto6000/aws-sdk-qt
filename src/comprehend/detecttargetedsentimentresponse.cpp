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

#include "detecttargetedsentimentresponse.h"
#include "detecttargetedsentimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectTargetedSentimentResponse
 * \brief The DetectTargetedSentimentResponse class provides an interace for Comprehend DetectTargetedSentiment responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectTargetedSentiment
 */

/*!
 * Constructs a DetectTargetedSentimentResponse object for \a reply to \a request, with parent \a parent.
 */
DetectTargetedSentimentResponse::DetectTargetedSentimentResponse(
        const DetectTargetedSentimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectTargetedSentimentResponsePrivate(this), parent)
{
    setRequest(new DetectTargetedSentimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectTargetedSentimentRequest * DetectTargetedSentimentResponse::request() const
{
    Q_D(const DetectTargetedSentimentResponse);
    return static_cast<const DetectTargetedSentimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DetectTargetedSentiment \a response.
 */
void DetectTargetedSentimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectTargetedSentimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DetectTargetedSentimentResponsePrivate
 * \brief The DetectTargetedSentimentResponsePrivate class provides private implementation for DetectTargetedSentimentResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectTargetedSentimentResponsePrivate object with public implementation \a q.
 */
DetectTargetedSentimentResponsePrivate::DetectTargetedSentimentResponsePrivate(
    DetectTargetedSentimentResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DetectTargetedSentiment response element from \a xml.
 */
void DetectTargetedSentimentResponsePrivate::parseDetectTargetedSentimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectTargetedSentimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
