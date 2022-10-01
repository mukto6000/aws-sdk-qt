// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startnextpendingjobexecutionrequest.h"
#include "startnextpendingjobexecutionrequest_p.h"
#include "startnextpendingjobexecutionresponse.h"
#include "iotjobsdataplanerequest_p.h"

namespace QtAws {
namespace IoTJobsDataPlane {

/*!
 * \class QtAws::IoTJobsDataPlane::StartNextPendingJobExecutionRequest
 * \brief The StartNextPendingJobExecutionRequest class provides an interface for IoTJobsDataPlane StartNextPendingJobExecution requests.
 *
 * \inmodule QtAwsIoTJobsDataPlane
 *
 *  AWS IoT Jobs is a service that allows you to define a set of jobs — remote operations that are sent to and executed on
 *  one or more devices connected to AWS IoT. For example, you can define a job that instructs a set of devices to download
 *  and install application or firmware updates, reboot, rotate certificates, or perform remote troubleshooting
 * 
 *  operations>
 * 
 *  To create a job, you make a job document which is a description of the remote operations to be performed, and you
 *  specify a list of targets that should perform the operations. The targets can be individual things, thing groups or
 * 
 *  both>
 * 
 *  AWS IoT Jobs sends a message to inform the targets that a job is available. The target starts the execution of the job
 *  by downloading the job document, performing the operations it specifies, and reporting its progress to AWS IoT. The Jobs
 *  service provides commands to track the progress of a job on a specific target and for all the targets of the
 *
 * \sa IoTJobsDataPlaneClient::startNextPendingJobExecution
 */

/*!
 * Constructs a copy of \a other.
 */
StartNextPendingJobExecutionRequest::StartNextPendingJobExecutionRequest(const StartNextPendingJobExecutionRequest &other)
    : IoTJobsDataPlaneRequest(new StartNextPendingJobExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartNextPendingJobExecutionRequest object.
 */
StartNextPendingJobExecutionRequest::StartNextPendingJobExecutionRequest()
    : IoTJobsDataPlaneRequest(new StartNextPendingJobExecutionRequestPrivate(IoTJobsDataPlaneRequest::StartNextPendingJobExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool StartNextPendingJobExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartNextPendingJobExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartNextPendingJobExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartNextPendingJobExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::IoTJobsDataPlane::StartNextPendingJobExecutionRequestPrivate
 * \brief The StartNextPendingJobExecutionRequestPrivate class provides private implementation for StartNextPendingJobExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * Constructs a StartNextPendingJobExecutionRequestPrivate object for IoTJobsDataPlane \a action,
 * with public implementation \a q.
 */
StartNextPendingJobExecutionRequestPrivate::StartNextPendingJobExecutionRequestPrivate(
    const IoTJobsDataPlaneRequest::Action action, StartNextPendingJobExecutionRequest * const q)
    : IoTJobsDataPlaneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartNextPendingJobExecutionRequest
 * class' copy constructor.
 */
StartNextPendingJobExecutionRequestPrivate::StartNextPendingJobExecutionRequestPrivate(
    const StartNextPendingJobExecutionRequestPrivate &other, StartNextPendingJobExecutionRequest * const q)
    : IoTJobsDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTJobsDataPlane
} // namespace QtAws
