// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONPARTSRESPONSE_P_H
#define QTAWS_GETDOCUMENTATIONPARTSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationPartsResponse;

class GetDocumentationPartsResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetDocumentationPartsResponsePrivate(GetDocumentationPartsResponse * const q);

    void parseGetDocumentationPartsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDocumentationPartsResponse)
    Q_DISABLE_COPY(GetDocumentationPartsResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
