// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERPOLICYREQUEST_H
#define QTAWS_DELETELOADBALANCERPOLICYREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerPolicyRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DeleteLoadBalancerPolicyRequest : public ElasticLoadBalancingRequest {

public:
    DeleteLoadBalancerPolicyRequest(const DeleteLoadBalancerPolicyRequest &other);
    DeleteLoadBalancerPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoadBalancerPolicyRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
