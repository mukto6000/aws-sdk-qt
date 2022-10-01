// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEARCHIVERESPONSE_P_H
#define QTAWS_DESCRIBEARCHIVERESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeArchiveResponse;

class DescribeArchiveResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit DescribeArchiveResponsePrivate(DescribeArchiveResponse * const q);

    void parseDescribeArchiveResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeArchiveResponse)
    Q_DISABLE_COPY(DescribeArchiveResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
