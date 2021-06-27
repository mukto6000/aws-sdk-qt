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

#include "startdetectormodelanalysisresponse.h"
#include "startdetectormodelanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::StartDetectorModelAnalysisResponse
 * \brief The StartDetectorModelAnalysisResponse class provides an interace for IoTEvents StartDetectorModelAnalysis responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::startDetectorModelAnalysis
 */

/*!
 * Constructs a StartDetectorModelAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
StartDetectorModelAnalysisResponse::StartDetectorModelAnalysisResponse(
        const StartDetectorModelAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new StartDetectorModelAnalysisResponsePrivate(this), parent)
{
    setRequest(new StartDetectorModelAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDetectorModelAnalysisRequest * StartDetectorModelAnalysisResponse::request() const
{
    return static_cast<const StartDetectorModelAnalysisRequest *>(IoTEventsResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTEvents StartDetectorModelAnalysis \a response.
 */
void StartDetectorModelAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDetectorModelAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::StartDetectorModelAnalysisResponsePrivate
 * \brief The StartDetectorModelAnalysisResponsePrivate class provides private implementation for StartDetectorModelAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a StartDetectorModelAnalysisResponsePrivate object with public implementation \a q.
 */
StartDetectorModelAnalysisResponsePrivate::StartDetectorModelAnalysisResponsePrivate(
    StartDetectorModelAnalysisResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents StartDetectorModelAnalysis response element from \a xml.
 */
void StartDetectorModelAnalysisResponsePrivate::parseStartDetectorModelAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDetectorModelAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
