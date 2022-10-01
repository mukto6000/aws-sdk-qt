// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCLINKRESPONSE_P_H
#define QTAWS_UPDATEVPCLINKRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateVpcLinkResponse;

class UpdateVpcLinkResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit UpdateVpcLinkResponsePrivate(UpdateVpcLinkResponse * const q);

    void parseUpdateVpcLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVpcLinkResponse)
    Q_DISABLE_COPY(UpdateVpcLinkResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
