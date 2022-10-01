// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESNAPSHOTSRESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASESNAPSHOTSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseSnapshotsResponse;

class GetRelationalDatabaseSnapshotsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabaseSnapshotsResponsePrivate(GetRelationalDatabaseSnapshotsResponse * const q);

    void parseGetRelationalDatabaseSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseSnapshotsResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseSnapshotsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
