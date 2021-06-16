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

#include "listusersingrouprequest.h"
#include "listusersingrouprequest_p.h"
#include "listusersingroupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUsersInGroupRequest
 * \brief The ListUsersInGroupRequest class provides an interface for CognitoIdentityProvider ListUsersInGroup requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::listUsersInGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ListUsersInGroupRequest::ListUsersInGroupRequest(const ListUsersInGroupRequest &other)
    : CognitoIdentityProviderRequest(new ListUsersInGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUsersInGroupRequest object.
 */
ListUsersInGroupRequest::ListUsersInGroupRequest()
    : CognitoIdentityProviderRequest(new ListUsersInGroupRequestPrivate(CognitoIdentityProviderRequest::ListUsersInGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ListUsersInGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUsersInGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUsersInGroupRequest::response(QNetworkReply * const reply) const
{
    return new ListUsersInGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListUsersInGroupRequestPrivate
 * \brief The ListUsersInGroupRequestPrivate class provides private implementation for ListUsersInGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListUsersInGroupRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ListUsersInGroupRequestPrivate::ListUsersInGroupRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListUsersInGroupRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUsersInGroupRequest
 * class' copy constructor.
 */
ListUsersInGroupRequestPrivate::ListUsersInGroupRequestPrivate(
    const ListUsersInGroupRequestPrivate &other, ListUsersInGroupRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
