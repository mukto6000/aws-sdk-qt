// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYCONNECTPEERREQUEST_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYCONNECTPEERREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateTransitGatewayConnectPeerRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DisassociateTransitGatewayConnectPeerRequest : public NetworkManagerRequest {

public:
    DisassociateTransitGatewayConnectPeerRequest(const DisassociateTransitGatewayConnectPeerRequest &other);
    DisassociateTransitGatewayConnectPeerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTransitGatewayConnectPeerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
