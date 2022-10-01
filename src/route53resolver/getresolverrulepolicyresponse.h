// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULEPOLICYRESPONSE_H
#define QTAWS_GETRESOLVERRULEPOLICYRESPONSE_H

#include "route53resolverresponse.h"
#include "getresolverrulepolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRulePolicyResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverRulePolicyResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetResolverRulePolicyResponse(const GetResolverRulePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResolverRulePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverRulePolicyResponse)
    Q_DISABLE_COPY(GetResolverRulePolicyResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
