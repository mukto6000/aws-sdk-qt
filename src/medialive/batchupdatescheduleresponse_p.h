// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATESCHEDULERESPONSE_P_H
#define QTAWS_BATCHUPDATESCHEDULERESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class BatchUpdateScheduleResponse;

class BatchUpdateScheduleResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit BatchUpdateScheduleResponsePrivate(BatchUpdateScheduleResponse * const q);

    void parseBatchUpdateScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpdateScheduleResponse)
    Q_DISABLE_COPY(BatchUpdateScheduleResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
