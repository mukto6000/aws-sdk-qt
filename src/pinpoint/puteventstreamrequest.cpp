// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "puteventstreamrequest.h"
#include "puteventstreamrequest_p.h"
#include "puteventstreamresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PutEventStreamRequest
 * \brief The PutEventStreamRequest class provides an interface for Pinpoint PutEventStream requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::putEventStream
 */

/*!
 * Constructs a copy of \a other.
 */
PutEventStreamRequest::PutEventStreamRequest(const PutEventStreamRequest &other)
    : PinpointRequest(new PutEventStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutEventStreamRequest object.
 */
PutEventStreamRequest::PutEventStreamRequest()
    : PinpointRequest(new PutEventStreamRequestPrivate(PinpointRequest::PutEventStreamAction, this))
{

}

/*!
 * \reimp
 */
bool PutEventStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutEventStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEventStreamRequest::response(QNetworkReply * const reply) const
{
    return new PutEventStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::PutEventStreamRequestPrivate
 * \brief The PutEventStreamRequestPrivate class provides private implementation for PutEventStreamRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PutEventStreamRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
PutEventStreamRequestPrivate::PutEventStreamRequestPrivate(
    const PinpointRequest::Action action, PutEventStreamRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutEventStreamRequest
 * class' copy constructor.
 */
PutEventStreamRequestPrivate::PutEventStreamRequestPrivate(
    const PutEventStreamRequestPrivate &other, PutEventStreamRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
