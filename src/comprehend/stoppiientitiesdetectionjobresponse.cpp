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

#include "stoppiientitiesdetectionjobresponse.h"
#include "stoppiientitiesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopPiiEntitiesDetectionJobResponse
 * \brief The StopPiiEntitiesDetectionJobResponse class provides an interace for Comprehend StopPiiEntitiesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopPiiEntitiesDetectionJob
 */

/*!
 * Constructs a StopPiiEntitiesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopPiiEntitiesDetectionJobResponse::StopPiiEntitiesDetectionJobResponse(
        const StopPiiEntitiesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopPiiEntitiesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopPiiEntitiesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopPiiEntitiesDetectionJobRequest * StopPiiEntitiesDetectionJobResponse::request() const
{
    return static_cast<const StopPiiEntitiesDetectionJobRequest *>(ComprehendResponse::request());
}

/*!
 * \reimp
 * Parses a successful Comprehend StopPiiEntitiesDetectionJob \a response.
 */
void StopPiiEntitiesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopPiiEntitiesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopPiiEntitiesDetectionJobResponsePrivate
 * \brief The StopPiiEntitiesDetectionJobResponsePrivate class provides private implementation for StopPiiEntitiesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopPiiEntitiesDetectionJobResponsePrivate object with public implementation \a q.
 */
StopPiiEntitiesDetectionJobResponsePrivate::StopPiiEntitiesDetectionJobResponsePrivate(
    StopPiiEntitiesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopPiiEntitiesDetectionJob response element from \a xml.
 */
void StopPiiEntitiesDetectionJobResponsePrivate::parseStopPiiEntitiesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopPiiEntitiesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
