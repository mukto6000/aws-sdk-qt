// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYCONNECTRESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYCONNECTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayConnectResponse;

class CreateTransitGatewayConnectResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayConnectResponsePrivate(CreateTransitGatewayConnectResponse * const q);

    void parseCreateTransitGatewayConnectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayConnectResponse)
    Q_DISABLE_COPY(CreateTransitGatewayConnectResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
