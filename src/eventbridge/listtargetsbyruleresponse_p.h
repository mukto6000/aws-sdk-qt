// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSBYRULERESPONSE_P_H
#define QTAWS_LISTTARGETSBYRULERESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class ListTargetsByRuleResponse;

class ListTargetsByRuleResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit ListTargetsByRuleResponsePrivate(ListTargetsByRuleResponse * const q);

    void parseListTargetsByRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTargetsByRuleResponse)
    Q_DISABLE_COPY(ListTargetsByRuleResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
