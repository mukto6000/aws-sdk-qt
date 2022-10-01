// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYSREQUEST_H
#define QTAWS_DESCRIBETRANSITGATEWAYSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewaysRequestPrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewaysRequest : public Ec2Request {

public:
    DescribeTransitGatewaysRequest(const DescribeTransitGatewaysRequest &other);
    DescribeTransitGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
