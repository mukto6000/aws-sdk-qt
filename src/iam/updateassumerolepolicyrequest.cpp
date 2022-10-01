// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateassumerolepolicyrequest.h"
#include "updateassumerolepolicyrequest_p.h"
#include "updateassumerolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateAssumeRolePolicyRequest
 * \brief The UpdateAssumeRolePolicyRequest class provides an interface for Iam UpdateAssumeRolePolicy requests.
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
 * \sa IamClient::updateAssumeRolePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAssumeRolePolicyRequest::UpdateAssumeRolePolicyRequest(const UpdateAssumeRolePolicyRequest &other)
    : IamRequest(new UpdateAssumeRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAssumeRolePolicyRequest object.
 */
UpdateAssumeRolePolicyRequest::UpdateAssumeRolePolicyRequest()
    : IamRequest(new UpdateAssumeRolePolicyRequestPrivate(IamRequest::UpdateAssumeRolePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAssumeRolePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAssumeRolePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAssumeRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssumeRolePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateAssumeRolePolicyRequestPrivate
 * \brief The UpdateAssumeRolePolicyRequestPrivate class provides private implementation for UpdateAssumeRolePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateAssumeRolePolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateAssumeRolePolicyRequestPrivate::UpdateAssumeRolePolicyRequestPrivate(
    const IamRequest::Action action, UpdateAssumeRolePolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssumeRolePolicyRequest
 * class' copy constructor.
 */
UpdateAssumeRolePolicyRequestPrivate::UpdateAssumeRolePolicyRequestPrivate(
    const UpdateAssumeRolePolicyRequestPrivate &other, UpdateAssumeRolePolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
