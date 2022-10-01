// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONRESPONSE_P_H
#define QTAWS_DESCRIBEAPPLICATIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DescribeApplicationResponse;

class DescribeApplicationResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit DescribeApplicationResponsePrivate(DescribeApplicationResponse * const q);

    void parseDescribeApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationResponse)
    Q_DISABLE_COPY(DescribeApplicationResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
