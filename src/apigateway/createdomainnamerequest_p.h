// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINNAMEREQUEST_P_H
#define QTAWS_CREATEDOMAINNAMEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createdomainnamerequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateDomainNameRequest;

class CreateDomainNameRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateDomainNameRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateDomainNameRequest * const q);
    CreateDomainNameRequestPrivate(const CreateDomainNameRequestPrivate &other,
                                   CreateDomainNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDomainNameRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
