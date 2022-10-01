// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinstanceprofilerequest.h"
#include "createinstanceprofilerequest_p.h"
#include "createinstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateInstanceProfileRequest
 * \brief The CreateInstanceProfileRequest class provides an interface for Iam CreateInstanceProfile requests.
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
 * \sa IamClient::createInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInstanceProfileRequest::CreateInstanceProfileRequest(const CreateInstanceProfileRequest &other)
    : IamRequest(new CreateInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInstanceProfileRequest object.
 */
CreateInstanceProfileRequest::CreateInstanceProfileRequest()
    : IamRequest(new CreateInstanceProfileRequestPrivate(IamRequest::CreateInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreateInstanceProfileRequestPrivate
 * \brief The CreateInstanceProfileRequestPrivate class provides private implementation for CreateInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateInstanceProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreateInstanceProfileRequestPrivate::CreateInstanceProfileRequestPrivate(
    const IamRequest::Action action, CreateInstanceProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInstanceProfileRequest
 * class' copy constructor.
 */
CreateInstanceProfileRequestPrivate::CreateInstanceProfileRequestPrivate(
    const CreateInstanceProfileRequestPrivate &other, CreateInstanceProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
