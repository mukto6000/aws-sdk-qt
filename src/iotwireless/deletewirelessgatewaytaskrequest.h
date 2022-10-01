// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYTASKREQUEST_H
#define QTAWS_DELETEWIRELESSGATEWAYTASKREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayTaskRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteWirelessGatewayTaskRequest : public IoTWirelessRequest {

public:
    DeleteWirelessGatewayTaskRequest(const DeleteWirelessGatewayTaskRequest &other);
    DeleteWirelessGatewayTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWirelessGatewayTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
