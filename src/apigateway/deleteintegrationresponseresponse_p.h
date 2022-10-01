// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONRESPONSERESPONSE_P_H
#define QTAWS_DELETEINTEGRATIONRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteIntegrationResponseResponse;

class DeleteIntegrationResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteIntegrationResponseResponsePrivate(DeleteIntegrationResponseResponse * const q);

    void parseDeleteIntegrationResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIntegrationResponseResponse)
    Q_DISABLE_COPY(DeleteIntegrationResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
