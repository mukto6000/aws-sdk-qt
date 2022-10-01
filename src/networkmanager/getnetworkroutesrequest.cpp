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

#include "getnetworkroutesrequest.h"
#include "getnetworkroutesrequest_p.h"
#include "getnetworkroutesresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkRoutesRequest
 * \brief The GetNetworkRoutesRequest class provides an interface for NetworkManager GetNetworkRoutes requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkRoutes
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkRoutesRequest::GetNetworkRoutesRequest(const GetNetworkRoutesRequest &other)
    : NetworkManagerRequest(new GetNetworkRoutesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkRoutesRequest object.
 */
GetNetworkRoutesRequest::GetNetworkRoutesRequest()
    : NetworkManagerRequest(new GetNetworkRoutesRequestPrivate(NetworkManagerRequest::GetNetworkRoutesAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkRoutesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkRoutesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkRoutesRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkRoutesResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetNetworkRoutesRequestPrivate
 * \brief The GetNetworkRoutesRequestPrivate class provides private implementation for GetNetworkRoutesRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkRoutesRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetNetworkRoutesRequestPrivate::GetNetworkRoutesRequestPrivate(
    const NetworkManagerRequest::Action action, GetNetworkRoutesRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkRoutesRequest
 * class' copy constructor.
 */
GetNetworkRoutesRequestPrivate::GetNetworkRoutesRequestPrivate(
    const GetNetworkRoutesRequestPrivate &other, GetNetworkRoutesRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
