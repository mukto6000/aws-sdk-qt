// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listshardsrequest.h"
#include "listshardsrequest_p.h"
#include "listshardsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListShardsRequest
 * \brief The ListShardsRequest class provides an interface for Kinesis ListShards requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listShards
 */

/*!
 * Constructs a copy of \a other.
 */
ListShardsRequest::ListShardsRequest(const ListShardsRequest &other)
    : KinesisRequest(new ListShardsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListShardsRequest object.
 */
ListShardsRequest::ListShardsRequest()
    : KinesisRequest(new ListShardsRequestPrivate(KinesisRequest::ListShardsAction, this))
{

}

/*!
 * \reimp
 */
bool ListShardsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListShardsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListShardsRequest::response(QNetworkReply * const reply) const
{
    return new ListShardsResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::ListShardsRequestPrivate
 * \brief The ListShardsRequestPrivate class provides private implementation for ListShardsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a ListShardsRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
ListShardsRequestPrivate::ListShardsRequestPrivate(
    const KinesisRequest::Action action, ListShardsRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListShardsRequest
 * class' copy constructor.
 */
ListShardsRequestPrivate::ListShardsRequestPrivate(
    const ListShardsRequestPrivate &other, ListShardsRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
