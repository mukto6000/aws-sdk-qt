// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNMONITORINSTANCESREQUEST_P_H
#define QTAWS_UNMONITORINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "unmonitorinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class UnmonitorInstancesRequest;

class UnmonitorInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    UnmonitorInstancesRequestPrivate(const Ec2Request::Action action,
                                   UnmonitorInstancesRequest * const q);
    UnmonitorInstancesRequestPrivate(const UnmonitorInstancesRequestPrivate &other,
                                   UnmonitorInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnmonitorInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
