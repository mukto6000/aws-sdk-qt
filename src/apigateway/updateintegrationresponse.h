// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONRESPONSE_H
#define QTAWS_UPDATEINTEGRATIONRESPONSE_H

#include "apigatewayresponse.h"
#include "updateintegrationrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateIntegrationResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateIntegrationResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateIntegrationResponse(const UpdateIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIntegrationResponse)
    Q_DISABLE_COPY(UpdateIntegrationResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
