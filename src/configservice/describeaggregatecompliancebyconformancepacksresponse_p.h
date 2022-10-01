// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFORMANCEPACKSRESPONSE_P_H
#define QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFORMANCEPACKSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregateComplianceByConformancePacksResponse;

class DescribeAggregateComplianceByConformancePacksResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeAggregateComplianceByConformancePacksResponsePrivate(DescribeAggregateComplianceByConformancePacksResponse * const q);

    void parseDescribeAggregateComplianceByConformancePacksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAggregateComplianceByConformancePacksResponse)
    Q_DISABLE_COPY(DescribeAggregateComplianceByConformancePacksResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
