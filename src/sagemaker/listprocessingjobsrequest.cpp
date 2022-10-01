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

#include "listprocessingjobsrequest.h"
#include "listprocessingjobsrequest_p.h"
#include "listprocessingjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListProcessingJobsRequest
 * \brief The ListProcessingJobsRequest class provides an interface for SageMaker ListProcessingJobs requests.
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
 * \sa SageMakerClient::listProcessingJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListProcessingJobsRequest::ListProcessingJobsRequest(const ListProcessingJobsRequest &other)
    : SageMakerRequest(new ListProcessingJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProcessingJobsRequest object.
 */
ListProcessingJobsRequest::ListProcessingJobsRequest()
    : SageMakerRequest(new ListProcessingJobsRequestPrivate(SageMakerRequest::ListProcessingJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProcessingJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProcessingJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProcessingJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListProcessingJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListProcessingJobsRequestPrivate
 * \brief The ListProcessingJobsRequestPrivate class provides private implementation for ListProcessingJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListProcessingJobsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListProcessingJobsRequestPrivate::ListProcessingJobsRequestPrivate(
    const SageMakerRequest::Action action, ListProcessingJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProcessingJobsRequest
 * class' copy constructor.
 */
ListProcessingJobsRequestPrivate::ListProcessingJobsRequestPrivate(
    const ListProcessingJobsRequestPrivate &other, ListProcessingJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
