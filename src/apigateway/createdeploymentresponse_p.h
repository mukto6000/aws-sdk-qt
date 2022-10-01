// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTRESPONSE_P_H
#define QTAWS_CREATEDEPLOYMENTRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateDeploymentResponse;

class CreateDeploymentResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateDeploymentResponsePrivate(CreateDeploymentResponse * const q);

    void parseCreateDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentResponse)
    Q_DISABLE_COPY(CreateDeploymentResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
