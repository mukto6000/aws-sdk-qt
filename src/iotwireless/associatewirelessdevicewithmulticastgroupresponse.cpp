// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatewirelessdevicewithmulticastgroupresponse.h"
#include "associatewirelessdevicewithmulticastgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateWirelessDeviceWithMulticastGroupResponse
 * \brief The AssociateWirelessDeviceWithMulticastGroupResponse class provides an interace for IoTWireless AssociateWirelessDeviceWithMulticastGroup responses.
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
 * \sa IoTWirelessClient::associateWirelessDeviceWithMulticastGroup
 */

/*!
 * Constructs a AssociateWirelessDeviceWithMulticastGroupResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateWirelessDeviceWithMulticastGroupResponse::AssociateWirelessDeviceWithMulticastGroupResponse(
        const AssociateWirelessDeviceWithMulticastGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new AssociateWirelessDeviceWithMulticastGroupResponsePrivate(this), parent)
{
    setRequest(new AssociateWirelessDeviceWithMulticastGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateWirelessDeviceWithMulticastGroupRequest * AssociateWirelessDeviceWithMulticastGroupResponse::request() const
{
    Q_D(const AssociateWirelessDeviceWithMulticastGroupResponse);
    return static_cast<const AssociateWirelessDeviceWithMulticastGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless AssociateWirelessDeviceWithMulticastGroup \a response.
 */
void AssociateWirelessDeviceWithMulticastGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateWirelessDeviceWithMulticastGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::AssociateWirelessDeviceWithMulticastGroupResponsePrivate
 * \brief The AssociateWirelessDeviceWithMulticastGroupResponsePrivate class provides private implementation for AssociateWirelessDeviceWithMulticastGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateWirelessDeviceWithMulticastGroupResponsePrivate object with public implementation \a q.
 */
AssociateWirelessDeviceWithMulticastGroupResponsePrivate::AssociateWirelessDeviceWithMulticastGroupResponsePrivate(
    AssociateWirelessDeviceWithMulticastGroupResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless AssociateWirelessDeviceWithMulticastGroup response element from \a xml.
 */
void AssociateWirelessDeviceWithMulticastGroupResponsePrivate::parseAssociateWirelessDeviceWithMulticastGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateWirelessDeviceWithMulticastGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
