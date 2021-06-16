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

#include "listnodesrequest.h"
#include "listnodesrequest_p.h"
#include "listnodesresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ListNodesRequest
 * \brief The ListNodesRequest class provides an interface for ManagedBlockchain ListNodes requests.
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
 * \sa ManagedBlockchainClient::listNodes
 */

/*!
 * Constructs a copy of \a other.
 */
ListNodesRequest::ListNodesRequest(const ListNodesRequest &other)
    : ManagedBlockchainRequest(new ListNodesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNodesRequest object.
 */
ListNodesRequest::ListNodesRequest()
    : ManagedBlockchainRequest(new ListNodesRequestPrivate(ManagedBlockchainRequest::ListNodesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNodesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNodesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNodesRequest::response(QNetworkReply * const reply) const
{
    return new ListNodesResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::ListNodesRequestPrivate
 * \brief The ListNodesRequestPrivate class provides private implementation for ListNodesRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ListNodesRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
ListNodesRequestPrivate::ListNodesRequestPrivate(
    const ManagedBlockchainRequest::Action action, ListNodesRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNodesRequest
 * class' copy constructor.
 */
ListNodesRequestPrivate::ListNodesRequestPrivate(
    const ListNodesRequestPrivate &other, ListNodesRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
