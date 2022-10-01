// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdetectorsresponse.h"
#include "listdetectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::ListDetectorsResponse
 * \brief The ListDetectorsResponse class provides an interace for IoTEventsData ListDetectors responses.
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
 * \sa IoTEventsDataClient::listDetectors
 */

/*!
 * Constructs a ListDetectorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDetectorsResponse::ListDetectorsResponse(
        const ListDetectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsDataResponse(new ListDetectorsResponsePrivate(this), parent)
{
    setRequest(new ListDetectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDetectorsRequest * ListDetectorsResponse::request() const
{
    Q_D(const ListDetectorsResponse);
    return static_cast<const ListDetectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEventsData ListDetectors \a response.
 */
void ListDetectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDetectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEventsData::ListDetectorsResponsePrivate
 * \brief The ListDetectorsResponsePrivate class provides private implementation for ListDetectorsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a ListDetectorsResponsePrivate object with public implementation \a q.
 */
ListDetectorsResponsePrivate::ListDetectorsResponsePrivate(
    ListDetectorsResponse * const q) : IoTEventsDataResponsePrivate(q)
{

}

/*!
 * Parses a IoTEventsData ListDetectors response element from \a xml.
 */
void ListDetectorsResponsePrivate::parseListDetectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDetectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEventsData
} // namespace QtAws
