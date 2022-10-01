// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSRESPONSE_P_H
#define QTAWS_DESCRIBETAGSRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeTagsResponse;

class DescribeTagsResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DescribeTagsResponsePrivate(DescribeTagsResponse * const q);

    void parseDescribeTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTagsResponse)
    Q_DISABLE_COPY(DescribeTagsResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
