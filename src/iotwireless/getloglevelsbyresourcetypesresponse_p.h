// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGLEVELSBYRESOURCETYPESRESPONSE_P_H
#define QTAWS_GETLOGLEVELSBYRESOURCETYPESRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetLogLevelsByResourceTypesResponse;

class GetLogLevelsByResourceTypesResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetLogLevelsByResourceTypesResponsePrivate(GetLogLevelsByResourceTypesResponse * const q);

    void parseGetLogLevelsByResourceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLogLevelsByResourceTypesResponse)
    Q_DISABLE_COPY(GetLogLevelsByResourceTypesResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
