// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREQUESTVALIDATORREQUEST_H
#define QTAWS_CREATEREQUESTVALIDATORREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateRequestValidatorRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT CreateRequestValidatorRequest : public ApiGatewayRequest {

public:
    CreateRequestValidatorRequest(const CreateRequestValidatorRequest &other);
    CreateRequestValidatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRequestValidatorRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
