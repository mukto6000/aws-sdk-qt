// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelmembershipsrequest.h"
#include "listchannelmembershipsrequest_p.h"
#include "listchannelmembershipsresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelMembershipsRequest
 * \brief The ListChannelMembershipsRequest class provides an interface for ChimeSdkMessaging ListChannelMemberships requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelMemberships
 */

/*!
 * Constructs a copy of \a other.
 */
ListChannelMembershipsRequest::ListChannelMembershipsRequest(const ListChannelMembershipsRequest &other)
    : ChimeSdkMessagingRequest(new ListChannelMembershipsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChannelMembershipsRequest object.
 */
ListChannelMembershipsRequest::ListChannelMembershipsRequest()
    : ChimeSdkMessagingRequest(new ListChannelMembershipsRequestPrivate(ChimeSdkMessagingRequest::ListChannelMembershipsAction, this))
{

}

/*!
 * \reimp
 */
bool ListChannelMembershipsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChannelMembershipsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChannelMembershipsRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelMembershipsResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelMembershipsRequestPrivate
 * \brief The ListChannelMembershipsRequestPrivate class provides private implementation for ListChannelMembershipsRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelMembershipsRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
ListChannelMembershipsRequestPrivate::ListChannelMembershipsRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, ListChannelMembershipsRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChannelMembershipsRequest
 * class' copy constructor.
 */
ListChannelMembershipsRequestPrivate::ListChannelMembershipsRequestPrivate(
    const ListChannelMembershipsRequestPrivate &other, ListChannelMembershipsRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
