// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKREQUEST_H
#define QTAWS_GETSDKREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetSdkRequest : public ApiGatewayRequest {

public:
    GetSdkRequest(const GetSdkRequest &other);
    GetSdkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSdkRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
