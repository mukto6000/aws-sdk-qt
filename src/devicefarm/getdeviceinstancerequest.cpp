// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeviceinstancerequest.h"
#include "getdeviceinstancerequest_p.h"
#include "getdeviceinstanceresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDeviceInstanceRequest
 * \brief The GetDeviceInstanceRequest class provides an interface for DeviceFarm GetDeviceInstance requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::getDeviceInstance
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceInstanceRequest::GetDeviceInstanceRequest(const GetDeviceInstanceRequest &other)
    : DeviceFarmRequest(new GetDeviceInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceInstanceRequest object.
 */
GetDeviceInstanceRequest::GetDeviceInstanceRequest()
    : DeviceFarmRequest(new GetDeviceInstanceRequestPrivate(DeviceFarmRequest::GetDeviceInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetDeviceInstanceRequestPrivate
 * \brief The GetDeviceInstanceRequestPrivate class provides private implementation for GetDeviceInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetDeviceInstanceRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetDeviceInstanceRequestPrivate::GetDeviceInstanceRequestPrivate(
    const DeviceFarmRequest::Action action, GetDeviceInstanceRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceInstanceRequest
 * class' copy constructor.
 */
GetDeviceInstanceRequestPrivate::GetDeviceInstanceRequestPrivate(
    const GetDeviceInstanceRequestPrivate &other, GetDeviceInstanceRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
