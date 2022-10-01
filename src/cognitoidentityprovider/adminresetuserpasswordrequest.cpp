// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminresetuserpasswordrequest.h"
#include "adminresetuserpasswordrequest_p.h"
#include "adminresetuserpasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminResetUserPasswordRequest
 * \brief The AdminResetUserPasswordRequest class provides an interface for CognitoIdentityProvider AdminResetUserPassword requests.
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
 * \sa CognitoIdentityProviderClient::adminResetUserPassword
 */

/*!
 * Constructs a copy of \a other.
 */
AdminResetUserPasswordRequest::AdminResetUserPasswordRequest(const AdminResetUserPasswordRequest &other)
    : CognitoIdentityProviderRequest(new AdminResetUserPasswordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminResetUserPasswordRequest object.
 */
AdminResetUserPasswordRequest::AdminResetUserPasswordRequest()
    : CognitoIdentityProviderRequest(new AdminResetUserPasswordRequestPrivate(CognitoIdentityProviderRequest::AdminResetUserPasswordAction, this))
{

}

/*!
 * \reimp
 */
bool AdminResetUserPasswordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminResetUserPasswordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminResetUserPasswordRequest::response(QNetworkReply * const reply) const
{
    return new AdminResetUserPasswordResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminResetUserPasswordRequestPrivate
 * \brief The AdminResetUserPasswordRequestPrivate class provides private implementation for AdminResetUserPasswordRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminResetUserPasswordRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminResetUserPasswordRequestPrivate::AdminResetUserPasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminResetUserPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminResetUserPasswordRequest
 * class' copy constructor.
 */
AdminResetUserPasswordRequestPrivate::AdminResetUserPasswordRequestPrivate(
    const AdminResetUserPasswordRequestPrivate &other, AdminResetUserPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
