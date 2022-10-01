// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERRULEREQUEST_H
#define QTAWS_ASSOCIATERESOLVERRULEREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverRuleRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT AssociateResolverRuleRequest : public Route53ResolverRequest {

public:
    AssociateResolverRuleRequest(const AssociateResolverRuleRequest &other);
    AssociateResolverRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
