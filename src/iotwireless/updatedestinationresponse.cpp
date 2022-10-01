// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedestinationresponse.h"
#include "updatedestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateDestinationResponse
 * \brief The UpdateDestinationResponse class provides an interace for IoTWireless UpdateDestination responses.
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
 * \sa IoTWirelessClient::updateDestination
 */

/*!
 * Constructs a UpdateDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDestinationResponse::UpdateDestinationResponse(
        const UpdateDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDestinationRequest * UpdateDestinationResponse::request() const
{
    Q_D(const UpdateDestinationResponse);
    return static_cast<const UpdateDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateDestination \a response.
 */
void UpdateDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateDestinationResponsePrivate
 * \brief The UpdateDestinationResponsePrivate class provides private implementation for UpdateDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateDestinationResponsePrivate object with public implementation \a q.
 */
UpdateDestinationResponsePrivate::UpdateDestinationResponsePrivate(
    UpdateDestinationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateDestination response element from \a xml.
 */
void UpdateDestinationResponsePrivate::parseUpdateDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
