// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminrespondtoauthchallengerequest.h"
#include "adminrespondtoauthchallengerequest_p.h"
#include "adminrespondtoauthchallengeresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRespondToAuthChallengeRequest
 * \brief The AdminRespondToAuthChallengeRequest class provides an interface for CognitoIdentityProvider AdminRespondToAuthChallenge requests.
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
 * \sa CognitoIdentityProviderClient::adminRespondToAuthChallenge
 */

/*!
 * Constructs a copy of \a other.
 */
AdminRespondToAuthChallengeRequest::AdminRespondToAuthChallengeRequest(const AdminRespondToAuthChallengeRequest &other)
    : CognitoIdentityProviderRequest(new AdminRespondToAuthChallengeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminRespondToAuthChallengeRequest object.
 */
AdminRespondToAuthChallengeRequest::AdminRespondToAuthChallengeRequest()
    : CognitoIdentityProviderRequest(new AdminRespondToAuthChallengeRequestPrivate(CognitoIdentityProviderRequest::AdminRespondToAuthChallengeAction, this))
{

}

/*!
 * \reimp
 */
bool AdminRespondToAuthChallengeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminRespondToAuthChallengeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminRespondToAuthChallengeRequest::response(QNetworkReply * const reply) const
{
    return new AdminRespondToAuthChallengeResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRespondToAuthChallengeRequestPrivate
 * \brief The AdminRespondToAuthChallengeRequestPrivate class provides private implementation for AdminRespondToAuthChallengeRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminRespondToAuthChallengeRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminRespondToAuthChallengeRequestPrivate::AdminRespondToAuthChallengeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminRespondToAuthChallengeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminRespondToAuthChallengeRequest
 * class' copy constructor.
 */
AdminRespondToAuthChallengeRequestPrivate::AdminRespondToAuthChallengeRequestPrivate(
    const AdminRespondToAuthChallengeRequestPrivate &other, AdminRespondToAuthChallengeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
