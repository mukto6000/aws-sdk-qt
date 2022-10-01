// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHORIZERRESPONSE_P_H
#define QTAWS_CREATEAUTHORIZERRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateAuthorizerResponse;

class CreateAuthorizerResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateAuthorizerResponsePrivate(CreateAuthorizerResponse * const q);

    void parseCreateAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAuthorizerResponse)
    Q_DISABLE_COPY(CreateAuthorizerResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
