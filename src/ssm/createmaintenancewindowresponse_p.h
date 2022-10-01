// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMAINTENANCEWINDOWRESPONSE_P_H
#define QTAWS_CREATEMAINTENANCEWINDOWRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CreateMaintenanceWindowResponse;

class CreateMaintenanceWindowResponsePrivate : public SsmResponsePrivate {

public:

    explicit CreateMaintenanceWindowResponsePrivate(CreateMaintenanceWindowResponse * const q);

    void parseCreateMaintenanceWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMaintenanceWindowResponse)
    Q_DISABLE_COPY(CreateMaintenanceWindowResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
