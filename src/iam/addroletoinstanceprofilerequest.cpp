// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addroletoinstanceprofilerequest.h"
#include "addroletoinstanceprofilerequest_p.h"
#include "addroletoinstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::AddRoleToInstanceProfileRequest
 * \brief The AddRoleToInstanceProfileRequest class provides an interface for Iam AddRoleToInstanceProfile requests.
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
 * \sa IamClient::addRoleToInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
AddRoleToInstanceProfileRequest::AddRoleToInstanceProfileRequest(const AddRoleToInstanceProfileRequest &other)
    : IamRequest(new AddRoleToInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddRoleToInstanceProfileRequest object.
 */
AddRoleToInstanceProfileRequest::AddRoleToInstanceProfileRequest()
    : IamRequest(new AddRoleToInstanceProfileRequestPrivate(IamRequest::AddRoleToInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool AddRoleToInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddRoleToInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddRoleToInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new AddRoleToInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::AddRoleToInstanceProfileRequestPrivate
 * \brief The AddRoleToInstanceProfileRequestPrivate class provides private implementation for AddRoleToInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a AddRoleToInstanceProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
AddRoleToInstanceProfileRequestPrivate::AddRoleToInstanceProfileRequestPrivate(
    const IamRequest::Action action, AddRoleToInstanceProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddRoleToInstanceProfileRequest
 * class' copy constructor.
 */
AddRoleToInstanceProfileRequestPrivate::AddRoleToInstanceProfileRequestPrivate(
    const AddRoleToInstanceProfileRequestPrivate &other, AddRoleToInstanceProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
