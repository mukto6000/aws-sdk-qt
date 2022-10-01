// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDEXPORTJOBRESPONSE_P_H
#define QTAWS_CREATEWORLDEXPORTJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldExportJobResponse;

class CreateWorldExportJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CreateWorldExportJobResponsePrivate(CreateWorldExportJobResponse * const q);

    void parseCreateWorldExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorldExportJobResponse)
    Q_DISABLE_COPY(CreateWorldExportJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
