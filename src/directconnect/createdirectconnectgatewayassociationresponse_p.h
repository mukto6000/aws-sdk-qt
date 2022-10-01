// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_P_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayAssociationResponse;

class CreateDirectConnectGatewayAssociationResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit CreateDirectConnectGatewayAssociationResponsePrivate(CreateDirectConnectGatewayAssociationResponse * const q);

    void parseCreateDirectConnectGatewayAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDirectConnectGatewayAssociationResponse)
    Q_DISABLE_COPY(CreateDirectConnectGatewayAssociationResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
