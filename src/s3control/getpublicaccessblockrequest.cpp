// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpublicaccessblockrequest.h"
#include "getpublicaccessblockrequest_p.h"
#include "getpublicaccessblockresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetPublicAccessBlockRequest
 * \brief The GetPublicAccessBlockRequest class provides an interface for S3Control GetPublicAccessBlock requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getPublicAccessBlock
 */

/*!
 * Constructs a copy of \a other.
 */
GetPublicAccessBlockRequest::GetPublicAccessBlockRequest(const GetPublicAccessBlockRequest &other)
    : S3ControlRequest(new GetPublicAccessBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPublicAccessBlockRequest object.
 */
GetPublicAccessBlockRequest::GetPublicAccessBlockRequest()
    : S3ControlRequest(new GetPublicAccessBlockRequestPrivate(S3ControlRequest::GetPublicAccessBlockAction, this))
{

}

/*!
 * \reimp
 */
bool GetPublicAccessBlockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPublicAccessBlockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPublicAccessBlockRequest::response(QNetworkReply * const reply) const
{
    return new GetPublicAccessBlockResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetPublicAccessBlockRequestPrivate
 * \brief The GetPublicAccessBlockRequestPrivate class provides private implementation for GetPublicAccessBlockRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetPublicAccessBlockRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetPublicAccessBlockRequestPrivate::GetPublicAccessBlockRequestPrivate(
    const S3ControlRequest::Action action, GetPublicAccessBlockRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPublicAccessBlockRequest
 * class' copy constructor.
 */
GetPublicAccessBlockRequestPrivate::GetPublicAccessBlockRequestPrivate(
    const GetPublicAccessBlockRequestPrivate &other, GetPublicAccessBlockRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
