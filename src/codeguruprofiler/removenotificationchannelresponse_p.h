// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVENOTIFICATIONCHANNELRESPONSE_P_H
#define QTAWS_REMOVENOTIFICATIONCHANNELRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class RemoveNotificationChannelResponse;

class RemoveNotificationChannelResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit RemoveNotificationChannelResponsePrivate(RemoveNotificationChannelResponse * const q);

    void parseRemoveNotificationChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveNotificationChannelResponse)
    Q_DISABLE_COPY(RemoveNotificationChannelResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
