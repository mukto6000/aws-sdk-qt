// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountauthorizationdetailsrequest.h"
#include "getaccountauthorizationdetailsrequest_p.h"
#include "getaccountauthorizationdetailsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetAccountAuthorizationDetailsRequest
 * \brief The GetAccountAuthorizationDetailsRequest class provides an interface for Iam GetAccountAuthorizationDetails requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::getAccountAuthorizationDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountAuthorizationDetailsRequest::GetAccountAuthorizationDetailsRequest(const GetAccountAuthorizationDetailsRequest &other)
    : IamRequest(new GetAccountAuthorizationDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountAuthorizationDetailsRequest object.
 */
GetAccountAuthorizationDetailsRequest::GetAccountAuthorizationDetailsRequest()
    : IamRequest(new GetAccountAuthorizationDetailsRequestPrivate(IamRequest::GetAccountAuthorizationDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountAuthorizationDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountAuthorizationDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountAuthorizationDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountAuthorizationDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetAccountAuthorizationDetailsRequestPrivate
 * \brief The GetAccountAuthorizationDetailsRequestPrivate class provides private implementation for GetAccountAuthorizationDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetAccountAuthorizationDetailsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetAccountAuthorizationDetailsRequestPrivate::GetAccountAuthorizationDetailsRequestPrivate(
    const IamRequest::Action action, GetAccountAuthorizationDetailsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountAuthorizationDetailsRequest
 * class' copy constructor.
 */
GetAccountAuthorizationDetailsRequestPrivate::GetAccountAuthorizationDetailsRequestPrivate(
    const GetAccountAuthorizationDetailsRequestPrivate &other, GetAccountAuthorizationDetailsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
