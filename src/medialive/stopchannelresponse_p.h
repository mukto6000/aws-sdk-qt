// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCHANNELRESPONSE_P_H
#define QTAWS_STOPCHANNELRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class StopChannelResponse;

class StopChannelResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit StopChannelResponsePrivate(StopChannelResponse * const q);

    void parseStopChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopChannelResponse)
    Q_DISABLE_COPY(StopChannelResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
