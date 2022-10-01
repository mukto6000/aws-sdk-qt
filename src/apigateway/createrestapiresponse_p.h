// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESTAPIRESPONSE_P_H
#define QTAWS_CREATERESTAPIRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateRestApiResponse;

class CreateRestApiResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateRestApiResponsePrivate(CreateRestApiResponse * const q);

    void parseCreateRestApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRestApiResponse)
    Q_DISABLE_COPY(CreateRestApiResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
