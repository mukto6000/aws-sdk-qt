// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEGATEWAYRESPONSE_P_H
#define QTAWS_ACTIVATEGATEWAYRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ActivateGatewayResponse;

class ActivateGatewayResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ActivateGatewayResponsePrivate(ActivateGatewayResponse * const q);

    void parseActivateGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ActivateGatewayResponse)
    Q_DISABLE_COPY(ActivateGatewayResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
