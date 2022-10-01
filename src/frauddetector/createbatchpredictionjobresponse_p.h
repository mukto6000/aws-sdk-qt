// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHPREDICTIONJOBRESPONSE_P_H
#define QTAWS_CREATEBATCHPREDICTIONJOBRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class CreateBatchPredictionJobResponse;

class CreateBatchPredictionJobResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit CreateBatchPredictionJobResponsePrivate(CreateBatchPredictionJobResponse * const q);

    void parseCreateBatchPredictionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBatchPredictionJobResponse)
    Q_DISABLE_COPY(CreateBatchPredictionJobResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
