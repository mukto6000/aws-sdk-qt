// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSINGRESSREQUEST_P_H
#define QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSINGRESSREQUEST_P_H

#include "ec2request_p.h"
#include "updatesecuritygroupruledescriptionsingressrequest.h"

namespace QtAws {
namespace Ec2 {

class UpdateSecurityGroupRuleDescriptionsIngressRequest;

class UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate : public Ec2RequestPrivate {

public:
    UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate(const Ec2Request::Action action,
                                   UpdateSecurityGroupRuleDescriptionsIngressRequest * const q);
    UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate(const UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate &other,
                                   UpdateSecurityGroupRuleDescriptionsIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityGroupRuleDescriptionsIngressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
