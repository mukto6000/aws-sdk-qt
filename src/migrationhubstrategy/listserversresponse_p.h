// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERSRESPONSE_P_H
#define QTAWS_LISTSERVERSRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListServersResponse;

class ListServersResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit ListServersResponsePrivate(ListServersResponse * const q);

    void parseListServersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServersResponse)
    Q_DISABLE_COPY(ListServersResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
