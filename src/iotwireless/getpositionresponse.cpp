// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpositionresponse.h"
#include "getpositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetPositionResponse
 * \brief The GetPositionResponse class provides an interace for IoTWireless GetPosition responses.
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
 * \sa IoTWirelessClient::getPosition
 */

/*!
 * Constructs a GetPositionResponse object for \a reply to \a request, with parent \a parent.
 */
GetPositionResponse::GetPositionResponse(
        const GetPositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetPositionResponsePrivate(this), parent)
{
    setRequest(new GetPositionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPositionRequest * GetPositionResponse::request() const
{
    Q_D(const GetPositionResponse);
    return static_cast<const GetPositionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetPosition \a response.
 */
void GetPositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetPositionResponsePrivate
 * \brief The GetPositionResponsePrivate class provides private implementation for GetPositionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetPositionResponsePrivate object with public implementation \a q.
 */
GetPositionResponsePrivate::GetPositionResponsePrivate(
    GetPositionResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetPosition response element from \a xml.
 */
void GetPositionResponsePrivate::parseGetPositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
