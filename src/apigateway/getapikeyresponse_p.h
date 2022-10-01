// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIKEYRESPONSE_P_H
#define QTAWS_GETAPIKEYRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetApiKeyResponse;

class GetApiKeyResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetApiKeyResponsePrivate(GetApiKeyResponse * const q);

    void parseGetApiKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApiKeyResponse)
    Q_DISABLE_COPY(GetApiKeyResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
