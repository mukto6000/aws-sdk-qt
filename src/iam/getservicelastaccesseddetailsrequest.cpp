// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicelastaccesseddetailsrequest.h"
#include "getservicelastaccesseddetailsrequest_p.h"
#include "getservicelastaccesseddetailsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetServiceLastAccessedDetailsRequest
 * \brief The GetServiceLastAccessedDetailsRequest class provides an interface for Iam GetServiceLastAccessedDetails requests.
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
 * \sa IamClient::getServiceLastAccessedDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceLastAccessedDetailsRequest::GetServiceLastAccessedDetailsRequest(const GetServiceLastAccessedDetailsRequest &other)
    : IamRequest(new GetServiceLastAccessedDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceLastAccessedDetailsRequest object.
 */
GetServiceLastAccessedDetailsRequest::GetServiceLastAccessedDetailsRequest()
    : IamRequest(new GetServiceLastAccessedDetailsRequestPrivate(IamRequest::GetServiceLastAccessedDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceLastAccessedDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceLastAccessedDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceLastAccessedDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceLastAccessedDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetServiceLastAccessedDetailsRequestPrivate
 * \brief The GetServiceLastAccessedDetailsRequestPrivate class provides private implementation for GetServiceLastAccessedDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetServiceLastAccessedDetailsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetServiceLastAccessedDetailsRequestPrivate::GetServiceLastAccessedDetailsRequestPrivate(
    const IamRequest::Action action, GetServiceLastAccessedDetailsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceLastAccessedDetailsRequest
 * class' copy constructor.
 */
GetServiceLastAccessedDetailsRequestPrivate::GetServiceLastAccessedDetailsRequestPrivate(
    const GetServiceLastAccessedDetailsRequestPrivate &other, GetServiceLastAccessedDetailsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
