// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPIRESPONSE_P_H
#define QTAWS_IMPORTAPIRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ImportApiResponse;

class ImportApiResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit ImportApiResponsePrivate(ImportApiResponse * const q);

    void parseImportApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportApiResponse)
    Q_DISABLE_COPY(ImportApiResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
