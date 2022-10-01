// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemonitoringschedulerequest.h"
#include "deletemonitoringschedulerequest_p.h"
#include "deletemonitoringscheduleresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteMonitoringScheduleRequest
 * \brief The DeleteMonitoringScheduleRequest class provides an interface for SageMaker DeleteMonitoringSchedule requests.
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
 * \sa SageMakerClient::deleteMonitoringSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMonitoringScheduleRequest::DeleteMonitoringScheduleRequest(const DeleteMonitoringScheduleRequest &other)
    : SageMakerRequest(new DeleteMonitoringScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMonitoringScheduleRequest object.
 */
DeleteMonitoringScheduleRequest::DeleteMonitoringScheduleRequest()
    : SageMakerRequest(new DeleteMonitoringScheduleRequestPrivate(SageMakerRequest::DeleteMonitoringScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMonitoringScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMonitoringScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMonitoringScheduleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMonitoringScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteMonitoringScheduleRequestPrivate
 * \brief The DeleteMonitoringScheduleRequestPrivate class provides private implementation for DeleteMonitoringScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteMonitoringScheduleRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteMonitoringScheduleRequestPrivate::DeleteMonitoringScheduleRequestPrivate(
    const SageMakerRequest::Action action, DeleteMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMonitoringScheduleRequest
 * class' copy constructor.
 */
DeleteMonitoringScheduleRequestPrivate::DeleteMonitoringScheduleRequestPrivate(
    const DeleteMonitoringScheduleRequestPrivate &other, DeleteMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
