// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startuserimportjobrequest.h"
#include "startuserimportjobrequest_p.h"
#include "startuserimportjobresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::StartUserImportJobRequest
 * \brief The StartUserImportJobRequest class provides an interface for CognitoIdentityProvider StartUserImportJob requests.
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
 * \sa CognitoIdentityProviderClient::startUserImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartUserImportJobRequest::StartUserImportJobRequest(const StartUserImportJobRequest &other)
    : CognitoIdentityProviderRequest(new StartUserImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartUserImportJobRequest object.
 */
StartUserImportJobRequest::StartUserImportJobRequest()
    : CognitoIdentityProviderRequest(new StartUserImportJobRequestPrivate(CognitoIdentityProviderRequest::StartUserImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartUserImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartUserImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartUserImportJobRequest::response(QNetworkReply * const reply) const
{
    return new StartUserImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::StartUserImportJobRequestPrivate
 * \brief The StartUserImportJobRequestPrivate class provides private implementation for StartUserImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a StartUserImportJobRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
StartUserImportJobRequestPrivate::StartUserImportJobRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, StartUserImportJobRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartUserImportJobRequest
 * class' copy constructor.
 */
StartUserImportJobRequestPrivate::StartUserImportJobRequestPrivate(
    const StartUserImportJobRequestPrivate &other, StartUserImportJobRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
