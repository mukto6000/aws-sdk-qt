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

#include "getapplicationdaterangekpiresponse.h"
#include "getapplicationdaterangekpiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApplicationDateRangeKpiResponse
 * \brief The GetApplicationDateRangeKpiResponse class provides an interace for Pinpoint GetApplicationDateRangeKpi responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApplicationDateRangeKpi
 */

/*!
 * Constructs a GetApplicationDateRangeKpiResponse object for \a reply to \a request, with parent \a parent.
 */
GetApplicationDateRangeKpiResponse::GetApplicationDateRangeKpiResponse(
        const GetApplicationDateRangeKpiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApplicationDateRangeKpiResponsePrivate(this), parent)
{
    setRequest(new GetApplicationDateRangeKpiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApplicationDateRangeKpiRequest * GetApplicationDateRangeKpiResponse::request() const
{
    Q_D(const GetApplicationDateRangeKpiResponse);
    return static_cast<const GetApplicationDateRangeKpiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApplicationDateRangeKpi \a response.
 */
void GetApplicationDateRangeKpiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApplicationDateRangeKpiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApplicationDateRangeKpiResponsePrivate
 * \brief The GetApplicationDateRangeKpiResponsePrivate class provides private implementation for GetApplicationDateRangeKpiResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApplicationDateRangeKpiResponsePrivate object with public implementation \a q.
 */
GetApplicationDateRangeKpiResponsePrivate::GetApplicationDateRangeKpiResponsePrivate(
    GetApplicationDateRangeKpiResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApplicationDateRangeKpi response element from \a xml.
 */
void GetApplicationDateRangeKpiResponsePrivate::parseGetApplicationDateRangeKpiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationDateRangeKpiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
