// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPRULESREQUEST_H
#define QTAWS_DESCRIBESECURITYGROUPRULESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupRulesRequestPrivate;

class QTAWSEC2_EXPORT DescribeSecurityGroupRulesRequest : public Ec2Request {

public:
    DescribeSecurityGroupRulesRequest(const DescribeSecurityGroupRulesRequest &other);
    DescribeSecurityGroupRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityGroupRulesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
