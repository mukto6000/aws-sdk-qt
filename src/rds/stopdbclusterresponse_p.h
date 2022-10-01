// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBCLUSTERRESPONSE_P_H
#define QTAWS_STOPDBCLUSTERRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class StopDBClusterResponse;

class StopDBClusterResponsePrivate : public RdsResponsePrivate {

public:

    explicit StopDBClusterResponsePrivate(StopDBClusterResponse * const q);

    void parseStopDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopDBClusterResponse)
    Q_DISABLE_COPY(StopDBClusterResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
