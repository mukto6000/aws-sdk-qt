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

#include "deletedevicefleetrequest.h"
#include "deletedevicefleetrequest_p.h"
#include "deletedevicefleetresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteDeviceFleetRequest
 * \brief The DeleteDeviceFleetRequest class provides an interface for SageMaker DeleteDeviceFleet requests.
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
 * \sa SageMakerClient::deleteDeviceFleet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeviceFleetRequest::DeleteDeviceFleetRequest(const DeleteDeviceFleetRequest &other)
    : SageMakerRequest(new DeleteDeviceFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeviceFleetRequest object.
 */
DeleteDeviceFleetRequest::DeleteDeviceFleetRequest()
    : SageMakerRequest(new DeleteDeviceFleetRequestPrivate(SageMakerRequest::DeleteDeviceFleetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeviceFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDeviceFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeviceFleetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeviceFleetResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteDeviceFleetRequestPrivate
 * \brief The DeleteDeviceFleetRequestPrivate class provides private implementation for DeleteDeviceFleetRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteDeviceFleetRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteDeviceFleetRequestPrivate::DeleteDeviceFleetRequestPrivate(
    const SageMakerRequest::Action action, DeleteDeviceFleetRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeviceFleetRequest
 * class' copy constructor.
 */
DeleteDeviceFleetRequestPrivate::DeleteDeviceFleetRequestPrivate(
    const DeleteDeviceFleetRequestPrivate &other, DeleteDeviceFleetRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
