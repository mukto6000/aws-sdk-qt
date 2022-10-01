// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
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
