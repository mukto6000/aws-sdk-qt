// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTAGERESPONSE_H
#define QTAWS_CREATESTAGERESPONSE_H

#include "apigatewayv2response.h"
#include "createstagerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateStageResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateStageResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    CreateStageResponse(const CreateStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStageResponse)
    Q_DISABLE_COPY(CreateStageResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
