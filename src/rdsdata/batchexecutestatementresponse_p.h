// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEXECUTESTATEMENTRESPONSE_P_H
#define QTAWS_BATCHEXECUTESTATEMENTRESPONSE_P_H

#include "rdsdataresponse_p.h"

namespace QtAws {
namespace RdsData {

class BatchExecuteStatementResponse;

class BatchExecuteStatementResponsePrivate : public RdsDataResponsePrivate {

public:

    explicit BatchExecuteStatementResponsePrivate(BatchExecuteStatementResponse * const q);

    void parseBatchExecuteStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchExecuteStatementResponse)
    Q_DISABLE_COPY(BatchExecuteStatementResponsePrivate)

};

} // namespace RdsData
} // namespace QtAws

#endif
