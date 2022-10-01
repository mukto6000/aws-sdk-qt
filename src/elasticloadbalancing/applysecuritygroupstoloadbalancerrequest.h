// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSECURITYGROUPSTOLOADBALANCERREQUEST_H
#define QTAWS_APPLYSECURITYGROUPSTOLOADBALANCERREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ApplySecurityGroupsToLoadBalancerRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT ApplySecurityGroupsToLoadBalancerRequest : public ElasticLoadBalancingRequest {

public:
    ApplySecurityGroupsToLoadBalancerRequest(const ApplySecurityGroupsToLoadBalancerRequest &other);
    ApplySecurityGroupsToLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplySecurityGroupsToLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
