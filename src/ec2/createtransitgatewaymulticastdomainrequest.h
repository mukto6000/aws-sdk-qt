// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYMULTICASTDOMAINREQUEST_H
#define QTAWS_CREATETRANSITGATEWAYMULTICASTDOMAINREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayMulticastDomainRequestPrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayMulticastDomainRequest : public Ec2Request {

public:
    CreateTransitGatewayMulticastDomainRequest(const CreateTransitGatewayMulticastDomainRequest &other);
    CreateTransitGatewayMulticastDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayMulticastDomainRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
