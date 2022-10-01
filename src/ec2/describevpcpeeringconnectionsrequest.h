// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCPEERINGCONNECTIONSREQUEST_H
#define QTAWS_DESCRIBEVPCPEERINGCONNECTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcPeeringConnectionsRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcPeeringConnectionsRequest : public Ec2Request {

public:
    DescribeVpcPeeringConnectionsRequest(const DescribeVpcPeeringConnectionsRequest &other);
    DescribeVpcPeeringConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcPeeringConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
