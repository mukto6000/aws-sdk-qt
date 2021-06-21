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

#include "updatenoderequest.h"
#include "updatenoderequest_p.h"
#include "updatenoderesponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::UpdateNodeRequest
 * \brief The UpdateNodeRequest class provides an interface for ManagedBlockchain UpdateNode requests.
 *
 * \inmodule QtAwsManagedBlockchain
 *
 *  <p/>
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
 * \sa ManagedBlockchainClient::updateNode
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNodeRequest::UpdateNodeRequest(const UpdateNodeRequest &other)
    : ManagedBlockchainRequest(new UpdateNodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNodeRequest object.
 */
UpdateNodeRequest::UpdateNodeRequest()
    : ManagedBlockchainRequest(new UpdateNodeRequestPrivate(ManagedBlockchainRequest::UpdateNodeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNodeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNodeResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::UpdateNodeRequestPrivate
 * \brief The UpdateNodeRequestPrivate class provides private implementation for UpdateNodeRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a UpdateNodeRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
UpdateNodeRequestPrivate::UpdateNodeRequestPrivate(
    const ManagedBlockchainRequest::Action action, UpdateNodeRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNodeRequest
 * class' copy constructor.
 */
UpdateNodeRequestPrivate::UpdateNodeRequestPrivate(
    const UpdateNodeRequestPrivate &other, UpdateNodeRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws