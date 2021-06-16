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

#include "detectmoderationlabelsresponse.h"
#include "detectmoderationlabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectModerationLabelsResponse
 * \brief The DetectModerationLabelsResponse class provides an interace for Rekognition DetectModerationLabels responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectModerationLabels
 */

/*!
 * Constructs a DetectModerationLabelsResponse object for \a reply to \a request, with parent \a parent.
 */
DetectModerationLabelsResponse::DetectModerationLabelsResponse(
        const DetectModerationLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DetectModerationLabelsResponsePrivate(this), parent)
{
    setRequest(new DetectModerationLabelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectModerationLabelsRequest * DetectModerationLabelsResponse::request() const
{
    Q_D(const DetectModerationLabelsResponse);
    return static_cast<const DetectModerationLabelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition DetectModerationLabels \a response.
 */
void DetectModerationLabelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectModerationLabelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DetectModerationLabelsResponsePrivate
 * \brief The DetectModerationLabelsResponsePrivate class provides private implementation for DetectModerationLabelsResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectModerationLabelsResponsePrivate object with public implementation \a q.
 */
DetectModerationLabelsResponsePrivate::DetectModerationLabelsResponsePrivate(
    DetectModerationLabelsResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DetectModerationLabels response element from \a xml.
 */
void DetectModerationLabelsResponsePrivate::parseDetectModerationLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectModerationLabelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
