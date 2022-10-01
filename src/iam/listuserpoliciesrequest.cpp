// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuserpoliciesrequest.h"
#include "listuserpoliciesrequest_p.h"
#include "listuserpoliciesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListUserPoliciesRequest
 * \brief The ListUserPoliciesRequest class provides an interface for Iam ListUserPolicies requests.
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
 * \sa IamClient::listUserPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListUserPoliciesRequest::ListUserPoliciesRequest(const ListUserPoliciesRequest &other)
    : IamRequest(new ListUserPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUserPoliciesRequest object.
 */
ListUserPoliciesRequest::ListUserPoliciesRequest()
    : IamRequest(new ListUserPoliciesRequestPrivate(IamRequest::ListUserPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUserPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListUserPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListUserPoliciesRequestPrivate
 * \brief The ListUserPoliciesRequestPrivate class provides private implementation for ListUserPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListUserPoliciesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListUserPoliciesRequestPrivate::ListUserPoliciesRequestPrivate(
    const IamRequest::Action action, ListUserPoliciesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUserPoliciesRequest
 * class' copy constructor.
 */
ListUserPoliciesRequestPrivate::ListUserPoliciesRequestPrivate(
    const ListUserPoliciesRequestPrivate &other, ListUserPoliciesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
