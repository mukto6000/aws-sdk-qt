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

#include "deletebaiduchannelrequest.h"
#include "deletebaiduchannelrequest_p.h"
#include "deletebaiduchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteBaiduChannelRequest
 * \brief The DeleteBaiduChannelRequest class provides an interface for Pinpoint DeleteBaiduChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteBaiduChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBaiduChannelRequest::DeleteBaiduChannelRequest(const DeleteBaiduChannelRequest &other)
    : PinpointRequest(new DeleteBaiduChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBaiduChannelRequest object.
 */
DeleteBaiduChannelRequest::DeleteBaiduChannelRequest()
    : PinpointRequest(new DeleteBaiduChannelRequestPrivate(PinpointRequest::DeleteBaiduChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBaiduChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBaiduChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBaiduChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBaiduChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteBaiduChannelRequestPrivate
 * \brief The DeleteBaiduChannelRequestPrivate class provides private implementation for DeleteBaiduChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteBaiduChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteBaiduChannelRequestPrivate::DeleteBaiduChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteBaiduChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBaiduChannelRequest
 * class' copy constructor.
 */
DeleteBaiduChannelRequestPrivate::DeleteBaiduChannelRequestPrivate(
    const DeleteBaiduChannelRequestPrivate &other, DeleteBaiduChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
