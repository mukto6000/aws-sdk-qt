/*
    Copyright 2013-2020 Paul Colby

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

#include "unsubscriberequest.h"
#include "unsubscriberequest_p.h"
#include "unsubscriberesponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::UnsubscribeRequest
 * \brief The UnsubscribeRequest class provides an interface for SNS Unsubscribe requests.
 *
 * \inmodule QtAwsSNS
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see <a
 *  href="http://aws.amazon.com/sns/">https://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="https://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SnsClient::unsubscribe
 */

/*!
 * Constructs a copy of \a other.
 */
UnsubscribeRequest::UnsubscribeRequest(const UnsubscribeRequest &other)
    : SnsRequest(new UnsubscribeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UnsubscribeRequest object.
 */
UnsubscribeRequest::UnsubscribeRequest()
    : SnsRequest(new UnsubscribeRequestPrivate(SnsRequest::UnsubscribeAction, this))
{

}

/*!
 * \reimp
 */
bool UnsubscribeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UnsubscribeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UnsubscribeRequest::response(QNetworkReply * const reply) const
{
    return new UnsubscribeResponse(*this, reply);
}

/*!
 * \class QtAws::SNS::UnsubscribeRequestPrivate
 * \brief The UnsubscribeRequestPrivate class provides private implementation for UnsubscribeRequest.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a UnsubscribeRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
UnsubscribeRequestPrivate::UnsubscribeRequestPrivate(
    const SnsRequest::Action action, UnsubscribeRequest * const q)
    : SnsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UnsubscribeRequest
 * class' copy constructor.
 */
UnsubscribeRequestPrivate::UnsubscribeRequestPrivate(
    const UnsubscribeRequestPrivate &other, UnsubscribeRequest * const q)
    : SnsRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
