// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSECURITYGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERSECURITYGROUPSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSecurityGroupsResponse;

class DescribeClusterSecurityGroupsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeClusterSecurityGroupsResponsePrivate(DescribeClusterSecurityGroupsResponse * const q);

    void parseDescribeClusterSecurityGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeClusterSecurityGroupsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
