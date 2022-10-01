// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONRESPONSEREQUEST_H
#define QTAWS_CREATEINTEGRATIONRESPONSEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateIntegrationResponseRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateIntegrationResponseRequest : public ApiGatewayV2Request {

public:
    CreateIntegrationResponseRequest(const CreateIntegrationResponseRequest &other);
    CreateIntegrationResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntegrationResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
