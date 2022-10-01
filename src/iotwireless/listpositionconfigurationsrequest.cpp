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

#include "listpositionconfigurationsrequest.h"
#include "listpositionconfigurationsrequest_p.h"
#include "listpositionconfigurationsresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListPositionConfigurationsRequest
 * \brief The ListPositionConfigurationsRequest class provides an interface for IoTWireless ListPositionConfigurations requests.
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
 * \sa IoTWirelessClient::listPositionConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListPositionConfigurationsRequest::ListPositionConfigurationsRequest(const ListPositionConfigurationsRequest &other)
    : IoTWirelessRequest(new ListPositionConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPositionConfigurationsRequest object.
 */
ListPositionConfigurationsRequest::ListPositionConfigurationsRequest()
    : IoTWirelessRequest(new ListPositionConfigurationsRequestPrivate(IoTWirelessRequest::ListPositionConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPositionConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPositionConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPositionConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListPositionConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::ListPositionConfigurationsRequestPrivate
 * \brief The ListPositionConfigurationsRequestPrivate class provides private implementation for ListPositionConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListPositionConfigurationsRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
ListPositionConfigurationsRequestPrivate::ListPositionConfigurationsRequestPrivate(
    const IoTWirelessRequest::Action action, ListPositionConfigurationsRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPositionConfigurationsRequest
 * class' copy constructor.
 */
ListPositionConfigurationsRequestPrivate::ListPositionConfigurationsRequestPrivate(
    const ListPositionConfigurationsRequestPrivate &other, ListPositionConfigurationsRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
