// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATEWORKSPACERESPONSE_P_H
#define QTAWS_MIGRATEWORKSPACERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class MigrateWorkspaceResponse;

class MigrateWorkspaceResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit MigrateWorkspaceResponsePrivate(MigrateWorkspaceResponse * const q);

    void parseMigrateWorkspaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MigrateWorkspaceResponse)
    Q_DISABLE_COPY(MigrateWorkspaceResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
