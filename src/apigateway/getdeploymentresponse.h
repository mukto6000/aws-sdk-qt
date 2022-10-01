// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTRESPONSE_H
#define QTAWS_GETDEPLOYMENTRESPONSE_H

#include "apigatewayresponse.h"
#include "getdeploymentrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDeploymentResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetDeploymentResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetDeploymentResponse(const GetDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentResponse)
    Q_DISABLE_COPY(GetDeploymentResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
