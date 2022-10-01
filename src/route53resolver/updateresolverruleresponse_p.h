// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERRULERESPONSE_P_H
#define QTAWS_UPDATERESOLVERRULERESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverRuleResponse;

class UpdateResolverRuleResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit UpdateResolverRuleResponsePrivate(UpdateResolverRuleResponse * const q);

    void parseUpdateResolverRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResolverRuleResponse)
    Q_DISABLE_COPY(UpdateResolverRuleResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
