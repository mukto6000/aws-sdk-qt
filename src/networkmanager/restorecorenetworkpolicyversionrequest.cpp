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

#include "restorecorenetworkpolicyversionrequest.h"
#include "restorecorenetworkpolicyversionrequest_p.h"
#include "restorecorenetworkpolicyversionresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::RestoreCoreNetworkPolicyVersionRequest
 * \brief The RestoreCoreNetworkPolicyVersionRequest class provides an interface for NetworkManager RestoreCoreNetworkPolicyVersion requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::restoreCoreNetworkPolicyVersion
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreCoreNetworkPolicyVersionRequest::RestoreCoreNetworkPolicyVersionRequest(const RestoreCoreNetworkPolicyVersionRequest &other)
    : NetworkManagerRequest(new RestoreCoreNetworkPolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreCoreNetworkPolicyVersionRequest object.
 */
RestoreCoreNetworkPolicyVersionRequest::RestoreCoreNetworkPolicyVersionRequest()
    : NetworkManagerRequest(new RestoreCoreNetworkPolicyVersionRequestPrivate(NetworkManagerRequest::RestoreCoreNetworkPolicyVersionAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreCoreNetworkPolicyVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreCoreNetworkPolicyVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreCoreNetworkPolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new RestoreCoreNetworkPolicyVersionResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::RestoreCoreNetworkPolicyVersionRequestPrivate
 * \brief The RestoreCoreNetworkPolicyVersionRequestPrivate class provides private implementation for RestoreCoreNetworkPolicyVersionRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a RestoreCoreNetworkPolicyVersionRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
RestoreCoreNetworkPolicyVersionRequestPrivate::RestoreCoreNetworkPolicyVersionRequestPrivate(
    const NetworkManagerRequest::Action action, RestoreCoreNetworkPolicyVersionRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreCoreNetworkPolicyVersionRequest
 * class' copy constructor.
 */
RestoreCoreNetworkPolicyVersionRequestPrivate::RestoreCoreNetworkPolicyVersionRequestPrivate(
    const RestoreCoreNetworkPolicyVersionRequestPrivate &other, RestoreCoreNetworkPolicyVersionRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
