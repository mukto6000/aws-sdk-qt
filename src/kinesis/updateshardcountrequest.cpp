// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateshardcountrequest.h"
#include "updateshardcountrequest_p.h"
#include "updateshardcountresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::UpdateShardCountRequest
 * \brief The UpdateShardCountRequest class provides an interface for Kinesis UpdateShardCount requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::updateShardCount
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateShardCountRequest::UpdateShardCountRequest(const UpdateShardCountRequest &other)
    : KinesisRequest(new UpdateShardCountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateShardCountRequest object.
 */
UpdateShardCountRequest::UpdateShardCountRequest()
    : KinesisRequest(new UpdateShardCountRequestPrivate(KinesisRequest::UpdateShardCountAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateShardCountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateShardCountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateShardCountRequest::response(QNetworkReply * const reply) const
{
    return new UpdateShardCountResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::UpdateShardCountRequestPrivate
 * \brief The UpdateShardCountRequestPrivate class provides private implementation for UpdateShardCountRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a UpdateShardCountRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
UpdateShardCountRequestPrivate::UpdateShardCountRequestPrivate(
    const KinesisRequest::Action action, UpdateShardCountRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateShardCountRequest
 * class' copy constructor.
 */
UpdateShardCountRequestPrivate::UpdateShardCountRequestPrivate(
    const UpdateShardCountRequestPrivate &other, UpdateShardCountRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
