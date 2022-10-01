// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTERESPONSE_P_H
#define QTAWS_DELETEROUTERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteResponse;

class DeleteRouteResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteRouteResponsePrivate(DeleteRouteResponse * const q);

    void parseDeleteRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRouteResponse)
    Q_DISABLE_COPY(DeleteRouteResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
