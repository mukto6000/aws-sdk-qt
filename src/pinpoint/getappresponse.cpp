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

#include "getappresponse.h"
#include "getappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAppResponse
 * \brief The GetAppResponse class provides an interace for Pinpoint GetApp responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApp
 */

/*!
 * Constructs a GetAppResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppResponse::GetAppResponse(
        const GetAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetAppResponsePrivate(this), parent)
{
    setRequest(new GetAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppRequest * GetAppResponse::request() const
{
    Q_D(const GetAppResponse);
    return static_cast<const GetAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApp \a response.
 */
void GetAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetAppResponsePrivate
 * \brief The GetAppResponsePrivate class provides private implementation for GetAppResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetAppResponsePrivate object with public implementation \a q.
 */
GetAppResponsePrivate::GetAppResponsePrivate(
    GetAppResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApp response element from \a xml.
 */
void GetAppResponsePrivate::parseGetAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
