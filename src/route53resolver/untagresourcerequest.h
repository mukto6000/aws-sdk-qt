// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCEREQUEST_H
#define QTAWS_UNTAGRESOURCEREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UntagResourceRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT UntagResourceRequest : public Route53ResolverRequest {

public:
    UntagResourceRequest(const UntagResourceRequest &other);
    UntagResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagResourceRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
