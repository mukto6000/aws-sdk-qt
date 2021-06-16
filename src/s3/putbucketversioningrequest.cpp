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

#include "putbucketversioningrequest.h"
#include "putbucketversioningrequest_p.h"
#include "putbucketversioningresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketVersioningRequest
 * \brief The PutBucketVersioningRequest class provides an interface for S3 PutBucketVersioning requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketVersioning
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketVersioningRequest::PutBucketVersioningRequest(const PutBucketVersioningRequest &other)
    : S3Request(new PutBucketVersioningRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketVersioningRequest object.
 */
PutBucketVersioningRequest::PutBucketVersioningRequest()
    : S3Request(new PutBucketVersioningRequestPrivate(S3Request::PutBucketVersioningAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketVersioningRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketVersioningResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketVersioningRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketVersioningResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketVersioningRequestPrivate
 * \brief The PutBucketVersioningRequestPrivate class provides private implementation for PutBucketVersioningRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketVersioningRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketVersioningRequestPrivate::PutBucketVersioningRequestPrivate(
    const S3Request::Action action, PutBucketVersioningRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketVersioningRequest
 * class' copy constructor.
 */
PutBucketVersioningRequestPrivate::PutBucketVersioningRequestPrivate(
    const PutBucketVersioningRequestPrivate &other, PutBucketVersioningRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
