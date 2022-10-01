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

#include "initiatedeviceclaimresponse.h"
#include "initiatedeviceclaimresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::InitiateDeviceClaimResponse
 * \brief The InitiateDeviceClaimResponse class provides an interace for IoT1ClickDevices InitiateDeviceClaim responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::initiateDeviceClaim
 */

/*!
 * Constructs a InitiateDeviceClaimResponse object for \a reply to \a request, with parent \a parent.
 */
InitiateDeviceClaimResponse::InitiateDeviceClaimResponse(
        const InitiateDeviceClaimRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new InitiateDeviceClaimResponsePrivate(this), parent)
{
    setRequest(new InitiateDeviceClaimRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InitiateDeviceClaimRequest * InitiateDeviceClaimResponse::request() const
{
    Q_D(const InitiateDeviceClaimResponse);
    return static_cast<const InitiateDeviceClaimRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevices InitiateDeviceClaim \a response.
 */
void InitiateDeviceClaimResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InitiateDeviceClaimResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::InitiateDeviceClaimResponsePrivate
 * \brief The InitiateDeviceClaimResponsePrivate class provides private implementation for InitiateDeviceClaimResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a InitiateDeviceClaimResponsePrivate object with public implementation \a q.
 */
InitiateDeviceClaimResponsePrivate::InitiateDeviceClaimResponsePrivate(
    InitiateDeviceClaimResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices InitiateDeviceClaim response element from \a xml.
 */
void InitiateDeviceClaimResponsePrivate::parseInitiateDeviceClaimResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateDeviceClaimResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
