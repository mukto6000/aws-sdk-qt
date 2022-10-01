// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKSRESPONSE_P_H
#define QTAWS_GETVPCLINKSRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetVpcLinksResponse;

class GetVpcLinksResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetVpcLinksResponsePrivate(GetVpcLinksResponse * const q);

    void parseGetVpcLinksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVpcLinksResponse)
    Q_DISABLE_COPY(GetVpcLinksResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
