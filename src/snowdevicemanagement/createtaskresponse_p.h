// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKRESPONSE_P_H
#define QTAWS_CREATETASKRESPONSE_P_H

#include "snowdevicemanagementresponse_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

class CreateTaskResponse;

class CreateTaskResponsePrivate : public SnowDeviceManagementResponsePrivate {

public:

    explicit CreateTaskResponsePrivate(CreateTaskResponse * const q);

    void parseCreateTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTaskResponse)
    Q_DISABLE_COPY(CreateTaskResponsePrivate)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
