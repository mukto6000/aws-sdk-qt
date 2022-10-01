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

#include "updatenetworkanalyzerconfigurationrequest.h"
#include "updatenetworkanalyzerconfigurationrequest_p.h"
#include "updatenetworkanalyzerconfigurationresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateNetworkAnalyzerConfigurationRequest
 * \brief The UpdateNetworkAnalyzerConfigurationRequest class provides an interface for IoTWireless UpdateNetworkAnalyzerConfiguration requests.
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
 * \sa IoTWirelessClient::updateNetworkAnalyzerConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNetworkAnalyzerConfigurationRequest::UpdateNetworkAnalyzerConfigurationRequest(const UpdateNetworkAnalyzerConfigurationRequest &other)
    : IoTWirelessRequest(new UpdateNetworkAnalyzerConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNetworkAnalyzerConfigurationRequest object.
 */
UpdateNetworkAnalyzerConfigurationRequest::UpdateNetworkAnalyzerConfigurationRequest()
    : IoTWirelessRequest(new UpdateNetworkAnalyzerConfigurationRequestPrivate(IoTWirelessRequest::UpdateNetworkAnalyzerConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNetworkAnalyzerConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNetworkAnalyzerConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNetworkAnalyzerConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNetworkAnalyzerConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::UpdateNetworkAnalyzerConfigurationRequestPrivate
 * \brief The UpdateNetworkAnalyzerConfigurationRequestPrivate class provides private implementation for UpdateNetworkAnalyzerConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateNetworkAnalyzerConfigurationRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
UpdateNetworkAnalyzerConfigurationRequestPrivate::UpdateNetworkAnalyzerConfigurationRequestPrivate(
    const IoTWirelessRequest::Action action, UpdateNetworkAnalyzerConfigurationRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNetworkAnalyzerConfigurationRequest
 * class' copy constructor.
 */
UpdateNetworkAnalyzerConfigurationRequestPrivate::UpdateNetworkAnalyzerConfigurationRequestPrivate(
    const UpdateNetworkAnalyzerConfigurationRequestPrivate &other, UpdateNetworkAnalyzerConfigurationRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
