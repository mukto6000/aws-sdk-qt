// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXECUTIONHISTORYRESPONSE_P_H
#define QTAWS_GETEXECUTIONHISTORYRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class GetExecutionHistoryResponse;

class GetExecutionHistoryResponsePrivate : public SfnResponsePrivate {

public:

    explicit GetExecutionHistoryResponsePrivate(GetExecutionHistoryResponse * const q);

    void parseGetExecutionHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExecutionHistoryResponse)
    Q_DISABLE_COPY(GetExecutionHistoryResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
