// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinvitationsrequest.h"
#include "listinvitationsrequest_p.h"
#include "listinvitationsresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListInvitationsRequest
 * \brief The ListInvitationsRequest class provides an interface for ManagedBlockchain ListInvitations requests.
 *
 * \inmodule QtAwsManagedBlockchain
 *
 *  </p
 * 
 *  Amazon Managed Blockchain is a fully managed service for creating and managing blockchain networks using open-source
 *  frameworks. Blockchain allows you to build applications where multiple parties can securely and transparently run
 *  transactions and share data without the need for a trusted, central
 * 
 *  authority>
 * 
 *  Managed Blockchain supports the Hyperledger Fabric and Ethereum open-source frameworks. Because of fundamental
 *  differences between the frameworks, some API actions or data types may only apply in the context of one framework and
 *  not the other. For example, actions related to Hyperledger Fabric network members such as <code>CreateMember</code> and
 *  <code>DeleteMember</code> do not apply to
 * 
 *  Ethereum>
 * 
 *  The description for each action indicates the framework or frameworks to which it applies. Data types and properties
 *  that apply only in the context of a particular framework are similarly
 *
 * \sa ManagedBlockchainClient::listInvitations
 */

/*!
 * Constructs a copy of \a other.
 */
ListInvitationsRequest::ListInvitationsRequest(const ListInvitationsRequest &other)
    : ManagedBlockchainRequest(new ListInvitationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInvitationsRequest object.
 */
ListInvitationsRequest::ListInvitationsRequest()
    : ManagedBlockchainRequest(new ListInvitationsRequestPrivate(ManagedBlockchainRequest::ListInvitationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInvitationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInvitationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInvitationsRequest::response(QNetworkReply * const reply) const
{
    return new ListInvitationsResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::ListInvitationsRequestPrivate
 * \brief The ListInvitationsRequestPrivate class provides private implementation for ListInvitationsRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListInvitationsRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
ListInvitationsRequestPrivate::ListInvitationsRequestPrivate(
    const ManagedBlockchainRequest::Action action, ListInvitationsRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInvitationsRequest
 * class' copy constructor.
 */
ListInvitationsRequestPrivate::ListInvitationsRequestPrivate(
    const ListInvitationsRequestPrivate &other, ListInvitationsRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
