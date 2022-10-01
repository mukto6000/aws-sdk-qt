// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTSRESPONSE_P_H
#define QTAWS_LISTENVIRONMENTSRESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListEnvironmentsResponse;

class ListEnvironmentsResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit ListEnvironmentsResponsePrivate(ListEnvironmentsResponse * const q);

    void parseListEnvironmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentsResponse)
    Q_DISABLE_COPY(ListEnvironmentsResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
