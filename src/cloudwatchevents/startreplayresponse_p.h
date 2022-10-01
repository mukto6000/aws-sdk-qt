// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLAYRESPONSE_P_H
#define QTAWS_STARTREPLAYRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class StartReplayResponse;

class StartReplayResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit StartReplayResponsePrivate(StartReplayResponse * const q);

    void parseStartReplayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartReplayResponse)
    Q_DISABLE_COPY(StartReplayResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
