// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpolicyversionrequest.h"
#include "createpolicyversionrequest_p.h"
#include "createpolicyversionresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreatePolicyVersionRequest
 * \brief The CreatePolicyVersionRequest class provides an interface for Iam CreatePolicyVersion requests.
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
 * \sa IamClient::createPolicyVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePolicyVersionRequest::CreatePolicyVersionRequest(const CreatePolicyVersionRequest &other)
    : IamRequest(new CreatePolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePolicyVersionRequest object.
 */
CreatePolicyVersionRequest::CreatePolicyVersionRequest()
    : IamRequest(new CreatePolicyVersionRequestPrivate(IamRequest::CreatePolicyVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePolicyVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePolicyVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreatePolicyVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreatePolicyVersionRequestPrivate
 * \brief The CreatePolicyVersionRequestPrivate class provides private implementation for CreatePolicyVersionRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreatePolicyVersionRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreatePolicyVersionRequestPrivate::CreatePolicyVersionRequestPrivate(
    const IamRequest::Action action, CreatePolicyVersionRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePolicyVersionRequest
 * class' copy constructor.
 */
CreatePolicyVersionRequestPrivate::CreatePolicyVersionRequestPrivate(
    const CreatePolicyVersionRequestPrivate &other, CreatePolicyVersionRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
