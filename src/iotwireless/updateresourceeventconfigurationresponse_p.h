// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEEVENTCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATERESOURCEEVENTCONFIGURATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class UpdateResourceEventConfigurationResponse;

class UpdateResourceEventConfigurationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit UpdateResourceEventConfigurationResponsePrivate(UpdateResourceEventConfigurationResponse * const q);

    void parseUpdateResourceEventConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResourceEventConfigurationResponse)
    Q_DISABLE_COPY(UpdateResourceEventConfigurationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
