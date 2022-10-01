// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTAGERESPONSE_P_H
#define QTAWS_UPDATESTAGERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateStageResponse;

class UpdateStageResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit UpdateStageResponsePrivate(UpdateStageResponse * const q);

    void parseUpdateStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStageResponse)
    Q_DISABLE_COPY(UpdateStageResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
