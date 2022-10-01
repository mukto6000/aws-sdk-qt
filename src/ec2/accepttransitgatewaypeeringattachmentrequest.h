// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYPEERINGATTACHMENTREQUEST_H
#define QTAWS_ACCEPTTRANSITGATEWAYPEERINGATTACHMENTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayPeeringAttachmentRequestPrivate;

class QTAWSEC2_EXPORT AcceptTransitGatewayPeeringAttachmentRequest : public Ec2Request {

public:
    AcceptTransitGatewayPeeringAttachmentRequest(const AcceptTransitGatewayPeeringAttachmentRequest &other);
    AcceptTransitGatewayPeeringAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptTransitGatewayPeeringAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
