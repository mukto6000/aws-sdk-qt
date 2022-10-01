// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPRULESRESPONSE_P_H
#define QTAWS_DESCRIBESECURITYGROUPRULESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupRulesResponse;

class DescribeSecurityGroupRulesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSecurityGroupRulesResponsePrivate(DescribeSecurityGroupRulesResponse * const q);

    void parseDescribeSecurityGroupRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityGroupRulesResponse)
    Q_DISABLE_COPY(DescribeSecurityGroupRulesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
