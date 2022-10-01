// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_H
#define QTAWS_ACCEPTDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AcceptDirectConnectGatewayAssociationProposalRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT AcceptDirectConnectGatewayAssociationProposalRequest : public DirectConnectRequest {

public:
    AcceptDirectConnectGatewayAssociationProposalRequest(const AcceptDirectConnectGatewayAssociationProposalRequest &other);
    AcceptDirectConnectGatewayAssociationProposalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptDirectConnectGatewayAssociationProposalRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
