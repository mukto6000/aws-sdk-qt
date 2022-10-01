// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERSREQUEST_H
#define QTAWS_GETAUTHORIZERSREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetAuthorizersRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetAuthorizersRequest : public ApiGatewayV2Request {

public:
    GetAuthorizersRequest(const GetAuthorizersRequest &other);
    GetAuthorizersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAuthorizersRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
