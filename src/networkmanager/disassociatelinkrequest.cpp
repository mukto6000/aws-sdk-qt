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

#include "disassociatelinkrequest.h"
#include "disassociatelinkrequest_p.h"
#include "disassociatelinkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateLinkRequest
 * \brief The DisassociateLinkRequest class provides an interface for NetworkManager DisassociateLink requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::disassociateLink
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateLinkRequest::DisassociateLinkRequest(const DisassociateLinkRequest &other)
    : NetworkManagerRequest(new DisassociateLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateLinkRequest object.
 */
DisassociateLinkRequest::DisassociateLinkRequest()
    : NetworkManagerRequest(new DisassociateLinkRequestPrivate(NetworkManagerRequest::DisassociateLinkAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateLinkRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateLinkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DisassociateLinkRequestPrivate
 * \brief The DisassociateLinkRequestPrivate class provides private implementation for DisassociateLinkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateLinkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DisassociateLinkRequestPrivate::DisassociateLinkRequestPrivate(
    const NetworkManagerRequest::Action action, DisassociateLinkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateLinkRequest
 * class' copy constructor.
 */
DisassociateLinkRequestPrivate::DisassociateLinkRequestPrivate(
    const DisassociateLinkRequestPrivate &other, DisassociateLinkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
