// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERTOPOINTINTIMERESPONSE_P_H
#define QTAWS_RESTOREDBCLUSTERTOPOINTINTIMERESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RestoreDBClusterToPointInTimeResponse;

class RestoreDBClusterToPointInTimeResponsePrivate : public RdsResponsePrivate {

public:

    explicit RestoreDBClusterToPointInTimeResponsePrivate(RestoreDBClusterToPointInTimeResponse * const q);

    void parseRestoreDBClusterToPointInTimeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreDBClusterToPointInTimeResponse)
    Q_DISABLE_COPY(RestoreDBClusterToPointInTimeResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
