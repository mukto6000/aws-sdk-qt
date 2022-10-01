// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketintelligenttieringconfigurationrequest.h"
#include "deletebucketintelligenttieringconfigurationrequest_p.h"
#include "deletebucketintelligenttieringconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketIntelligentTieringConfigurationRequest
 * \brief The DeleteBucketIntelligentTieringConfigurationRequest class provides an interface for S3 DeleteBucketIntelligentTieringConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketIntelligentTieringConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketIntelligentTieringConfigurationRequest::DeleteBucketIntelligentTieringConfigurationRequest(const DeleteBucketIntelligentTieringConfigurationRequest &other)
    : S3Request(new DeleteBucketIntelligentTieringConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketIntelligentTieringConfigurationRequest object.
 */
DeleteBucketIntelligentTieringConfigurationRequest::DeleteBucketIntelligentTieringConfigurationRequest()
    : S3Request(new DeleteBucketIntelligentTieringConfigurationRequestPrivate(S3Request::DeleteBucketIntelligentTieringConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketIntelligentTieringConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketIntelligentTieringConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketIntelligentTieringConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketIntelligentTieringConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketIntelligentTieringConfigurationRequestPrivate
 * \brief The DeleteBucketIntelligentTieringConfigurationRequestPrivate class provides private implementation for DeleteBucketIntelligentTieringConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketIntelligentTieringConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketIntelligentTieringConfigurationRequestPrivate::DeleteBucketIntelligentTieringConfigurationRequestPrivate(
    const S3Request::Action action, DeleteBucketIntelligentTieringConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketIntelligentTieringConfigurationRequest
 * class' copy constructor.
 */
DeleteBucketIntelligentTieringConfigurationRequestPrivate::DeleteBucketIntelligentTieringConfigurationRequestPrivate(
    const DeleteBucketIntelligentTieringConfigurationRequestPrivate &other, DeleteBucketIntelligentTieringConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
