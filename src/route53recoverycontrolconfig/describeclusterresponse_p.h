// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DescribeClusterResponse;

class DescribeClusterResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit DescribeClusterResponsePrivate(DescribeClusterResponse * const q);

    void parseDescribeClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterResponse)
    Q_DISABLE_COPY(DescribeClusterResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
