// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTCERTIFICATEREQUEST_H
#define QTAWS_DELETECLIENTCERTIFICATEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteClientCertificateRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteClientCertificateRequest : public ApiGatewayRequest {

public:
    DeleteClientCertificateRequest(const DeleteClientCertificateRequest &other);
    DeleteClientCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClientCertificateRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
