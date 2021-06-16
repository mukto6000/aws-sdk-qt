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

#include "updateexperimentrequest.h"
#include "updateexperimentrequest_p.h"
#include "updateexperimentresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateExperimentRequest
 * \brief The UpdateExperimentRequest class provides an interface for SageMaker UpdateExperiment requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::updateExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateExperimentRequest::UpdateExperimentRequest(const UpdateExperimentRequest &other)
    : SageMakerRequest(new UpdateExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateExperimentRequest object.
 */
UpdateExperimentRequest::UpdateExperimentRequest()
    : SageMakerRequest(new UpdateExperimentRequestPrivate(SageMakerRequest::UpdateExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateExperimentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateExperimentRequestPrivate
 * \brief The UpdateExperimentRequestPrivate class provides private implementation for UpdateExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateExperimentRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateExperimentRequestPrivate::UpdateExperimentRequestPrivate(
    const SageMakerRequest::Action action, UpdateExperimentRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateExperimentRequest
 * class' copy constructor.
 */
UpdateExperimentRequestPrivate::UpdateExperimentRequestPrivate(
    const UpdateExperimentRequestPrivate &other, UpdateExperimentRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
