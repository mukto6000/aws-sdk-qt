// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELRESPONSE_H
#define QTAWS_UPDATEMODELRESPONSE_H

#include "apigatewayresponse.h"
#include "updatemodelrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateModelResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateModelResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateModelResponse(const UpdateModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateModelResponse)
    Q_DISABLE_COPY(UpdateModelResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
