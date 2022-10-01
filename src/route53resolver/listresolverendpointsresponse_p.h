// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERENDPOINTSRESPONSE_P_H
#define QTAWS_LISTRESOLVERENDPOINTSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverEndpointsResponse;

class ListResolverEndpointsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListResolverEndpointsResponsePrivate(ListResolverEndpointsResponse * const q);

    void parseListResolverEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResolverEndpointsResponse)
    Q_DISABLE_COPY(ListResolverEndpointsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
