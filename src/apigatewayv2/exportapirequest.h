// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTAPIREQUEST_H
#define QTAWS_EXPORTAPIREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ExportApiRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT ExportApiRequest : public ApiGatewayV2Request {

public:
    ExportApiRequest(const ExportApiRequest &other);
    ExportApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
