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

#include "listattachmentsrequest.h"
#include "listattachmentsrequest_p.h"
#include "listattachmentsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListAttachmentsRequest
 * \brief The ListAttachmentsRequest class provides an interface for NetworkManager ListAttachments requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listAttachments
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttachmentsRequest::ListAttachmentsRequest(const ListAttachmentsRequest &other)
    : NetworkManagerRequest(new ListAttachmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttachmentsRequest object.
 */
ListAttachmentsRequest::ListAttachmentsRequest()
    : NetworkManagerRequest(new ListAttachmentsRequestPrivate(NetworkManagerRequest::ListAttachmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttachmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttachmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttachmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListAttachmentsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::ListAttachmentsRequestPrivate
 * \brief The ListAttachmentsRequestPrivate class provides private implementation for ListAttachmentsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListAttachmentsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
ListAttachmentsRequestPrivate::ListAttachmentsRequestPrivate(
    const NetworkManagerRequest::Action action, ListAttachmentsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttachmentsRequest
 * class' copy constructor.
 */
ListAttachmentsRequestPrivate::ListAttachmentsRequestPrivate(
    const ListAttachmentsRequestPrivate &other, ListAttachmentsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
