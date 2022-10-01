// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrolepermissionsboundaryrequest.h"
#include "putrolepermissionsboundaryrequest_p.h"
#include "putrolepermissionsboundaryresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::PutRolePermissionsBoundaryRequest
 * \brief The PutRolePermissionsBoundaryRequest class provides an interface for Iam PutRolePermissionsBoundary requests.
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
 * \sa IamClient::putRolePermissionsBoundary
 */

/*!
 * Constructs a copy of \a other.
 */
PutRolePermissionsBoundaryRequest::PutRolePermissionsBoundaryRequest(const PutRolePermissionsBoundaryRequest &other)
    : IamRequest(new PutRolePermissionsBoundaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRolePermissionsBoundaryRequest object.
 */
PutRolePermissionsBoundaryRequest::PutRolePermissionsBoundaryRequest()
    : IamRequest(new PutRolePermissionsBoundaryRequestPrivate(IamRequest::PutRolePermissionsBoundaryAction, this))
{

}

/*!
 * \reimp
 */
bool PutRolePermissionsBoundaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRolePermissionsBoundaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRolePermissionsBoundaryRequest::response(QNetworkReply * const reply) const
{
    return new PutRolePermissionsBoundaryResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::PutRolePermissionsBoundaryRequestPrivate
 * \brief The PutRolePermissionsBoundaryRequestPrivate class provides private implementation for PutRolePermissionsBoundaryRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a PutRolePermissionsBoundaryRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
PutRolePermissionsBoundaryRequestPrivate::PutRolePermissionsBoundaryRequestPrivate(
    const IamRequest::Action action, PutRolePermissionsBoundaryRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRolePermissionsBoundaryRequest
 * class' copy constructor.
 */
PutRolePermissionsBoundaryRequestPrivate::PutRolePermissionsBoundaryRequestPrivate(
    const PutRolePermissionsBoundaryRequestPrivate &other, PutRolePermissionsBoundaryRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
