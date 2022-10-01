// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetagsrequest.h"
#include "deletetagsrequest_p.h"
#include "deletetagsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteTagsRequest
 * \brief The DeleteTagsRequest class provides an interface for AutoScaling DeleteTags requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::deleteTags
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTagsRequest::DeleteTagsRequest(const DeleteTagsRequest &other)
    : AutoScalingRequest(new DeleteTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTagsRequest object.
 */
DeleteTagsRequest::DeleteTagsRequest()
    : AutoScalingRequest(new DeleteTagsRequestPrivate(AutoScalingRequest::DeleteTagsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTagsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTagsResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DeleteTagsRequestPrivate
 * \brief The DeleteTagsRequestPrivate class provides private implementation for DeleteTagsRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteTagsRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DeleteTagsRequestPrivate::DeleteTagsRequestPrivate(
    const AutoScalingRequest::Action action, DeleteTagsRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTagsRequest
 * class' copy constructor.
 */
DeleteTagsRequestPrivate::DeleteTagsRequestPrivate(
    const DeleteTagsRequestPrivate &other, DeleteTagsRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
