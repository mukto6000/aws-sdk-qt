// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminupdateuserattributesrequest.h"
#include "adminupdateuserattributesrequest_p.h"
#include "adminupdateuserattributesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateUserAttributesRequest
 * \brief The AdminUpdateUserAttributesRequest class provides an interface for CognitoIdentityProvider AdminUpdateUserAttributes requests.
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
 * \sa CognitoIdentityProviderClient::adminUpdateUserAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
AdminUpdateUserAttributesRequest::AdminUpdateUserAttributesRequest(const AdminUpdateUserAttributesRequest &other)
    : CognitoIdentityProviderRequest(new AdminUpdateUserAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminUpdateUserAttributesRequest object.
 */
AdminUpdateUserAttributesRequest::AdminUpdateUserAttributesRequest()
    : CognitoIdentityProviderRequest(new AdminUpdateUserAttributesRequestPrivate(CognitoIdentityProviderRequest::AdminUpdateUserAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool AdminUpdateUserAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminUpdateUserAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminUpdateUserAttributesRequest::response(QNetworkReply * const reply) const
{
    return new AdminUpdateUserAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateUserAttributesRequestPrivate
 * \brief The AdminUpdateUserAttributesRequestPrivate class provides private implementation for AdminUpdateUserAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminUpdateUserAttributesRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminUpdateUserAttributesRequestPrivate::AdminUpdateUserAttributesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminUpdateUserAttributesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminUpdateUserAttributesRequest
 * class' copy constructor.
 */
AdminUpdateUserAttributesRequestPrivate::AdminUpdateUserAttributesRequestPrivate(
    const AdminUpdateUserAttributesRequestPrivate &other, AdminUpdateUserAttributesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
