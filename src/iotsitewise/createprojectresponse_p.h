// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTRESPONSE_P_H
#define QTAWS_CREATEPROJECTRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateProjectResponse;

class CreateProjectResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit CreateProjectResponsePrivate(CreateProjectResponse * const q);

    void parseCreateProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProjectResponse)
    Q_DISABLE_COPY(CreateProjectResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
