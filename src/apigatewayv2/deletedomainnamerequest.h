// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINNAMEREQUEST_H
#define QTAWS_DELETEDOMAINNAMEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteDomainNameRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteDomainNameRequest : public ApiGatewayV2Request {

public:
    DeleteDomainNameRequest(const DeleteDomainNameRequest &other);
    DeleteDomainNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainNameRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
