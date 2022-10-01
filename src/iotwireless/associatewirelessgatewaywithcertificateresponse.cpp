// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatewirelessgatewaywithcertificateresponse.h"
#include "associatewirelessgatewaywithcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateWirelessGatewayWithCertificateResponse
 * \brief The AssociateWirelessGatewayWithCertificateResponse class provides an interace for IoTWireless AssociateWirelessGatewayWithCertificate responses.
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
 * \sa IoTWirelessClient::associateWirelessGatewayWithCertificate
 */

/*!
 * Constructs a AssociateWirelessGatewayWithCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateWirelessGatewayWithCertificateResponse::AssociateWirelessGatewayWithCertificateResponse(
        const AssociateWirelessGatewayWithCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new AssociateWirelessGatewayWithCertificateResponsePrivate(this), parent)
{
    setRequest(new AssociateWirelessGatewayWithCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateWirelessGatewayWithCertificateRequest * AssociateWirelessGatewayWithCertificateResponse::request() const
{
    Q_D(const AssociateWirelessGatewayWithCertificateResponse);
    return static_cast<const AssociateWirelessGatewayWithCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless AssociateWirelessGatewayWithCertificate \a response.
 */
void AssociateWirelessGatewayWithCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateWirelessGatewayWithCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::AssociateWirelessGatewayWithCertificateResponsePrivate
 * \brief The AssociateWirelessGatewayWithCertificateResponsePrivate class provides private implementation for AssociateWirelessGatewayWithCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateWirelessGatewayWithCertificateResponsePrivate object with public implementation \a q.
 */
AssociateWirelessGatewayWithCertificateResponsePrivate::AssociateWirelessGatewayWithCertificateResponsePrivate(
    AssociateWirelessGatewayWithCertificateResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless AssociateWirelessGatewayWithCertificate response element from \a xml.
 */
void AssociateWirelessGatewayWithCertificateResponsePrivate::parseAssociateWirelessGatewayWithCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateWirelessGatewayWithCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
