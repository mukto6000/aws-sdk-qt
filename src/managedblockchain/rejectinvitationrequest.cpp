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

#include "rejectinvitationrequest.h"
#include "rejectinvitationrequest_p.h"
#include "rejectinvitationresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::RejectInvitationRequest
 * \brief The RejectInvitationRequest class provides an interface for ManagedBlockchain RejectInvitation requests.
 *
 * \inmodule QtAwsManagedBlockchain
 *
 *  <p/>
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central authority. Currently, Managed Blockchain supports
 *  the Hyperledger Fabric open source framework.
 *
 * \sa ManagedBlockchainClient::rejectInvitation
 */

/*!
 * Constructs a copy of \a other.
 */
RejectInvitationRequest::RejectInvitationRequest(const RejectInvitationRequest &other)
    : ManagedBlockchainRequest(new RejectInvitationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectInvitationRequest object.
 */
RejectInvitationRequest::RejectInvitationRequest()
    : ManagedBlockchainRequest(new RejectInvitationRequestPrivate(ManagedBlockchainRequest::RejectInvitationAction, this))
{

}

/*!
 * \reimp
 */
bool RejectInvitationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectInvitationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectInvitationRequest::response(QNetworkReply * const reply) const
{
    return new RejectInvitationResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::RejectInvitationRequestPrivate
 * \brief The RejectInvitationRequestPrivate class provides private implementation for RejectInvitationRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a RejectInvitationRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
RejectInvitationRequestPrivate::RejectInvitationRequestPrivate(
    const ManagedBlockchainRequest::Action action, RejectInvitationRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectInvitationRequest
 * class' copy constructor.
 */
RejectInvitationRequestPrivate::RejectInvitationRequestPrivate(
    const RejectInvitationRequestPrivate &other, RejectInvitationRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
