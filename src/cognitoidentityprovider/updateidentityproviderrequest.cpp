// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateidentityproviderrequest.h"
#include "updateidentityproviderrequest_p.h"
#include "updateidentityproviderresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateIdentityProviderRequest
 * \brief The UpdateIdentityProviderRequest class provides an interface for CognitoIdentityProvider UpdateIdentityProvider requests.
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
 * \sa CognitoIdentityProviderClient::updateIdentityProvider
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIdentityProviderRequest::UpdateIdentityProviderRequest(const UpdateIdentityProviderRequest &other)
    : CognitoIdentityProviderRequest(new UpdateIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIdentityProviderRequest object.
 */
UpdateIdentityProviderRequest::UpdateIdentityProviderRequest()
    : CognitoIdentityProviderRequest(new UpdateIdentityProviderRequestPrivate(CognitoIdentityProviderRequest::UpdateIdentityProviderAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIdentityProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIdentityProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIdentityProviderResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateIdentityProviderRequestPrivate
 * \brief The UpdateIdentityProviderRequestPrivate class provides private implementation for UpdateIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateIdentityProviderRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
UpdateIdentityProviderRequestPrivate::UpdateIdentityProviderRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIdentityProviderRequest
 * class' copy constructor.
 */
UpdateIdentityProviderRequestPrivate::UpdateIdentityProviderRequestPrivate(
    const UpdateIdentityProviderRequestPrivate &other, UpdateIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
