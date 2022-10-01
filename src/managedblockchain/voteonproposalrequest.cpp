// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "voteonproposalrequest.h"
#include "voteonproposalrequest_p.h"
#include "voteonproposalresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::VoteOnProposalRequest
 * \brief The VoteOnProposalRequest class provides an interface for ManagedBlockchain VoteOnProposal requests.
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
 * \sa ManagedBlockchainClient::voteOnProposal
 */

/*!
 * Constructs a copy of \a other.
 */
VoteOnProposalRequest::VoteOnProposalRequest(const VoteOnProposalRequest &other)
    : ManagedBlockchainRequest(new VoteOnProposalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VoteOnProposalRequest object.
 */
VoteOnProposalRequest::VoteOnProposalRequest()
    : ManagedBlockchainRequest(new VoteOnProposalRequestPrivate(ManagedBlockchainRequest::VoteOnProposalAction, this))
{

}

/*!
 * \reimp
 */
bool VoteOnProposalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VoteOnProposalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VoteOnProposalRequest::response(QNetworkReply * const reply) const
{
    return new VoteOnProposalResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::VoteOnProposalRequestPrivate
 * \brief The VoteOnProposalRequestPrivate class provides private implementation for VoteOnProposalRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a VoteOnProposalRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
VoteOnProposalRequestPrivate::VoteOnProposalRequestPrivate(
    const ManagedBlockchainRequest::Action action, VoteOnProposalRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VoteOnProposalRequest
 * class' copy constructor.
 */
VoteOnProposalRequestPrivate::VoteOnProposalRequestPrivate(
    const VoteOnProposalRequestPrivate &other, VoteOnProposalRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
