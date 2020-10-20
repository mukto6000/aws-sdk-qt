/*
    Copyright 2013-2020 Paul Colby

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

#include "getremoteaccesssessionresponse.h"
#include "getremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetRemoteAccessSessionResponse
 * \brief The GetRemoteAccessSessionResponse class provides an interace for DeviceFarm GetRemoteAccessSession responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getRemoteAccessSession
 */

/*!
 * Constructs a GetRemoteAccessSessionResponse object for \a reply to \a request, with parent \a parent.
 */
GetRemoteAccessSessionResponse::GetRemoteAccessSessionResponse(
        const GetRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new GetRemoteAccessSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRemoteAccessSessionRequest * GetRemoteAccessSessionResponse::request() const
{
    Q_D(const GetRemoteAccessSessionResponse);
    return static_cast<const GetRemoteAccessSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetRemoteAccessSession \a response.
 */
void GetRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRemoteAccessSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetRemoteAccessSessionResponsePrivate
 * \brief The GetRemoteAccessSessionResponsePrivate class provides private implementation for GetRemoteAccessSessionResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetRemoteAccessSessionResponsePrivate object with public implementation \a q.
 */
GetRemoteAccessSessionResponsePrivate::GetRemoteAccessSessionResponsePrivate(
    GetRemoteAccessSessionResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetRemoteAccessSession response element from \a xml.
 */
void GetRemoteAccessSessionResponsePrivate::parseGetRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRemoteAccessSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
