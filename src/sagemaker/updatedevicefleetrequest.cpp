// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevicefleetrequest.h"
#include "updatedevicefleetrequest_p.h"
#include "updatedevicefleetresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateDeviceFleetRequest
 * \brief The UpdateDeviceFleetRequest class provides an interface for SageMaker UpdateDeviceFleet requests.
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
 * \sa SageMakerClient::updateDeviceFleet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeviceFleetRequest::UpdateDeviceFleetRequest(const UpdateDeviceFleetRequest &other)
    : SageMakerRequest(new UpdateDeviceFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeviceFleetRequest object.
 */
UpdateDeviceFleetRequest::UpdateDeviceFleetRequest()
    : SageMakerRequest(new UpdateDeviceFleetRequestPrivate(SageMakerRequest::UpdateDeviceFleetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeviceFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceFleetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceFleetResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateDeviceFleetRequestPrivate
 * \brief The UpdateDeviceFleetRequestPrivate class provides private implementation for UpdateDeviceFleetRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateDeviceFleetRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateDeviceFleetRequestPrivate::UpdateDeviceFleetRequestPrivate(
    const SageMakerRequest::Action action, UpdateDeviceFleetRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceFleetRequest
 * class' copy constructor.
 */
UpdateDeviceFleetRequestPrivate::UpdateDeviceFleetRequestPrivate(
    const UpdateDeviceFleetRequestPrivate &other, UpdateDeviceFleetRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
