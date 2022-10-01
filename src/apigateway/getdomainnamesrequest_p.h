// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMESREQUEST_P_H
#define QTAWS_GETDOMAINNAMESREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getdomainnamesrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDomainNamesRequest;

class GetDomainNamesRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetDomainNamesRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetDomainNamesRequest * const q);
    GetDomainNamesRequestPrivate(const GetDomainNamesRequestPrivate &other,
                                   GetDomainNamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainNamesRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
