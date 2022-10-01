// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIPELINEREPROCESSINGRESPONSE_P_H
#define QTAWS_STARTPIPELINEREPROCESSINGRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class StartPipelineReprocessingResponse;

class StartPipelineReprocessingResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit StartPipelineReprocessingResponsePrivate(StartPipelineReprocessingResponse * const q);

    void parseStartPipelineReprocessingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartPipelineReprocessingResponse)
    Q_DISABLE_COPY(StartPipelineReprocessingResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
