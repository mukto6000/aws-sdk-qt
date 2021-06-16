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

#include "putbucketaclrequest.h"
#include "putbucketaclrequest_p.h"
#include "putbucketaclresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketAclRequest
 * \brief The PutBucketAclRequest class provides an interface for S3 PutBucketAcl requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketAcl
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketAclRequest::PutBucketAclRequest(const PutBucketAclRequest &other)
    : S3Request(new PutBucketAclRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketAclRequest object.
 */
PutBucketAclRequest::PutBucketAclRequest()
    : S3Request(new PutBucketAclRequestPrivate(S3Request::PutBucketAclAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketAclRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketAclResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketAclRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketAclResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketAclRequestPrivate
 * \brief The PutBucketAclRequestPrivate class provides private implementation for PutBucketAclRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketAclRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketAclRequestPrivate::PutBucketAclRequestPrivate(
    const S3Request::Action action, PutBucketAclRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketAclRequest
 * class' copy constructor.
 */
PutBucketAclRequestPrivate::PutBucketAclRequestPrivate(
    const PutBucketAclRequestPrivate &other, PutBucketAclRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
