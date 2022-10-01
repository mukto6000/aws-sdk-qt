// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeclusterv2request.h"
#include "describeclusterv2request_p.h"
#include "describeclusterv2response.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DescribeClusterV2Request
 * \brief The DescribeClusterV2Request class provides an interface for Kafka DescribeClusterV2 requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::describeClusterV2
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeClusterV2Request::DescribeClusterV2Request(const DescribeClusterV2Request &other)
    : KafkaRequest(new DescribeClusterV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeClusterV2Request object.
 */
DescribeClusterV2Request::DescribeClusterV2Request()
    : KafkaRequest(new DescribeClusterV2RequestPrivate(KafkaRequest::DescribeClusterV2Action, this))
{

}

/*!
 * \reimp
 */
bool DescribeClusterV2Request::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeClusterV2Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeClusterV2Request::response(QNetworkReply * const reply) const
{
    return new DescribeClusterV2Response(*this, reply);
}

/*!
 * \class QtAws::Kafka::DescribeClusterV2RequestPrivate
 * \brief The DescribeClusterV2RequestPrivate class provides private implementation for DescribeClusterV2Request.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DescribeClusterV2RequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
DescribeClusterV2RequestPrivate::DescribeClusterV2RequestPrivate(
    const KafkaRequest::Action action, DescribeClusterV2Request * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterV2Request
 * class' copy constructor.
 */
DescribeClusterV2RequestPrivate::DescribeClusterV2RequestPrivate(
    const DescribeClusterV2RequestPrivate &other, DescribeClusterV2Request * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
