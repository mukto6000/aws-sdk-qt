// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteskillauthorizationrequest.h"
#include "deleteskillauthorizationrequest_p.h"
#include "deleteskillauthorizationresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteSkillAuthorizationRequest
 * \brief The DeleteSkillAuthorizationRequest class provides an interface for AlexaForBusiness DeleteSkillAuthorization requests.
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
 * \sa AlexaForBusinessClient::deleteSkillAuthorization
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSkillAuthorizationRequest::DeleteSkillAuthorizationRequest(const DeleteSkillAuthorizationRequest &other)
    : AlexaForBusinessRequest(new DeleteSkillAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSkillAuthorizationRequest object.
 */
DeleteSkillAuthorizationRequest::DeleteSkillAuthorizationRequest()
    : AlexaForBusinessRequest(new DeleteSkillAuthorizationRequestPrivate(AlexaForBusinessRequest::DeleteSkillAuthorizationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSkillAuthorizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSkillAuthorizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSkillAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSkillAuthorizationResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteSkillAuthorizationRequestPrivate
 * \brief The DeleteSkillAuthorizationRequestPrivate class provides private implementation for DeleteSkillAuthorizationRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteSkillAuthorizationRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
DeleteSkillAuthorizationRequestPrivate::DeleteSkillAuthorizationRequestPrivate(
    const AlexaForBusinessRequest::Action action, DeleteSkillAuthorizationRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSkillAuthorizationRequest
 * class' copy constructor.
 */
DeleteSkillAuthorizationRequestPrivate::DeleteSkillAuthorizationRequestPrivate(
    const DeleteSkillAuthorizationRequestPrivate &other, DeleteSkillAuthorizationRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
