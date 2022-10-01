// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaddressbookrequest.h"
#include "deleteaddressbookrequest_p.h"
#include "deleteaddressbookresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteAddressBookRequest
 * \brief The DeleteAddressBookRequest class provides an interface for AlexaForBusiness DeleteAddressBook requests.
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
 * \sa AlexaForBusinessClient::deleteAddressBook
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAddressBookRequest::DeleteAddressBookRequest(const DeleteAddressBookRequest &other)
    : AlexaForBusinessRequest(new DeleteAddressBookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAddressBookRequest object.
 */
DeleteAddressBookRequest::DeleteAddressBookRequest()
    : AlexaForBusinessRequest(new DeleteAddressBookRequestPrivate(AlexaForBusinessRequest::DeleteAddressBookAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAddressBookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAddressBookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAddressBookRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAddressBookResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteAddressBookRequestPrivate
 * \brief The DeleteAddressBookRequestPrivate class provides private implementation for DeleteAddressBookRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteAddressBookRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
DeleteAddressBookRequestPrivate::DeleteAddressBookRequestPrivate(
    const AlexaForBusinessRequest::Action action, DeleteAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAddressBookRequest
 * class' copy constructor.
 */
DeleteAddressBookRequestPrivate::DeleteAddressBookRequestPrivate(
    const DeleteAddressBookRequestPrivate &other, DeleteAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
