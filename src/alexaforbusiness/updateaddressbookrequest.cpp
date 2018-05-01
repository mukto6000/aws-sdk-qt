/*
    Copyright 2013-2018 Paul Colby

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

#include "updateaddressbookrequest.h"
#include "updateaddressbookrequest_p.h"
#include "updateaddressbookresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateAddressBookRequest
 * \brief The UpdateAddressBookRequest class provides an interface for AlexaForBusiness UpdateAddressBook requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need for managing Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware
 *  voice skills using the Alexa Skills Kit and the Alexa for Business API operations. You can make also these available as
 *  private skills for your organization. Alexa for Business makes it easy to voice-enable your products and services,
 *  providing context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::updateAddressBook
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAddressBookRequest::UpdateAddressBookRequest(const UpdateAddressBookRequest &other)
    : AlexaForBusinessRequest(new UpdateAddressBookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAddressBookRequest object.
 */
UpdateAddressBookRequest::UpdateAddressBookRequest()
    : AlexaForBusinessRequest(new UpdateAddressBookRequestPrivate(AlexaForBusinessRequest::UpdateAddressBookAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAddressBookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAddressBookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAddressBookRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAddressBookResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateAddressBookRequestPrivate
 * \brief The UpdateAddressBookRequestPrivate class provides private implementation for UpdateAddressBookRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateAddressBookRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateAddressBookRequestPrivate::UpdateAddressBookRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAddressBookRequest
 * class' copy constructor.
 */
UpdateAddressBookRequestPrivate::UpdateAddressBookRequestPrivate(
    const UpdateAddressBookRequestPrivate &other, UpdateAddressBookRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
