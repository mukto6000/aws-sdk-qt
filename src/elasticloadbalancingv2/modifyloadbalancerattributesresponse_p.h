// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOADBALANCERATTRIBUTESRESPONSE_P_H
#define QTAWS_MODIFYLOADBALANCERATTRIBUTESRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyLoadBalancerAttributesResponse;

class ModifyLoadBalancerAttributesResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit ModifyLoadBalancerAttributesResponsePrivate(ModifyLoadBalancerAttributesResponse * const q);

    void parseModifyLoadBalancerAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyLoadBalancerAttributesResponse)
    Q_DISABLE_COPY(ModifyLoadBalancerAttributesResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
