// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelbanrequest.h"
#include "describechannelbanrequest_p.h"
#include "describechannelbanresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelBanRequest
 * \brief The DescribeChannelBanRequest class provides an interface for ChimeSdkMessaging DescribeChannelBan requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelBan
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeChannelBanRequest::DescribeChannelBanRequest(const DescribeChannelBanRequest &other)
    : ChimeSdkMessagingRequest(new DescribeChannelBanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeChannelBanRequest object.
 */
DescribeChannelBanRequest::DescribeChannelBanRequest()
    : ChimeSdkMessagingRequest(new DescribeChannelBanRequestPrivate(ChimeSdkMessagingRequest::DescribeChannelBanAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeChannelBanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeChannelBanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeChannelBanRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChannelBanResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelBanRequestPrivate
 * \brief The DescribeChannelBanRequestPrivate class provides private implementation for DescribeChannelBanRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelBanRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
DescribeChannelBanRequestPrivate::DescribeChannelBanRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, DescribeChannelBanRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeChannelBanRequest
 * class' copy constructor.
 */
DescribeChannelBanRequestPrivate::DescribeChannelBanRequestPrivate(
    const DescribeChannelBanRequestPrivate &other, DescribeChannelBanRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
