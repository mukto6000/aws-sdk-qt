// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "activatepipelinerequest.h"
#include "activatepipelinerequest_p.h"
#include "activatepipelineresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::ActivatePipelineRequest
 * \brief The ActivatePipelineRequest class provides an interface for DataPipeline ActivatePipeline requests.
 *
 * \inmodule QtAwsDataPipeline
 *
 *  AWS Data Pipeline configures and manages a data-driven workflow called a pipeline. AWS Data Pipeline handles the details
 *  of scheduling and ensuring that data dependencies are met so that your application can focus on processing the
 * 
 *  data>
 * 
 *  AWS Data Pipeline provides a JAR implementation of a task runner called AWS Data Pipeline Task Runner. AWS Data Pipeline
 *  Task Runner provides logic for common data management scenarios, such as performing database queries and running data
 *  analysis using Amazon Elastic MapReduce (Amazon EMR). You can use AWS Data Pipeline Task Runner as your task runner, or
 *  you can write your own task runner to provide custom data
 * 
 *  management>
 * 
 *  AWS Data Pipeline implements two main sets of functionality. Use the first set to create a pipeline and define data
 *  sources, schedules, dependencies, and the transforms to be performed on the data. Use the second set in your task runner
 *  application to receive the next task ready for processing. The logic for performing the task, such as querying the data,
 *  running data analysis, or converting the data from one format to another, is contained within the task runner. The task
 *  runner performs the task assigned to it by the web service, reporting progress to the web service as it does so. When
 *  the task is done, the task runner reports the final success or failure of the task to the web
 *
 * \sa DataPipelineClient::activatePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
ActivatePipelineRequest::ActivatePipelineRequest(const ActivatePipelineRequest &other)
    : DataPipelineRequest(new ActivatePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ActivatePipelineRequest object.
 */
ActivatePipelineRequest::ActivatePipelineRequest()
    : DataPipelineRequest(new ActivatePipelineRequestPrivate(DataPipelineRequest::ActivatePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool ActivatePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ActivatePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ActivatePipelineRequest::response(QNetworkReply * const reply) const
{
    return new ActivatePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::DataPipeline::ActivatePipelineRequestPrivate
 * \brief The ActivatePipelineRequestPrivate class provides private implementation for ActivatePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a ActivatePipelineRequestPrivate object for DataPipeline \a action,
 * with public implementation \a q.
 */
ActivatePipelineRequestPrivate::ActivatePipelineRequestPrivate(
    const DataPipelineRequest::Action action, ActivatePipelineRequest * const q)
    : DataPipelineRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ActivatePipelineRequest
 * class' copy constructor.
 */
ActivatePipelineRequestPrivate::ActivatePipelineRequestPrivate(
    const ActivatePipelineRequestPrivate &other, ActivatePipelineRequest * const q)
    : DataPipelineRequestPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
