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

#include "attachuserpolicyrequest.h"
#include "attachuserpolicyrequest_p.h"
#include "attachuserpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::AttachUserPolicyRequest
 * \brief The AttachUserPolicyRequest class provides an interface for Iam AttachUserPolicy requests.
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
 * \sa IamClient::attachUserPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
AttachUserPolicyRequest::AttachUserPolicyRequest(const AttachUserPolicyRequest &other)
    : IamRequest(new AttachUserPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachUserPolicyRequest object.
 */
AttachUserPolicyRequest::AttachUserPolicyRequest()
    : IamRequest(new AttachUserPolicyRequestPrivate(IamRequest::AttachUserPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool AttachUserPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachUserPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachUserPolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachUserPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::AttachUserPolicyRequestPrivate
 * \brief The AttachUserPolicyRequestPrivate class provides private implementation for AttachUserPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a AttachUserPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
AttachUserPolicyRequestPrivate::AttachUserPolicyRequestPrivate(
    const IamRequest::Action action, AttachUserPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachUserPolicyRequest
 * class' copy constructor.
 */
AttachUserPolicyRequestPrivate::AttachUserPolicyRequestPrivate(
    const AttachUserPolicyRequestPrivate &other, AttachUserPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
