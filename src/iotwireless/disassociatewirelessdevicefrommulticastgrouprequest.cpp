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

#include "disassociatewirelessdevicefrommulticastgrouprequest.h"
#include "disassociatewirelessdevicefrommulticastgrouprequest_p.h"
#include "disassociatewirelessdevicefrommulticastgroupresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessDeviceFromMulticastGroupRequest
 * \brief The DisassociateWirelessDeviceFromMulticastGroupRequest class provides an interface for IoTWireless DisassociateWirelessDeviceFromMulticastGroup requests.
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
 * \sa IoTWirelessClient::disassociateWirelessDeviceFromMulticastGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateWirelessDeviceFromMulticastGroupRequest::DisassociateWirelessDeviceFromMulticastGroupRequest(const DisassociateWirelessDeviceFromMulticastGroupRequest &other)
    : IoTWirelessRequest(new DisassociateWirelessDeviceFromMulticastGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateWirelessDeviceFromMulticastGroupRequest object.
 */
DisassociateWirelessDeviceFromMulticastGroupRequest::DisassociateWirelessDeviceFromMulticastGroupRequest()
    : IoTWirelessRequest(new DisassociateWirelessDeviceFromMulticastGroupRequestPrivate(IoTWirelessRequest::DisassociateWirelessDeviceFromMulticastGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateWirelessDeviceFromMulticastGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateWirelessDeviceFromMulticastGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateWirelessDeviceFromMulticastGroupRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateWirelessDeviceFromMulticastGroupResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessDeviceFromMulticastGroupRequestPrivate
 * \brief The DisassociateWirelessDeviceFromMulticastGroupRequestPrivate class provides private implementation for DisassociateWirelessDeviceFromMulticastGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateWirelessDeviceFromMulticastGroupRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
DisassociateWirelessDeviceFromMulticastGroupRequestPrivate::DisassociateWirelessDeviceFromMulticastGroupRequestPrivate(
    const IoTWirelessRequest::Action action, DisassociateWirelessDeviceFromMulticastGroupRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateWirelessDeviceFromMulticastGroupRequest
 * class' copy constructor.
 */
DisassociateWirelessDeviceFromMulticastGroupRequestPrivate::DisassociateWirelessDeviceFromMulticastGroupRequestPrivate(
    const DisassociateWirelessDeviceFromMulticastGroupRequestPrivate &other, DisassociateWirelessDeviceFromMulticastGroupRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
