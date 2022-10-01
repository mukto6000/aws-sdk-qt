// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateattendeecapabilitiesresponse.h"
#include "updateattendeecapabilitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::UpdateAttendeeCapabilitiesResponse
 * \brief The UpdateAttendeeCapabilitiesResponse class provides an interace for ChimeSdkMeetings UpdateAttendeeCapabilities responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::updateAttendeeCapabilities
 */

/*!
 * Constructs a UpdateAttendeeCapabilitiesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAttendeeCapabilitiesResponse::UpdateAttendeeCapabilitiesResponse(
        const UpdateAttendeeCapabilitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new UpdateAttendeeCapabilitiesResponsePrivate(this), parent)
{
    setRequest(new UpdateAttendeeCapabilitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAttendeeCapabilitiesRequest * UpdateAttendeeCapabilitiesResponse::request() const
{
    Q_D(const UpdateAttendeeCapabilitiesResponse);
    return static_cast<const UpdateAttendeeCapabilitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings UpdateAttendeeCapabilities \a response.
 */
void UpdateAttendeeCapabilitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAttendeeCapabilitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::UpdateAttendeeCapabilitiesResponsePrivate
 * \brief The UpdateAttendeeCapabilitiesResponsePrivate class provides private implementation for UpdateAttendeeCapabilitiesResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a UpdateAttendeeCapabilitiesResponsePrivate object with public implementation \a q.
 */
UpdateAttendeeCapabilitiesResponsePrivate::UpdateAttendeeCapabilitiesResponsePrivate(
    UpdateAttendeeCapabilitiesResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings UpdateAttendeeCapabilities response element from \a xml.
 */
void UpdateAttendeeCapabilitiesResponsePrivate::parseUpdateAttendeeCapabilitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAttendeeCapabilitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
