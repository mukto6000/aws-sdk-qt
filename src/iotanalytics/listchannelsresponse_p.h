// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSRESPONSE_P_H
#define QTAWS_LISTCHANNELSRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class ListChannelsResponse;

class ListChannelsResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit ListChannelsResponsePrivate(ListChannelsResponse * const q);

    void parseListChannelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelsResponse)
    Q_DISABLE_COPY(ListChannelsResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
