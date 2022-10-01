// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMSNAPSHOTRESPONSE_P_H
#define QTAWS_RESTOREFROMSNAPSHOTRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class RestoreFromSnapshotResponse;

class RestoreFromSnapshotResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit RestoreFromSnapshotResponsePrivate(RestoreFromSnapshotResponse * const q);

    void parseRestoreFromSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreFromSnapshotResponse)
    Q_DISABLE_COPY(RestoreFromSnapshotResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
