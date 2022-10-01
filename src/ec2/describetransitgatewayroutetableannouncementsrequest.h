// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYROUTETABLEANNOUNCEMENTSREQUEST_H
#define QTAWS_DESCRIBETRANSITGATEWAYROUTETABLEANNOUNCEMENTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayRouteTableAnnouncementsRequestPrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayRouteTableAnnouncementsRequest : public Ec2Request {

public:
    DescribeTransitGatewayRouteTableAnnouncementsRequest(const DescribeTransitGatewayRouteTableAnnouncementsRequest &other);
    DescribeTransitGatewayRouteTableAnnouncementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayRouteTableAnnouncementsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
