// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "admindisableuserrequest.h"
#include "admindisableuserrequest_p.h"
#include "admindisableuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableUserRequest
 * \brief The AdminDisableUserRequest class provides an interface for CognitoIdentityProvider AdminDisableUser requests.
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
 * \sa CognitoIdentityProviderClient::adminDisableUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminDisableUserRequest::AdminDisableUserRequest(const AdminDisableUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminDisableUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminDisableUserRequest object.
 */
AdminDisableUserRequest::AdminDisableUserRequest()
    : CognitoIdentityProviderRequest(new AdminDisableUserRequestPrivate(CognitoIdentityProviderRequest::AdminDisableUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminDisableUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminDisableUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminDisableUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminDisableUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableUserRequestPrivate
 * \brief The AdminDisableUserRequestPrivate class provides private implementation for AdminDisableUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDisableUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminDisableUserRequestPrivate::AdminDisableUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminDisableUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminDisableUserRequest
 * class' copy constructor.
 */
AdminDisableUserRequestPrivate::AdminDisableUserRequestPrivate(
    const AdminDisableUserRequestPrivate &other, AdminDisableUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
