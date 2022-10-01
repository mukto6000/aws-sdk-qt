// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICESRESPONSE_P_H
#define QTAWS_DESCRIBESERVICESRESPONSE_P_H

#include "pricingresponse_p.h"

namespace QtAws {
namespace Pricing {

class DescribeServicesResponse;

class DescribeServicesResponsePrivate : public PricingResponsePrivate {

public:

    explicit DescribeServicesResponsePrivate(DescribeServicesResponse * const q);

    void parseDescribeServicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServicesResponse)
    Q_DISABLE_COPY(DescribeServicesResponsePrivate)

};

} // namespace Pricing
} // namespace QtAws

#endif
