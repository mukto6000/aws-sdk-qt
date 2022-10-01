// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONVERSIONRESPONSE_P_H
#define QTAWS_GETDOCUMENTATIONVERSIONRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationVersionResponse;

class GetDocumentationVersionResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetDocumentationVersionResponsePrivate(GetDocumentationVersionResponse * const q);

    void parseGetDocumentationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDocumentationVersionResponse)
    Q_DISABLE_COPY(GetDocumentationVersionResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
