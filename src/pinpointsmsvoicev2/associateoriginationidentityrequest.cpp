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

#include "associateoriginationidentityrequest.h"
#include "associateoriginationidentityrequest_p.h"
#include "associateoriginationidentityresponse.h"
#include "pinpointsmsvoicev2request_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

/*!
 * \class QtAws::PinpointSmsVoiceV2::AssociateOriginationIdentityRequest
 * \brief The AssociateOriginationIdentityRequest class provides an interface for PinpointSmsVoiceV2 AssociateOriginationIdentity requests.
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 *
 *  Welcome to the <i>Amazon Pinpoint SMS and Voice, version 2 API Reference</i>. This guide provides information about
 *  Amazon Pinpoint SMS and Voice, version 2 API resources, including supported HTTP methods, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Pinpoint is an Amazon Web Services service that you can use to engage with your recipients across multiple
 *  messaging channels. The Amazon Pinpoint SMS and Voice, version 2 API provides programmatic access to options that are
 *  unique to the SMS and voice channels and supplements the resources provided by the Amazon Pinpoint
 * 
 *  API>
 * 
 *  If you're new to Amazon Pinpoint, it's also helpful to review the <a
 *  href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html"> Amazon Pinpoint Developer Guide</a>. The
 *  <i>Amazon Pinpoint Developer Guide</i> provides tutorials, code samples, and procedures that demonstrate how to use
 *  Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint functionality into mobile apps and other
 *  types of applications. The guide also provides key information, such as Amazon Pinpoint integration with other Amazon
 *  Web Services services, and the quotas that apply to use of the
 *
 * \sa PinpointSmsVoiceV2Client::associateOriginationIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateOriginationIdentityRequest::AssociateOriginationIdentityRequest(const AssociateOriginationIdentityRequest &other)
    : PinpointSmsVoiceV2Request(new AssociateOriginationIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateOriginationIdentityRequest object.
 */
AssociateOriginationIdentityRequest::AssociateOriginationIdentityRequest()
    : PinpointSmsVoiceV2Request(new AssociateOriginationIdentityRequestPrivate(PinpointSmsVoiceV2Request::AssociateOriginationIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateOriginationIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateOriginationIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateOriginationIdentityRequest::response(QNetworkReply * const reply) const
{
    return new AssociateOriginationIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoiceV2::AssociateOriginationIdentityRequestPrivate
 * \brief The AssociateOriginationIdentityRequestPrivate class provides private implementation for AssociateOriginationIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoiceV2
 */

/*!
 * Constructs a AssociateOriginationIdentityRequestPrivate object for PinpointSmsVoiceV2 \a action,
 * with public implementation \a q.
 */
AssociateOriginationIdentityRequestPrivate::AssociateOriginationIdentityRequestPrivate(
    const PinpointSmsVoiceV2Request::Action action, AssociateOriginationIdentityRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateOriginationIdentityRequest
 * class' copy constructor.
 */
AssociateOriginationIdentityRequestPrivate::AssociateOriginationIdentityRequestPrivate(
    const AssociateOriginationIdentityRequestPrivate &other, AssociateOriginationIdentityRequest * const q)
    : PinpointSmsVoiceV2RequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoiceV2
} // namespace QtAws
