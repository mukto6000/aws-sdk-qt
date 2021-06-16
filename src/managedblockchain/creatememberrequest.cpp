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

#include "creatememberrequest.h"
#include "creatememberrequest_p.h"
#include "creatememberresponse.h"
#include "managedblockchainrequest_p.h"

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::CreateMemberRequest
 * \brief The CreateMemberRequest class provides an interface for ManagedBlockchain CreateMember requests.
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
 * \sa ManagedBlockchainClient::createMember
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMemberRequest::CreateMemberRequest(const CreateMemberRequest &other)
    : ManagedBlockchainRequest(new CreateMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMemberRequest object.
 */
CreateMemberRequest::CreateMemberRequest()
    : ManagedBlockchainRequest(new CreateMemberRequestPrivate(ManagedBlockchainRequest::CreateMemberAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMemberRequest::response(QNetworkReply * const reply) const
{
    return new CreateMemberResponse(*this, reply);
}

/*!
 * \class QtAws::ManagedBlockchain::CreateMemberRequestPrivate
 * \brief The CreateMemberRequestPrivate class provides private implementation for CreateMemberRequest.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a CreateMemberRequestPrivate object for ManagedBlockchain \a action,
 * with public implementation \a q.
 */
CreateMemberRequestPrivate::CreateMemberRequestPrivate(
    const ManagedBlockchainRequest::Action action, CreateMemberRequest * const q)
    : ManagedBlockchainRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMemberRequest
 * class' copy constructor.
 */
CreateMemberRequestPrivate::CreateMemberRequestPrivate(
    const CreateMemberRequestPrivate &other, CreateMemberRequest * const q)
    : ManagedBlockchainRequestPrivate(other, q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
