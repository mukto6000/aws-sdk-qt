// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYREQUEST_H
#define QTAWS_GETWIRELESSGATEWAYREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayRequest : public IoTWirelessRequest {

public:
    GetWirelessGatewayRequest(const GetWirelessGatewayRequest &other);
    GetWirelessGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
