// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setriskconfigurationrequest.h"
#include "setriskconfigurationrequest_p.h"
#include "setriskconfigurationresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SetRiskConfigurationRequest
 * \brief The SetRiskConfigurationRequest class provides an interface for CognitoIdentityProvider SetRiskConfiguration requests.
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
 * \sa CognitoIdentityProviderClient::setRiskConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
SetRiskConfigurationRequest::SetRiskConfigurationRequest(const SetRiskConfigurationRequest &other)
    : CognitoIdentityProviderRequest(new SetRiskConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetRiskConfigurationRequest object.
 */
SetRiskConfigurationRequest::SetRiskConfigurationRequest()
    : CognitoIdentityProviderRequest(new SetRiskConfigurationRequestPrivate(CognitoIdentityProviderRequest::SetRiskConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool SetRiskConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetRiskConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetRiskConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new SetRiskConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::SetRiskConfigurationRequestPrivate
 * \brief The SetRiskConfigurationRequestPrivate class provides private implementation for SetRiskConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SetRiskConfigurationRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
SetRiskConfigurationRequestPrivate::SetRiskConfigurationRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, SetRiskConfigurationRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetRiskConfigurationRequest
 * class' copy constructor.
 */
SetRiskConfigurationRequestPrivate::SetRiskConfigurationRequestPrivate(
    const SetRiskConfigurationRequestPrivate &other, SetRiskConfigurationRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
