// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYRESPONSE_P_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayResponse;

class CreateDirectConnectGatewayResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit CreateDirectConnectGatewayResponsePrivate(CreateDirectConnectGatewayResponse * const q);

    void parseCreateDirectConnectGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDirectConnectGatewayResponse)
    Q_DISABLE_COPY(CreateDirectConnectGatewayResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
