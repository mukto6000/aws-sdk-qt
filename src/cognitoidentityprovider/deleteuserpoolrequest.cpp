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

#include "deleteuserpoolrequest.h"
#include "deleteuserpoolrequest_p.h"
#include "deleteuserpoolresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolRequest
 * \brief The DeleteUserPoolRequest class provides an interface for CognitoIdentityProvider DeleteUserPool requests.
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
 * \sa CognitoIdentityProviderClient::deleteUserPool
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserPoolRequest::DeleteUserPoolRequest(const DeleteUserPoolRequest &other)
    : CognitoIdentityProviderRequest(new DeleteUserPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserPoolRequest object.
 */
DeleteUserPoolRequest::DeleteUserPoolRequest()
    : CognitoIdentityProviderRequest(new DeleteUserPoolRequestPrivate(CognitoIdentityProviderRequest::DeleteUserPoolAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserPoolRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserPoolResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolRequestPrivate
 * \brief The DeleteUserPoolRequestPrivate class provides private implementation for DeleteUserPoolRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserPoolRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DeleteUserPoolRequestPrivate::DeleteUserPoolRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserPoolRequest
 * class' copy constructor.
 */
DeleteUserPoolRequestPrivate::DeleteUserPoolRequestPrivate(
    const DeleteUserPoolRequestPrivate &other, DeleteUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
