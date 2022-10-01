/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listpartneraccountsresponse.h"
#include "listpartneraccountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListPartnerAccountsResponse
 * \brief The ListPartnerAccountsResponse class provides an interace for IoTWireless ListPartnerAccounts responses.
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
 * \sa IoTWirelessClient::listPartnerAccounts
 */

/*!
 * Constructs a ListPartnerAccountsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPartnerAccountsResponse::ListPartnerAccountsResponse(
        const ListPartnerAccountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ListPartnerAccountsResponsePrivate(this), parent)
{
    setRequest(new ListPartnerAccountsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPartnerAccountsRequest * ListPartnerAccountsResponse::request() const
{
    Q_D(const ListPartnerAccountsResponse);
    return static_cast<const ListPartnerAccountsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless ListPartnerAccounts \a response.
 */
void ListPartnerAccountsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPartnerAccountsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ListPartnerAccountsResponsePrivate
 * \brief The ListPartnerAccountsResponsePrivate class provides private implementation for ListPartnerAccountsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListPartnerAccountsResponsePrivate object with public implementation \a q.
 */
ListPartnerAccountsResponsePrivate::ListPartnerAccountsResponsePrivate(
    ListPartnerAccountsResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ListPartnerAccounts response element from \a xml.
 */
void ListPartnerAccountsResponsePrivate::parseListPartnerAccountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPartnerAccountsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
