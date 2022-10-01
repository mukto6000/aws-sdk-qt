// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANSRESPONSE_P_H
#define QTAWS_GETUSAGEPLANSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlansResponse;

class GetUsagePlansResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetUsagePlansResponsePrivate(GetUsagePlansResponse * const q);

    void parseGetUsagePlansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUsagePlansResponse)
    Q_DISABLE_COPY(GetUsagePlansResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
