// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSTATUSESRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSTATUSESRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConformancePackStatusesResponse;

class DescribeOrganizationConformancePackStatusesResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeOrganizationConformancePackStatusesResponsePrivate(DescribeOrganizationConformancePackStatusesResponse * const q);

    void parseDescribeOrganizationConformancePackStatusesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConformancePackStatusesResponse)
    Q_DISABLE_COPY(DescribeOrganizationConformancePackStatusesResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
