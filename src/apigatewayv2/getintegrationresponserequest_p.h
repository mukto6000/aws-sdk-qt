// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSEREQUEST_P_H
#define QTAWS_GETINTEGRATIONRESPONSEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getintegrationresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationResponseRequest;

class GetIntegrationResponseRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetIntegrationResponseRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetIntegrationResponseRequest * const q);
    GetIntegrationResponseRequestPrivate(const GetIntegrationResponseRequestPrivate &other,
                                   GetIntegrationResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntegrationResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
