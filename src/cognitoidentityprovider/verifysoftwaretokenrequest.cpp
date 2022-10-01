// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifysoftwaretokenrequest.h"
#include "verifysoftwaretokenrequest_p.h"
#include "verifysoftwaretokenresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::VerifySoftwareTokenRequest
 * \brief The VerifySoftwareTokenRequest class provides an interface for CognitoIdentityProvider VerifySoftwareToken requests.
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
 * \sa CognitoIdentityProviderClient::verifySoftwareToken
 */

/*!
 * Constructs a copy of \a other.
 */
VerifySoftwareTokenRequest::VerifySoftwareTokenRequest(const VerifySoftwareTokenRequest &other)
    : CognitoIdentityProviderRequest(new VerifySoftwareTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VerifySoftwareTokenRequest object.
 */
VerifySoftwareTokenRequest::VerifySoftwareTokenRequest()
    : CognitoIdentityProviderRequest(new VerifySoftwareTokenRequestPrivate(CognitoIdentityProviderRequest::VerifySoftwareTokenAction, this))
{

}

/*!
 * \reimp
 */
bool VerifySoftwareTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VerifySoftwareTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VerifySoftwareTokenRequest::response(QNetworkReply * const reply) const
{
    return new VerifySoftwareTokenResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::VerifySoftwareTokenRequestPrivate
 * \brief The VerifySoftwareTokenRequestPrivate class provides private implementation for VerifySoftwareTokenRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a VerifySoftwareTokenRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
VerifySoftwareTokenRequestPrivate::VerifySoftwareTokenRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, VerifySoftwareTokenRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VerifySoftwareTokenRequest
 * class' copy constructor.
 */
VerifySoftwareTokenRequestPrivate::VerifySoftwareTokenRequestPrivate(
    const VerifySoftwareTokenRequestPrivate &other, VerifySoftwareTokenRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
