// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDEVICEFROMPLACEMENTRESPONSE_P_H
#define QTAWS_DISASSOCIATEDEVICEFROMPLACEMENTRESPONSE_P_H

#include "iot1clickprojectsresponse_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DisassociateDeviceFromPlacementResponse;

class DisassociateDeviceFromPlacementResponsePrivate : public IoT1ClickProjectsResponsePrivate {

public:

    explicit DisassociateDeviceFromPlacementResponsePrivate(DisassociateDeviceFromPlacementResponse * const q);

    void parseDisassociateDeviceFromPlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateDeviceFromPlacementResponse)
    Q_DISABLE_COPY(DisassociateDeviceFromPlacementResponsePrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
