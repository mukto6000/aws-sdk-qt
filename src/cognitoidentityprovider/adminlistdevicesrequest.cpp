// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminlistdevicesrequest.h"
#include "adminlistdevicesrequest_p.h"
#include "adminlistdevicesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListDevicesRequest
 * \brief The AdminListDevicesRequest class provides an interface for CognitoIdentityProvider AdminListDevices requests.
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
 * \sa CognitoIdentityProviderClient::adminListDevices
 */

/*!
 * Constructs a copy of \a other.
 */
AdminListDevicesRequest::AdminListDevicesRequest(const AdminListDevicesRequest &other)
    : CognitoIdentityProviderRequest(new AdminListDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminListDevicesRequest object.
 */
AdminListDevicesRequest::AdminListDevicesRequest()
    : CognitoIdentityProviderRequest(new AdminListDevicesRequestPrivate(CognitoIdentityProviderRequest::AdminListDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool AdminListDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminListDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminListDevicesRequest::response(QNetworkReply * const reply) const
{
    return new AdminListDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListDevicesRequestPrivate
 * \brief The AdminListDevicesRequestPrivate class provides private implementation for AdminListDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminListDevicesRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminListDevicesRequestPrivate::AdminListDevicesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminListDevicesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminListDevicesRequest
 * class' copy constructor.
 */
AdminListDevicesRequestPrivate::AdminListDevicesRequestPrivate(
    const AdminListDevicesRequestPrivate &other, AdminListDevicesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
