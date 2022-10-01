// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatesoftwaretokenrequest.h"
#include "associatesoftwaretokenrequest_p.h"
#include "associatesoftwaretokenresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AssociateSoftwareTokenRequest
 * \brief The AssociateSoftwareTokenRequest class provides an interface for CognitoIdentityProvider AssociateSoftwareToken requests.
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
 * \sa CognitoIdentityProviderClient::associateSoftwareToken
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateSoftwareTokenRequest::AssociateSoftwareTokenRequest(const AssociateSoftwareTokenRequest &other)
    : CognitoIdentityProviderRequest(new AssociateSoftwareTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateSoftwareTokenRequest object.
 */
AssociateSoftwareTokenRequest::AssociateSoftwareTokenRequest()
    : CognitoIdentityProviderRequest(new AssociateSoftwareTokenRequestPrivate(CognitoIdentityProviderRequest::AssociateSoftwareTokenAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateSoftwareTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateSoftwareTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateSoftwareTokenRequest::response(QNetworkReply * const reply) const
{
    return new AssociateSoftwareTokenResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AssociateSoftwareTokenRequestPrivate
 * \brief The AssociateSoftwareTokenRequestPrivate class provides private implementation for AssociateSoftwareTokenRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AssociateSoftwareTokenRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AssociateSoftwareTokenRequestPrivate::AssociateSoftwareTokenRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AssociateSoftwareTokenRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateSoftwareTokenRequest
 * class' copy constructor.
 */
AssociateSoftwareTokenRequestPrivate::AssociateSoftwareTokenRequestPrivate(
    const AssociateSoftwareTokenRequestPrivate &other, AssociateSoftwareTokenRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
