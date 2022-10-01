// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getendpointrequest.h"
#include "getendpointrequest_p.h"
#include "getendpointresponse.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::GetEndpointRequest
 * \brief The GetEndpointRequest class provides an interface for IotDeviceAdvisor GetEndpoint requests.
 *
 * \inmodule QtAwsIotDeviceAdvisor
 *
 *  Amazon Web Services IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices
 *  during device software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for
 *  reliable and secure connectivity with Amazon Web Services IoT Core before deploying devices to production. By using
 *  Device Advisor, you can confirm that your devices can connect to Amazon Web Services IoT Core, follow security best
 *  practices and, if applicable, receive software updates from IoT Device Management. You can also download signed
 *  qualification reports to submit to the Amazon Web Services Partner Network to get your device qualified for the Amazon
 *  Web Services Partner Device Catalog without the need to send your device in and wait for it to be
 *
 * \sa IotDeviceAdvisorClient::getEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetEndpointRequest::GetEndpointRequest(const GetEndpointRequest &other)
    : IotDeviceAdvisorRequest(new GetEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEndpointRequest object.
 */
GetEndpointRequest::GetEndpointRequest()
    : IotDeviceAdvisorRequest(new GetEndpointRequestPrivate(IotDeviceAdvisorRequest::GetEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::IotDeviceAdvisor::GetEndpointRequestPrivate
 * \brief The GetEndpointRequestPrivate class provides private implementation for GetEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a GetEndpointRequestPrivate object for IotDeviceAdvisor \a action,
 * with public implementation \a q.
 */
GetEndpointRequestPrivate::GetEndpointRequestPrivate(
    const IotDeviceAdvisorRequest::Action action, GetEndpointRequest * const q)
    : IotDeviceAdvisorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEndpointRequest
 * class' copy constructor.
 */
GetEndpointRequestPrivate::GetEndpointRequestPrivate(
    const GetEndpointRequestPrivate &other, GetEndpointRequest * const q)
    : IotDeviceAdvisorRequestPrivate(other, q)
{

}

} // namespace IotDeviceAdvisor
} // namespace QtAws
