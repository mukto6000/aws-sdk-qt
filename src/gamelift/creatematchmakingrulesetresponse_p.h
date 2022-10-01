// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMATCHMAKINGRULESETRESPONSE_P_H
#define QTAWS_CREATEMATCHMAKINGRULESETRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class CreateMatchmakingRuleSetResponse;

class CreateMatchmakingRuleSetResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit CreateMatchmakingRuleSetResponsePrivate(CreateMatchmakingRuleSetResponse * const q);

    void parseCreateMatchmakingRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMatchmakingRuleSetResponse)
    Q_DISABLE_COPY(CreateMatchmakingRuleSetResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
