// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepartneraccountresponse.h"
#include "updatepartneraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdatePartnerAccountResponse
 * \brief The UpdatePartnerAccountResponse class provides an interace for IoTWireless UpdatePartnerAccount responses.
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
 * \sa IoTWirelessClient::updatePartnerAccount
 */

/*!
 * Constructs a UpdatePartnerAccountResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePartnerAccountResponse::UpdatePartnerAccountResponse(
        const UpdatePartnerAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdatePartnerAccountResponsePrivate(this), parent)
{
    setRequest(new UpdatePartnerAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePartnerAccountRequest * UpdatePartnerAccountResponse::request() const
{
    Q_D(const UpdatePartnerAccountResponse);
    return static_cast<const UpdatePartnerAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdatePartnerAccount \a response.
 */
void UpdatePartnerAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePartnerAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdatePartnerAccountResponsePrivate
 * \brief The UpdatePartnerAccountResponsePrivate class provides private implementation for UpdatePartnerAccountResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdatePartnerAccountResponsePrivate object with public implementation \a q.
 */
UpdatePartnerAccountResponsePrivate::UpdatePartnerAccountResponsePrivate(
    UpdatePartnerAccountResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdatePartnerAccount response element from \a xml.
 */
void UpdatePartnerAccountResponsePrivate::parseUpdatePartnerAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePartnerAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
