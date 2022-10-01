// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYTASKDEFINITIONRESPONSE_H
#define QTAWS_GETWIRELESSGATEWAYTASKDEFINITIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "getwirelessgatewaytaskdefinitionrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayTaskDefinitionResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayTaskDefinitionResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetWirelessGatewayTaskDefinitionResponse(const GetWirelessGatewayTaskDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWirelessGatewayTaskDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayTaskDefinitionResponse)
    Q_DISABLE_COPY(GetWirelessGatewayTaskDefinitionResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
