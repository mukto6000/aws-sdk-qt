// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteroomrequest.h"
#include "deleteroomrequest_p.h"
#include "deleteroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomRequest
 * \brief The DeleteRoomRequest class provides an interface for AlexaForBusiness DeleteRoom requests.
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
 * \sa AlexaForBusinessClient::deleteRoom
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRoomRequest::DeleteRoomRequest(const DeleteRoomRequest &other)
    : AlexaForBusinessRequest(new DeleteRoomRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRoomRequest object.
 */
DeleteRoomRequest::DeleteRoomRequest()
    : AlexaForBusinessRequest(new DeleteRoomRequestPrivate(AlexaForBusinessRequest::DeleteRoomAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRoomRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRoomResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRoomRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRoomResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomRequestPrivate
 * \brief The DeleteRoomRequestPrivate class provides private implementation for DeleteRoomRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteRoomRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
DeleteRoomRequestPrivate::DeleteRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, DeleteRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRoomRequest
 * class' copy constructor.
 */
DeleteRoomRequestPrivate::DeleteRoomRequestPrivate(
    const DeleteRoomRequestPrivate &other, DeleteRoomRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
