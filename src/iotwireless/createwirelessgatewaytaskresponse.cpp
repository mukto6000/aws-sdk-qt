// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwirelessgatewaytaskresponse.h"
#include "createwirelessgatewaytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayTaskResponse
 * \brief The CreateWirelessGatewayTaskResponse class provides an interace for IoTWireless CreateWirelessGatewayTask responses.
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
 * \sa IoTWirelessClient::createWirelessGatewayTask
 */

/*!
 * Constructs a CreateWirelessGatewayTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWirelessGatewayTaskResponse::CreateWirelessGatewayTaskResponse(
        const CreateWirelessGatewayTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateWirelessGatewayTaskResponsePrivate(this), parent)
{
    setRequest(new CreateWirelessGatewayTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWirelessGatewayTaskRequest * CreateWirelessGatewayTaskResponse::request() const
{
    Q_D(const CreateWirelessGatewayTaskResponse);
    return static_cast<const CreateWirelessGatewayTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateWirelessGatewayTask \a response.
 */
void CreateWirelessGatewayTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWirelessGatewayTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayTaskResponsePrivate
 * \brief The CreateWirelessGatewayTaskResponsePrivate class provides private implementation for CreateWirelessGatewayTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessGatewayTaskResponsePrivate object with public implementation \a q.
 */
CreateWirelessGatewayTaskResponsePrivate::CreateWirelessGatewayTaskResponsePrivate(
    CreateWirelessGatewayTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateWirelessGatewayTask response element from \a xml.
 */
void CreateWirelessGatewayTaskResponsePrivate::parseCreateWirelessGatewayTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWirelessGatewayTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
