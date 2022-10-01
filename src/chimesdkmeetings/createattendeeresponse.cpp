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

#include "createattendeeresponse.h"
#include "createattendeeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::CreateAttendeeResponse
 * \brief The CreateAttendeeResponse class provides an interace for ChimeSdkMeetings CreateAttendee responses.
 *
 * \inmodule QtAwsChimeSdkMeetings
 *
 *  The Amazon Chime SDK meetings APIs in this section allow software developers to create Amazon Chime SDK meetings, set
 *  the AWS Regions for meetings, create and manage users, and send and receive meeting notifications. For more information
 *  about the meeting APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMeetingsClient::createAttendee
 */

/*!
 * Constructs a CreateAttendeeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAttendeeResponse::CreateAttendeeResponse(
        const CreateAttendeeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMeetingsResponse(new CreateAttendeeResponsePrivate(this), parent)
{
    setRequest(new CreateAttendeeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAttendeeRequest * CreateAttendeeResponse::request() const
{
    Q_D(const CreateAttendeeResponse);
    return static_cast<const CreateAttendeeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMeetings CreateAttendee \a response.
 */
void CreateAttendeeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAttendeeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMeetings::CreateAttendeeResponsePrivate
 * \brief The CreateAttendeeResponsePrivate class provides private implementation for CreateAttendeeResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a CreateAttendeeResponsePrivate object with public implementation \a q.
 */
CreateAttendeeResponsePrivate::CreateAttendeeResponsePrivate(
    CreateAttendeeResponse * const q) : ChimeSdkMeetingsResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMeetings CreateAttendee response element from \a xml.
 */
void CreateAttendeeResponsePrivate::parseCreateAttendeeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAttendeeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMeetings
} // namespace QtAws
