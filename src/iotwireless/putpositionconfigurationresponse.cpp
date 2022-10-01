// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpositionconfigurationresponse.h"
#include "putpositionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::PutPositionConfigurationResponse
 * \brief The PutPositionConfigurationResponse class provides an interace for IoTWireless PutPositionConfiguration responses.
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
 * \sa IoTWirelessClient::putPositionConfiguration
 */

/*!
 * Constructs a PutPositionConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutPositionConfigurationResponse::PutPositionConfigurationResponse(
        const PutPositionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new PutPositionConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutPositionConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPositionConfigurationRequest * PutPositionConfigurationResponse::request() const
{
    Q_D(const PutPositionConfigurationResponse);
    return static_cast<const PutPositionConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless PutPositionConfiguration \a response.
 */
void PutPositionConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPositionConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::PutPositionConfigurationResponsePrivate
 * \brief The PutPositionConfigurationResponsePrivate class provides private implementation for PutPositionConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a PutPositionConfigurationResponsePrivate object with public implementation \a q.
 */
PutPositionConfigurationResponsePrivate::PutPositionConfigurationResponsePrivate(
    PutPositionConfigurationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless PutPositionConfiguration response element from \a xml.
 */
void PutPositionConfigurationResponsePrivate::parsePutPositionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPositionConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
