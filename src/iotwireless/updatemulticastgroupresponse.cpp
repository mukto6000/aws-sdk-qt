// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemulticastgroupresponse.h"
#include "updatemulticastgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateMulticastGroupResponse
 * \brief The UpdateMulticastGroupResponse class provides an interace for IoTWireless UpdateMulticastGroup responses.
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
 * \sa IoTWirelessClient::updateMulticastGroup
 */

/*!
 * Constructs a UpdateMulticastGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMulticastGroupResponse::UpdateMulticastGroupResponse(
        const UpdateMulticastGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateMulticastGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateMulticastGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMulticastGroupRequest * UpdateMulticastGroupResponse::request() const
{
    Q_D(const UpdateMulticastGroupResponse);
    return static_cast<const UpdateMulticastGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateMulticastGroup \a response.
 */
void UpdateMulticastGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMulticastGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateMulticastGroupResponsePrivate
 * \brief The UpdateMulticastGroupResponsePrivate class provides private implementation for UpdateMulticastGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateMulticastGroupResponsePrivate object with public implementation \a q.
 */
UpdateMulticastGroupResponsePrivate::UpdateMulticastGroupResponsePrivate(
    UpdateMulticastGroupResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateMulticastGroup response element from \a xml.
 */
void UpdateMulticastGroupResponsePrivate::parseUpdateMulticastGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMulticastGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
