// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERREQUEST_H
#define QTAWS_DESCRIBECLUSTERREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeClusterRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT DescribeClusterRequest : public Route53RecoveryControlConfigRequest {

public:
    DescribeClusterRequest(const DescribeClusterRequest &other);
    DescribeClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
