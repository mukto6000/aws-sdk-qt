// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINPUTRESPONSE_P_H
#define QTAWS_DELETEINPUTRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class DeleteInputResponse;

class DeleteInputResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit DeleteInputResponsePrivate(DeleteInputResponse * const q);

    void parseDeleteInputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInputResponse)
    Q_DISABLE_COPY(DeleteInputResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
