// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDCACHENODESREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDCACHENODESREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describereservedcachenodesrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReservedCacheNodesRequest;

class DescribeReservedCacheNodesRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeReservedCacheNodesRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeReservedCacheNodesRequest * const q);
    DescribeReservedCacheNodesRequestPrivate(const DescribeReservedCacheNodesRequestPrivate &other,
                                   DescribeReservedCacheNodesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedCacheNodesRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
