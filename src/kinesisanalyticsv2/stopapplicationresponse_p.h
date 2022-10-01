// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPLICATIONRESPONSE_P_H
#define QTAWS_STOPAPPLICATIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class StopApplicationResponse;

class StopApplicationResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit StopApplicationResponsePrivate(StopApplicationResponse * const q);

    void parseStopApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopApplicationResponse)
    Q_DISABLE_COPY(StopApplicationResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
