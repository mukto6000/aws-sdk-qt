// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINNAMERESPONSE_P_H
#define QTAWS_CREATEDOMAINNAMERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateDomainNameResponse;

class CreateDomainNameResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateDomainNameResponsePrivate(CreateDomainNameResponse * const q);

    void parseCreateDomainNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDomainNameResponse)
    Q_DISABLE_COPY(CreateDomainNameResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
