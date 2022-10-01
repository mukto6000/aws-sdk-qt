// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMESREQUEST_H
#define QTAWS_GETDOMAINNAMESREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDomainNamesRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetDomainNamesRequest : public ApiGatewayV2Request {

public:
    GetDomainNamesRequest(const GetDomainNamesRequest &other);
    GetDomainNamesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainNamesRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
