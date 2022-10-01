// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserprofilerequest.h"
#include "deleteuserprofilerequest_p.h"
#include "deleteuserprofileresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteUserProfileRequest
 * \brief The DeleteUserProfileRequest class provides an interface for SageMaker DeleteUserProfile requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::deleteUserProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserProfileRequest::DeleteUserProfileRequest(const DeleteUserProfileRequest &other)
    : SageMakerRequest(new DeleteUserProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserProfileRequest object.
 */
DeleteUserProfileRequest::DeleteUserProfileRequest()
    : SageMakerRequest(new DeleteUserProfileRequestPrivate(SageMakerRequest::DeleteUserProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserProfileResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteUserProfileRequestPrivate
 * \brief The DeleteUserProfileRequestPrivate class provides private implementation for DeleteUserProfileRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteUserProfileRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteUserProfileRequestPrivate::DeleteUserProfileRequestPrivate(
    const SageMakerRequest::Action action, DeleteUserProfileRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserProfileRequest
 * class' copy constructor.
 */
DeleteUserProfileRequestPrivate::DeleteUserProfileRequestPrivate(
    const DeleteUserProfileRequestPrivate &other, DeleteUserProfileRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
