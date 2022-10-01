// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGATEWAYRESPONSEREQUEST_H
#define QTAWS_PUTGATEWAYRESPONSEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class PutGatewayResponseRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT PutGatewayResponseRequest : public ApiGatewayRequest {

public:
    PutGatewayResponseRequest(const PutGatewayResponseRequest &other);
    PutGatewayResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutGatewayResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
