// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSEREQUEST_H
#define QTAWS_GETINTEGRATIONRESPONSEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationResponseRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetIntegrationResponseRequest : public ApiGatewayV2Request {

public:
    GetIntegrationResponseRequest(const GetIntegrationResponseRequest &other);
    GetIntegrationResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntegrationResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
