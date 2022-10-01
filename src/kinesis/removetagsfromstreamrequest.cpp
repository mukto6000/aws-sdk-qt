// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removetagsfromstreamrequest.h"
#include "removetagsfromstreamrequest_p.h"
#include "removetagsfromstreamresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::RemoveTagsFromStreamRequest
 * \brief The RemoveTagsFromStreamRequest class provides an interface for Kinesis RemoveTagsFromStream requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::removeTagsFromStream
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveTagsFromStreamRequest::RemoveTagsFromStreamRequest(const RemoveTagsFromStreamRequest &other)
    : KinesisRequest(new RemoveTagsFromStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveTagsFromStreamRequest object.
 */
RemoveTagsFromStreamRequest::RemoveTagsFromStreamRequest()
    : KinesisRequest(new RemoveTagsFromStreamRequestPrivate(KinesisRequest::RemoveTagsFromStreamAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveTagsFromStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveTagsFromStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTagsFromStreamRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::RemoveTagsFromStreamRequestPrivate
 * \brief The RemoveTagsFromStreamRequestPrivate class provides private implementation for RemoveTagsFromStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a RemoveTagsFromStreamRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
RemoveTagsFromStreamRequestPrivate::RemoveTagsFromStreamRequestPrivate(
    const KinesisRequest::Action action, RemoveTagsFromStreamRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromStreamRequest
 * class' copy constructor.
 */
RemoveTagsFromStreamRequestPrivate::RemoveTagsFromStreamRequestPrivate(
    const RemoveTagsFromStreamRequestPrivate &other, RemoveTagsFromStreamRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
