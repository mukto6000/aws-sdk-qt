// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detachrolepolicyrequest.h"
#include "detachrolepolicyrequest_p.h"
#include "detachrolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DetachRolePolicyRequest
 * \brief The DetachRolePolicyRequest class provides an interface for Iam DetachRolePolicy requests.
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
 * \sa IamClient::detachRolePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DetachRolePolicyRequest::DetachRolePolicyRequest(const DetachRolePolicyRequest &other)
    : IamRequest(new DetachRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachRolePolicyRequest object.
 */
DetachRolePolicyRequest::DetachRolePolicyRequest()
    : IamRequest(new DetachRolePolicyRequestPrivate(IamRequest::DetachRolePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DetachRolePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachRolePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DetachRolePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DetachRolePolicyRequestPrivate
 * \brief The DetachRolePolicyRequestPrivate class provides private implementation for DetachRolePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DetachRolePolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DetachRolePolicyRequestPrivate::DetachRolePolicyRequestPrivate(
    const IamRequest::Action action, DetachRolePolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachRolePolicyRequest
 * class' copy constructor.
 */
DetachRolePolicyRequestPrivate::DetachRolePolicyRequestPrivate(
    const DetachRolePolicyRequestPrivate &other, DetachRolePolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
