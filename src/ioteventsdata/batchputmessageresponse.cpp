// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchputmessageresponse.h"
#include "batchputmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchPutMessageResponse
 * \brief The BatchPutMessageResponse class provides an interace for IoTEventsData BatchPutMessage responses.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when such
 *  events occur. You can use IoT Events Data API commands to send inputs to detectors, list detectors, and view or update a
 *  detector's
 * 
 *  status>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/iotevents/latest/developerguide/what-is-iotevents.html">What is IoT Events?</a> in the
 *  <i>IoT Events Developer
 *
 * \sa IoTEventsDataClient::batchPutMessage
 */

/*!
 * Constructs a BatchPutMessageResponse object for \a reply to \a request, with parent \a parent.
 */
BatchPutMessageResponse::BatchPutMessageResponse(
        const BatchPutMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new BatchPutMessageResponsePrivate(this), parent)
{
    setRequest(new BatchPutMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchPutMessageRequest * BatchPutMessageResponse::request() const
{
    Q_D(const BatchPutMessageResponse);
    return static_cast<const BatchPutMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData BatchPutMessage \a response.
 */
void BatchPutMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchPutMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::BatchPutMessageResponsePrivate
 * \brief The BatchPutMessageResponsePrivate class provides private implementation for BatchPutMessageResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchPutMessageResponsePrivate object with public implementation \a q.
 */
BatchPutMessageResponsePrivate::BatchPutMessageResponsePrivate(
    BatchPutMessageResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData BatchPutMessage response element from \a xml.
 */
void BatchPutMessageResponsePrivate::parseBatchPutMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
