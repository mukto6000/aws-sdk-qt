// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontextrequest.h"
#include "deletecontextrequest_p.h"
#include "deletecontextresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteContextRequest
 * \brief The DeleteContextRequest class provides an interface for SageMaker DeleteContext requests.
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
 * \sa SageMakerClient::deleteContext
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteContextRequest::DeleteContextRequest(const DeleteContextRequest &other)
    : SageMakerRequest(new DeleteContextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteContextRequest object.
 */
DeleteContextRequest::DeleteContextRequest()
    : SageMakerRequest(new DeleteContextRequestPrivate(SageMakerRequest::DeleteContextAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteContextRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteContextResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContextRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContextResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteContextRequestPrivate
 * \brief The DeleteContextRequestPrivate class provides private implementation for DeleteContextRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteContextRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteContextRequestPrivate::DeleteContextRequestPrivate(
    const SageMakerRequest::Action action, DeleteContextRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteContextRequest
 * class' copy constructor.
 */
DeleteContextRequestPrivate::DeleteContextRequestPrivate(
    const DeleteContextRequestPrivate &other, DeleteContextRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
