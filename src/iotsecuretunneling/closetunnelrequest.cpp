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

#include "closetunnelrequest.h"
#include "closetunnelrequest_p.h"
#include "closetunnelresponse.h"
#include "iotsecuretunnelingrequest_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::CloseTunnelRequest
 * \brief The CloseTunnelRequest class provides an interface for IoTSecureTunneling CloseTunnel requests.
 *
 * \inmodule QtAwsIoTSecureTunneling
 *
 *  <fullname>AWS IoT Secure Tunneling</fullname>
 * 
 *  AWS IoT Secure Tunnling enables you to create remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how AWS IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">AWS IoT Secure
 *
 * \sa IoTSecureTunnelingClient::closeTunnel
 */

/*!
 * Constructs a copy of \a other.
 */
CloseTunnelRequest::CloseTunnelRequest(const CloseTunnelRequest &other)
    : IoTSecureTunnelingRequest(new CloseTunnelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CloseTunnelRequest object.
 */
CloseTunnelRequest::CloseTunnelRequest()
    : IoTSecureTunnelingRequest(new CloseTunnelRequestPrivate(IoTSecureTunnelingRequest::CloseTunnelAction, this))
{

}

/*!
 * \reimp
 */
bool CloseTunnelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CloseTunnelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CloseTunnelRequest::response(QNetworkReply * const reply) const
{
    return new CloseTunnelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSecureTunneling::CloseTunnelRequestPrivate
 * \brief The CloseTunnelRequestPrivate class provides private implementation for CloseTunnelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a CloseTunnelRequestPrivate object for IoTSecureTunneling \a action,
 * with public implementation \a q.
 */
CloseTunnelRequestPrivate::CloseTunnelRequestPrivate(
    const IoTSecureTunnelingRequest::Action action, CloseTunnelRequest * const q)
    : IoTSecureTunnelingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CloseTunnelRequest
 * class' copy constructor.
 */
CloseTunnelRequestPrivate::CloseTunnelRequestPrivate(
    const CloseTunnelRequestPrivate &other, CloseTunnelRequest * const q)
    : IoTSecureTunnelingRequestPrivate(other, q)
{

}

} // namespace IoTSecureTunneling
} // namespace QtAws
