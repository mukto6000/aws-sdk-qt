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

#include "createhumantaskuirequest.h"
#include "createhumantaskuirequest_p.h"
#include "createhumantaskuiresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateHumanTaskUiRequest
 * \brief The CreateHumanTaskUiRequest class provides an interface for SageMaker CreateHumanTaskUi requests.
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
 * \sa SageMakerClient::createHumanTaskUi
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHumanTaskUiRequest::CreateHumanTaskUiRequest(const CreateHumanTaskUiRequest &other)
    : SageMakerRequest(new CreateHumanTaskUiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHumanTaskUiRequest object.
 */
CreateHumanTaskUiRequest::CreateHumanTaskUiRequest()
    : SageMakerRequest(new CreateHumanTaskUiRequestPrivate(SageMakerRequest::CreateHumanTaskUiAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHumanTaskUiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHumanTaskUiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHumanTaskUiRequest::response(QNetworkReply * const reply) const
{
    return new CreateHumanTaskUiResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateHumanTaskUiRequestPrivate
 * \brief The CreateHumanTaskUiRequestPrivate class provides private implementation for CreateHumanTaskUiRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateHumanTaskUiRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateHumanTaskUiRequestPrivate::CreateHumanTaskUiRequestPrivate(
    const SageMakerRequest::Action action, CreateHumanTaskUiRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHumanTaskUiRequest
 * class' copy constructor.
 */
CreateHumanTaskUiRequestPrivate::CreateHumanTaskUiRequestPrivate(
    const CreateHumanTaskUiRequestPrivate &other, CreateHumanTaskUiRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
