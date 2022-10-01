// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONRESPONSERESPONSE_H
#define QTAWS_UPDATEINTEGRATIONRESPONSERESPONSE_H

#include "apigatewayresponse.h"
#include "updateintegrationresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateIntegrationResponseResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateIntegrationResponseResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateIntegrationResponseResponse(const UpdateIntegrationResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIntegrationResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIntegrationResponseResponse)
    Q_DISABLE_COPY(UpdateIntegrationResponseResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
