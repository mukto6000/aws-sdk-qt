// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGENDPOINTGROUPREQUEST_H
#define QTAWS_DESCRIBECUSTOMROUTINGENDPOINTGROUPREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingEndpointGroupRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeCustomRoutingEndpointGroupRequest : public GlobalAcceleratorRequest {

public:
    DescribeCustomRoutingEndpointGroupRequest(const DescribeCustomRoutingEndpointGroupRequest &other);
    DescribeCustomRoutingEndpointGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomRoutingEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
