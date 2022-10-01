// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERSRESPONSE_P_H
#define QTAWS_DESCRIBELOADBALANCERSRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeLoadBalancersResponse;

class DescribeLoadBalancersResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DescribeLoadBalancersResponsePrivate(DescribeLoadBalancersResponse * const q);

    void parseDescribeLoadBalancersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancersResponse)
    Q_DISABLE_COPY(DescribeLoadBalancersResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
