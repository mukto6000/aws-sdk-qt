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

#include "checkifphonenumberisoptedoutrequest.h"
#include "checkifphonenumberisoptedoutrequest_p.h"
#include "checkifphonenumberisoptedoutresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::CheckIfPhoneNumberIsOptedOutRequest
 * \brief The CheckIfPhoneNumberIsOptedOutRequest class provides an interface for SNS CheckIfPhoneNumberIsOptedOut requests.
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
 * \sa SnsClient::checkIfPhoneNumberIsOptedOut
 */

/*!
 * Constructs a copy of \a other.
 */
CheckIfPhoneNumberIsOptedOutRequest::CheckIfPhoneNumberIsOptedOutRequest(const CheckIfPhoneNumberIsOptedOutRequest &other)
    : SnsRequest(new CheckIfPhoneNumberIsOptedOutRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CheckIfPhoneNumberIsOptedOutRequest object.
 */
CheckIfPhoneNumberIsOptedOutRequest::CheckIfPhoneNumberIsOptedOutRequest()
    : SnsRequest(new CheckIfPhoneNumberIsOptedOutRequestPrivate(SnsRequest::CheckIfPhoneNumberIsOptedOutAction, this))
{

}

/*!
 * \reimp
 */
bool CheckIfPhoneNumberIsOptedOutRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CheckIfPhoneNumberIsOptedOutResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CheckIfPhoneNumberIsOptedOutRequest::response(QNetworkReply * const reply) const
{
    return new CheckIfPhoneNumberIsOptedOutResponse(*this, reply);
}

/*!
 * \class QtAws::SNS::CheckIfPhoneNumberIsOptedOutRequestPrivate
 * \brief The CheckIfPhoneNumberIsOptedOutRequestPrivate class provides private implementation for CheckIfPhoneNumberIsOptedOutRequest.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a CheckIfPhoneNumberIsOptedOutRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
CheckIfPhoneNumberIsOptedOutRequestPrivate::CheckIfPhoneNumberIsOptedOutRequestPrivate(
    const SnsRequest::Action action, CheckIfPhoneNumberIsOptedOutRequest * const q)
    : SnsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CheckIfPhoneNumberIsOptedOutRequest
 * class' copy constructor.
 */
CheckIfPhoneNumberIsOptedOutRequestPrivate::CheckIfPhoneNumberIsOptedOutRequestPrivate(
    const CheckIfPhoneNumberIsOptedOutRequestPrivate &other, CheckIfPhoneNumberIsOptedOutRequest * const q)
    : SnsRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
