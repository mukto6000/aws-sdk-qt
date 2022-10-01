// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGERESPONSE_P_H
#define QTAWS_GETSTAGERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetStageResponse;

class GetStageResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetStageResponsePrivate(GetStageResponse * const q);

    void parseGetStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStageResponse)
    Q_DISABLE_COPY(GetStageResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
