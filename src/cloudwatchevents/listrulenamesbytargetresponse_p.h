// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULENAMESBYTARGETRESPONSE_P_H
#define QTAWS_LISTRULENAMESBYTARGETRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListRuleNamesByTargetResponse;

class ListRuleNamesByTargetResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit ListRuleNamesByTargetResponsePrivate(ListRuleNamesByTargetResponse * const q);

    void parseListRuleNamesByTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRuleNamesByTargetResponse)
    Q_DISABLE_COPY(ListRuleNamesByTargetResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
