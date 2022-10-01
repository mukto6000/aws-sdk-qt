// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttopicsdetectionjobrequest.h"
#include "starttopicsdetectionjobrequest_p.h"
#include "starttopicsdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartTopicsDetectionJobRequest
 * \brief The StartTopicsDetectionJobRequest class provides an interface for Comprehend StartTopicsDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startTopicsDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartTopicsDetectionJobRequest::StartTopicsDetectionJobRequest(const StartTopicsDetectionJobRequest &other)
    : ComprehendRequest(new StartTopicsDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTopicsDetectionJobRequest object.
 */
StartTopicsDetectionJobRequest::StartTopicsDetectionJobRequest()
    : ComprehendRequest(new StartTopicsDetectionJobRequestPrivate(ComprehendRequest::StartTopicsDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartTopicsDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTopicsDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTopicsDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartTopicsDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartTopicsDetectionJobRequestPrivate
 * \brief The StartTopicsDetectionJobRequestPrivate class provides private implementation for StartTopicsDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartTopicsDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartTopicsDetectionJobRequestPrivate::StartTopicsDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartTopicsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTopicsDetectionJobRequest
 * class' copy constructor.
 */
StartTopicsDetectionJobRequestPrivate::StartTopicsDetectionJobRequestPrivate(
    const StartTopicsDetectionJobRequestPrivate &other, StartTopicsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
