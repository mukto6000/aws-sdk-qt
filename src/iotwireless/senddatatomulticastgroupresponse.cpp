// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "senddatatomulticastgroupresponse.h"
#include "senddatatomulticastgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::SendDataToMulticastGroupResponse
 * \brief The SendDataToMulticastGroupResponse class provides an interace for IoTWireless SendDataToMulticastGroup responses.
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
 * \sa IoTWirelessClient::sendDataToMulticastGroup
 */

/*!
 * Constructs a SendDataToMulticastGroupResponse object for \a reply to \a request, with parent \a parent.
 */
SendDataToMulticastGroupResponse::SendDataToMulticastGroupResponse(
        const SendDataToMulticastGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new SendDataToMulticastGroupResponsePrivate(this), parent)
{
    setRequest(new SendDataToMulticastGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendDataToMulticastGroupRequest * SendDataToMulticastGroupResponse::request() const
{
    Q_D(const SendDataToMulticastGroupResponse);
    return static_cast<const SendDataToMulticastGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless SendDataToMulticastGroup \a response.
 */
void SendDataToMulticastGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendDataToMulticastGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::SendDataToMulticastGroupResponsePrivate
 * \brief The SendDataToMulticastGroupResponsePrivate class provides private implementation for SendDataToMulticastGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a SendDataToMulticastGroupResponsePrivate object with public implementation \a q.
 */
SendDataToMulticastGroupResponsePrivate::SendDataToMulticastGroupResponsePrivate(
    SendDataToMulticastGroupResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless SendDataToMulticastGroup response element from \a xml.
 */
void SendDataToMulticastGroupResponsePrivate::parseSendDataToMulticastGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendDataToMulticastGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
