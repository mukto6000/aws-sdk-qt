// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKTESTANOMALYDETECTORRESPONSE_P_H
#define QTAWS_BACKTESTANOMALYDETECTORRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class BackTestAnomalyDetectorResponse;

class BackTestAnomalyDetectorResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit BackTestAnomalyDetectorResponsePrivate(BackTestAnomalyDetectorResponse * const q);

    void parseBackTestAnomalyDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BackTestAnomalyDetectorResponse)
    Q_DISABLE_COPY(BackTestAnomalyDetectorResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
