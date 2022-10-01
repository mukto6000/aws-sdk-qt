// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontactrequest.h"
#include "updatecontactrequest_p.h"
#include "updatecontactresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateContactRequest
 * \brief The UpdateContactRequest class provides an interface for AlexaForBusiness UpdateContact requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::updateContact
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateContactRequest::UpdateContactRequest(const UpdateContactRequest &other)
    : AlexaForBusinessRequest(new UpdateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateContactRequest object.
 */
UpdateContactRequest::UpdateContactRequest()
    : AlexaForBusinessRequest(new UpdateContactRequestPrivate(AlexaForBusinessRequest::UpdateContactAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateContactRequest::response(QNetworkReply * const reply) const
{
    return new UpdateContactResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateContactRequestPrivate
 * \brief The UpdateContactRequestPrivate class provides private implementation for UpdateContactRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateContactRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateContactRequestPrivate::UpdateContactRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateContactRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateContactRequest
 * class' copy constructor.
 */
UpdateContactRequestPrivate::UpdateContactRequestPrivate(
    const UpdateContactRequestPrivate &other, UpdateContactRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
