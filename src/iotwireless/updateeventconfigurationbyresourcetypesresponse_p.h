// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTCONFIGURATIONBYRESOURCETYPESRESPONSE_P_H
#define QTAWS_UPDATEEVENTCONFIGURATIONBYRESOURCETYPESRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class UpdateEventConfigurationByResourceTypesResponse;

class UpdateEventConfigurationByResourceTypesResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit UpdateEventConfigurationByResourceTypesResponsePrivate(UpdateEventConfigurationByResourceTypesResponse * const q);

    void parseUpdateEventConfigurationByResourceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEventConfigurationByResourceTypesResponse)
    Q_DISABLE_COPY(UpdateEventConfigurationByResourceTypesResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
