// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterParameterGroupsResponse;

class DescribeDBClusterParameterGroupsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBClusterParameterGroupsResponsePrivate(DescribeDBClusterParameterGroupsResponse * const q);

    void parseDescribeDBClusterParameterGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeDBClusterParameterGroupsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
