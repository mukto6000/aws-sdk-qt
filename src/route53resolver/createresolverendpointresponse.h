// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERENDPOINTRESPONSE_H
#define QTAWS_CREATERESOLVERENDPOINTRESPONSE_H

#include "route53resolverresponse.h"
#include "createresolverendpointrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverEndpointResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateResolverEndpointResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    CreateResolverEndpointResponse(const CreateResolverEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResolverEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResolverEndpointResponse)
    Q_DISABLE_COPY(CreateResolverEndpointResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
