// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMERESPONSE_P_H
#define QTAWS_GETDOMAINNAMERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDomainNameResponse;

class GetDomainNameResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetDomainNameResponsePrivate(GetDomainNameResponse * const q);

    void parseGetDomainNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainNameResponse)
    Q_DISABLE_COPY(GetDomainNameResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
