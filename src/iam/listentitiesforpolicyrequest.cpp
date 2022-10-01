// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitiesforpolicyrequest.h"
#include "listentitiesforpolicyrequest_p.h"
#include "listentitiesforpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListEntitiesForPolicyRequest
 * \brief The ListEntitiesForPolicyRequest class provides an interface for Iam ListEntitiesForPolicy requests.
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
 * \sa IamClient::listEntitiesForPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
ListEntitiesForPolicyRequest::ListEntitiesForPolicyRequest(const ListEntitiesForPolicyRequest &other)
    : IamRequest(new ListEntitiesForPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEntitiesForPolicyRequest object.
 */
ListEntitiesForPolicyRequest::ListEntitiesForPolicyRequest()
    : IamRequest(new ListEntitiesForPolicyRequestPrivate(IamRequest::ListEntitiesForPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool ListEntitiesForPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEntitiesForPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEntitiesForPolicyRequest::response(QNetworkReply * const reply) const
{
    return new ListEntitiesForPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListEntitiesForPolicyRequestPrivate
 * \brief The ListEntitiesForPolicyRequestPrivate class provides private implementation for ListEntitiesForPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListEntitiesForPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListEntitiesForPolicyRequestPrivate::ListEntitiesForPolicyRequestPrivate(
    const IamRequest::Action action, ListEntitiesForPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEntitiesForPolicyRequest
 * class' copy constructor.
 */
ListEntitiesForPolicyRequestPrivate::ListEntitiesForPolicyRequestPrivate(
    const ListEntitiesForPolicyRequestPrivate &other, ListEntitiesForPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
