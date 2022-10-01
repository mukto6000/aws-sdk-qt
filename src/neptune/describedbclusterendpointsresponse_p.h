// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERENDPOINTSRESPONSE_P_H
#define QTAWS_DESCRIBEDBCLUSTERENDPOINTSRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClusterEndpointsResponse;

class DescribeDBClusterEndpointsResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DescribeDBClusterEndpointsResponsePrivate(DescribeDBClusterEndpointsResponse * const q);

    void parseDescribeDBClusterEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterEndpointsResponse)
    Q_DISABLE_COPY(DescribeDBClusterEndpointsResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
