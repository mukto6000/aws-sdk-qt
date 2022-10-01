// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationpresignedurlrequest.h"
#include "createapplicationpresignedurlrequest_p.h"
#include "createapplicationpresignedurlresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationPresignedUrlRequest
 * \brief The CreateApplicationPresignedUrlRequest class provides an interface for KinesisAnalyticsV2 CreateApplicationPresignedUrl requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::createApplicationPresignedUrl
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApplicationPresignedUrlRequest::CreateApplicationPresignedUrlRequest(const CreateApplicationPresignedUrlRequest &other)
    : KinesisAnalyticsV2Request(new CreateApplicationPresignedUrlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApplicationPresignedUrlRequest object.
 */
CreateApplicationPresignedUrlRequest::CreateApplicationPresignedUrlRequest()
    : KinesisAnalyticsV2Request(new CreateApplicationPresignedUrlRequestPrivate(KinesisAnalyticsV2Request::CreateApplicationPresignedUrlAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApplicationPresignedUrlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApplicationPresignedUrlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationPresignedUrlRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationPresignedUrlResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationPresignedUrlRequestPrivate
 * \brief The CreateApplicationPresignedUrlRequestPrivate class provides private implementation for CreateApplicationPresignedUrlRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a CreateApplicationPresignedUrlRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
CreateApplicationPresignedUrlRequestPrivate::CreateApplicationPresignedUrlRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, CreateApplicationPresignedUrlRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationPresignedUrlRequest
 * class' copy constructor.
 */
CreateApplicationPresignedUrlRequestPrivate::CreateApplicationPresignedUrlRequestPrivate(
    const CreateApplicationPresignedUrlRequestPrivate &other, CreateApplicationPresignedUrlRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
