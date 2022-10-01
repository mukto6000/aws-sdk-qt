// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifyuserattributerequest.h"
#include "verifyuserattributerequest_p.h"
#include "verifyuserattributeresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::VerifyUserAttributeRequest
 * \brief The VerifyUserAttributeRequest class provides an interface for CognitoIdentityProvider VerifyUserAttribute requests.
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
 * \sa CognitoIdentityProviderClient::verifyUserAttribute
 */

/*!
 * Constructs a copy of \a other.
 */
VerifyUserAttributeRequest::VerifyUserAttributeRequest(const VerifyUserAttributeRequest &other)
    : CognitoIdentityProviderRequest(new VerifyUserAttributeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VerifyUserAttributeRequest object.
 */
VerifyUserAttributeRequest::VerifyUserAttributeRequest()
    : CognitoIdentityProviderRequest(new VerifyUserAttributeRequestPrivate(CognitoIdentityProviderRequest::VerifyUserAttributeAction, this))
{

}

/*!
 * \reimp
 */
bool VerifyUserAttributeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VerifyUserAttributeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VerifyUserAttributeRequest::response(QNetworkReply * const reply) const
{
    return new VerifyUserAttributeResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::VerifyUserAttributeRequestPrivate
 * \brief The VerifyUserAttributeRequestPrivate class provides private implementation for VerifyUserAttributeRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a VerifyUserAttributeRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
VerifyUserAttributeRequestPrivate::VerifyUserAttributeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, VerifyUserAttributeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VerifyUserAttributeRequest
 * class' copy constructor.
 */
VerifyUserAttributeRequestPrivate::VerifyUserAttributeRequestPrivate(
    const VerifyUserAttributeRequestPrivate &other, VerifyUserAttributeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
