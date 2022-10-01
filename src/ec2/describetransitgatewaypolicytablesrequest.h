// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYPOLICYTABLESREQUEST_H
#define QTAWS_DESCRIBETRANSITGATEWAYPOLICYTABLESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayPolicyTablesRequestPrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayPolicyTablesRequest : public Ec2Request {

public:
    DescribeTransitGatewayPolicyTablesRequest(const DescribeTransitGatewayPolicyTablesRequest &other);
    DescribeTransitGatewayPolicyTablesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayPolicyTablesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
