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

#include "getgcmchannelrequest.h"
#include "getgcmchannelrequest_p.h"
#include "getgcmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetGcmChannelRequest
 * \brief The GetGcmChannelRequest class provides an interface for Pinpoint GetGcmChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getGcmChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetGcmChannelRequest::GetGcmChannelRequest(const GetGcmChannelRequest &other)
    : PinpointRequest(new GetGcmChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGcmChannelRequest object.
 */
GetGcmChannelRequest::GetGcmChannelRequest()
    : PinpointRequest(new GetGcmChannelRequestPrivate(PinpointRequest::GetGcmChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetGcmChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGcmChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGcmChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetGcmChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetGcmChannelRequestPrivate
 * \brief The GetGcmChannelRequestPrivate class provides private implementation for GetGcmChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetGcmChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetGcmChannelRequestPrivate::GetGcmChannelRequestPrivate(
    const PinpointRequest::Action action, GetGcmChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGcmChannelRequest
 * class' copy constructor.
 */
GetGcmChannelRequestPrivate::GetGcmChannelRequestPrivate(
    const GetGcmChannelRequestPrivate &other, GetGcmChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
