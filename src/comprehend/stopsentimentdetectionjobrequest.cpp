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

#include "stopsentimentdetectionjobrequest.h"
#include "stopsentimentdetectionjobrequest_p.h"
#include "stopsentimentdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopSentimentDetectionJobRequest
 * \brief The StopSentimentDetectionJobRequest class provides an interface for Comprehend StopSentimentDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopSentimentDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopSentimentDetectionJobRequest::StopSentimentDetectionJobRequest(const StopSentimentDetectionJobRequest &other)
    : ComprehendRequest(new StopSentimentDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopSentimentDetectionJobRequest object.
 */
StopSentimentDetectionJobRequest::StopSentimentDetectionJobRequest()
    : ComprehendRequest(new StopSentimentDetectionJobRequestPrivate(ComprehendRequest::StopSentimentDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopSentimentDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopSentimentDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopSentimentDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopSentimentDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopSentimentDetectionJobRequestPrivate
 * \brief The StopSentimentDetectionJobRequestPrivate class provides private implementation for StopSentimentDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopSentimentDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopSentimentDetectionJobRequestPrivate::StopSentimentDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopSentimentDetectionJobRequest
 * class' copy constructor.
 */
StopSentimentDetectionJobRequestPrivate::StopSentimentDetectionJobRequestPrivate(
    const StopSentimentDetectionJobRequestPrivate &other, StopSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
