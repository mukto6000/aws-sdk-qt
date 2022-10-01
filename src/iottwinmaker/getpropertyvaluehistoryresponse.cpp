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

#include "getpropertyvaluehistoryresponse.h"
#include "getpropertyvaluehistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetPropertyValueHistoryResponse
 * \brief The GetPropertyValueHistoryResponse class provides an interace for IoTTwinMaker GetPropertyValueHistory responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getPropertyValueHistory
 */

/*!
 * Constructs a GetPropertyValueHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetPropertyValueHistoryResponse::GetPropertyValueHistoryResponse(
        const GetPropertyValueHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new GetPropertyValueHistoryResponsePrivate(this), parent)
{
    setRequest(new GetPropertyValueHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPropertyValueHistoryRequest * GetPropertyValueHistoryResponse::request() const
{
    Q_D(const GetPropertyValueHistoryResponse);
    return static_cast<const GetPropertyValueHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker GetPropertyValueHistory \a response.
 */
void GetPropertyValueHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPropertyValueHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::GetPropertyValueHistoryResponsePrivate
 * \brief The GetPropertyValueHistoryResponsePrivate class provides private implementation for GetPropertyValueHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetPropertyValueHistoryResponsePrivate object with public implementation \a q.
 */
GetPropertyValueHistoryResponsePrivate::GetPropertyValueHistoryResponsePrivate(
    GetPropertyValueHistoryResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker GetPropertyValueHistory response element from \a xml.
 */
void GetPropertyValueHistoryResponsePrivate::parseGetPropertyValueHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPropertyValueHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
