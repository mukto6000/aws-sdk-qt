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

#include "getremoteaccesssessionrequest.h"
#include "getremoteaccesssessionrequest_p.h"
#include "getremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetRemoteAccessSessionRequest
 * \brief The GetRemoteAccessSessionRequest class provides an interface for DeviceFarm GetRemoteAccessSession requests.
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
 * \sa DeviceFarmClient::getRemoteAccessSession
 */

/*!
 * Constructs a copy of \a other.
 */
GetRemoteAccessSessionRequest::GetRemoteAccessSessionRequest(const GetRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new GetRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRemoteAccessSessionRequest object.
 */
GetRemoteAccessSessionRequest::GetRemoteAccessSessionRequest()
    : DeviceFarmRequest(new GetRemoteAccessSessionRequestPrivate(DeviceFarmRequest::GetRemoteAccessSessionAction, this))
{

}

/*!
 * \reimp
 */
bool GetRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRemoteAccessSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new GetRemoteAccessSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetRemoteAccessSessionRequestPrivate
 * \brief The GetRemoteAccessSessionRequestPrivate class provides private implementation for GetRemoteAccessSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetRemoteAccessSessionRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetRemoteAccessSessionRequestPrivate::GetRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, GetRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRemoteAccessSessionRequest
 * class' copy constructor.
 */
GetRemoteAccessSessionRequestPrivate::GetRemoteAccessSessionRequestPrivate(
    const GetRemoteAccessSessionRequestPrivate &other, GetRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
