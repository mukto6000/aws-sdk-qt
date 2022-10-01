// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getwirelessdeviceresponse.h"
#include "getwirelessdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessDeviceResponse
 * \brief The GetWirelessDeviceResponse class provides an interace for IoTWireless GetWirelessDevice responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless provides bi-directional communication between internet-connected wireless devices and the AWS Cloud. To
 *  onboard both LoRaWAN and Sidewalk devices to AWS IoT, use the IoT Wireless API. These wireless devices use the Low Power
 *  Wide Area Networking (LPWAN) communication protocol to communicate with AWS
 * 
 *  IoT>
 * 
 *  Using the API, you can perform create, read, update, and delete operations for your wireless devices, gateways,
 *  destinations, and profiles. After onboarding your devices, you can use the API operations to set log levels and monitor
 *  your devices with
 * 
 *  CloudWatch>
 * 
 *  You can also use the API operations to create multicast groups and schedule a multicast session for sending a downlink
 *  message to devices in the group. By using Firmware Updates Over-The-Air (FUOTA) API operations, you can create a FUOTA
 *  task and schedule a session to update the firmware of individual devices or an entire group of devices in a multicast
 *
 * \sa IoTWirelessClient::getWirelessDevice
 */

/*!
 * Constructs a GetWirelessDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessDeviceResponse::GetWirelessDeviceResponse(
        const GetWirelessDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessDeviceResponsePrivate(this), parent)
{
    setRequest(new GetWirelessDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessDeviceRequest * GetWirelessDeviceResponse::request() const
{
    Q_D(const GetWirelessDeviceResponse);
    return static_cast<const GetWirelessDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessDevice \a response.
 */
void GetWirelessDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessDeviceResponsePrivate
 * \brief The GetWirelessDeviceResponsePrivate class provides private implementation for GetWirelessDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessDeviceResponsePrivate object with public implementation \a q.
 */
GetWirelessDeviceResponsePrivate::GetWirelessDeviceResponsePrivate(
    GetWirelessDeviceResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessDevice response element from \a xml.
 */
void GetWirelessDeviceResponsePrivate::parseGetWirelessDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
