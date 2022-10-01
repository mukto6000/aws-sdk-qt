// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERFROMSNAPSHOTRESPONSE_P_H
#define QTAWS_RESTOREDBCLUSTERFROMSNAPSHOTRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class RestoreDBClusterFromSnapshotResponse;

class RestoreDBClusterFromSnapshotResponsePrivate : public DocDbResponsePrivate {

public:

    explicit RestoreDBClusterFromSnapshotResponsePrivate(RestoreDBClusterFromSnapshotResponse * const q);

    void parseRestoreDBClusterFromSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreDBClusterFromSnapshotResponse)
    Q_DISABLE_COPY(RestoreDBClusterFromSnapshotResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
