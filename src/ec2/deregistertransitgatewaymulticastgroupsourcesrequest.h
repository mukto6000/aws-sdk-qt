// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESREQUEST_H
#define QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeregisterTransitGatewayMulticastGroupSourcesRequestPrivate;

class QTAWSEC2_EXPORT DeregisterTransitGatewayMulticastGroupSourcesRequest : public Ec2Request {

public:
    DeregisterTransitGatewayMulticastGroupSourcesRequest(const DeregisterTransitGatewayMulticastGroupSourcesRequest &other);
    DeregisterTransitGatewayMulticastGroupSourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTransitGatewayMulticastGroupSourcesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
