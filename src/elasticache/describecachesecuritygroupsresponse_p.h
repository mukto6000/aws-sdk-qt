// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHESECURITYGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBECACHESECURITYGROUPSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheSecurityGroupsResponse;

class DescribeCacheSecurityGroupsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeCacheSecurityGroupsResponsePrivate(DescribeCacheSecurityGroupsResponse * const q);

    void parseDescribeCacheSecurityGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCacheSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeCacheSecurityGroupsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
