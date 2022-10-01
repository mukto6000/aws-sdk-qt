// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONRESPONSERESPONSE_H
#define QTAWS_DELETEINTEGRATIONRESPONSERESPONSE_H

#include "apigatewayv2response.h"
#include "deleteintegrationresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteIntegrationResponseResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteIntegrationResponseResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteIntegrationResponseResponse(const DeleteIntegrationResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIntegrationResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntegrationResponseResponse)
    Q_DISABLE_COPY(DeleteIntegrationResponseResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
