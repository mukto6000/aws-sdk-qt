// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESTATEMENTRESPONSE_P_H
#define QTAWS_EXECUTESTATEMENTRESPONSE_P_H

#include "rdsdataresponse_p.h"

namespace QtAws {
namespace RdsData {

class ExecuteStatementResponse;

class ExecuteStatementResponsePrivate : public RdsDataResponsePrivate {

public:

    explicit ExecuteStatementResponsePrivate(ExecuteStatementResponse * const q);

    void parseExecuteStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExecuteStatementResponse)
    Q_DISABLE_COPY(ExecuteStatementResponsePrivate)

};

} // namespace RdsData
} // namespace QtAws

#endif
