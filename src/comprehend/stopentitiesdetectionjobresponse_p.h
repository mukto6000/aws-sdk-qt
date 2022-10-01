// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENTITIESDETECTIONJOBRESPONSE_P_H
#define QTAWS_STOPENTITIESDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StopEntitiesDetectionJobResponse;

class StopEntitiesDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StopEntitiesDetectionJobResponsePrivate(StopEntitiesDetectionJobResponse * const q);

    void parseStopEntitiesDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(StopEntitiesDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
