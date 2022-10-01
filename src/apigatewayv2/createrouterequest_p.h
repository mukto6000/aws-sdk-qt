// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTEREQUEST_P_H
#define QTAWS_CREATEROUTEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "createrouterequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateRouteRequest;

class CreateRouteRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    CreateRouteRequestPrivate(const ApiGatewayV2Request::Action action,
                                   CreateRouteRequest * const q);
    CreateRouteRequestPrivate(const CreateRouteRequestPrivate &other,
                                   CreateRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRouteRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
