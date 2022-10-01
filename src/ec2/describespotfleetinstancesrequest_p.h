// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBESPOTFLEETINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "describespotfleetinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetInstancesRequest;

class DescribeSpotFleetInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSpotFleetInstancesRequestPrivate(const Ec2Request::Action action,
                                   DescribeSpotFleetInstancesRequest * const q);
    DescribeSpotFleetInstancesRequestPrivate(const DescribeSpotFleetInstancesRequestPrivate &other,
                                   DescribeSpotFleetInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpotFleetInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
