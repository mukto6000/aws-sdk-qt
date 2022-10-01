// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbuckettaggingrequest.h"
#include "getbuckettaggingrequest_p.h"
#include "getbuckettaggingresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetBucketTaggingRequest
 * \brief The GetBucketTaggingRequest class provides an interface for S3Control GetBucketTagging requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getBucketTagging
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketTaggingRequest::GetBucketTaggingRequest(const GetBucketTaggingRequest &other)
    : S3ControlRequest(new GetBucketTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketTaggingRequest object.
 */
GetBucketTaggingRequest::GetBucketTaggingRequest()
    : S3ControlRequest(new GetBucketTaggingRequestPrivate(S3ControlRequest::GetBucketTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketTaggingRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetBucketTaggingRequestPrivate
 * \brief The GetBucketTaggingRequestPrivate class provides private implementation for GetBucketTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetBucketTaggingRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetBucketTaggingRequestPrivate::GetBucketTaggingRequestPrivate(
    const S3ControlRequest::Action action, GetBucketTaggingRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketTaggingRequest
 * class' copy constructor.
 */
GetBucketTaggingRequestPrivate::GetBucketTaggingRequestPrivate(
    const GetBucketTaggingRequestPrivate &other, GetBucketTaggingRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
