// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCHANNELMESSAGERESPONSE_P_H
#define QTAWS_REDACTCHANNELMESSAGERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class RedactChannelMessageResponse;

class RedactChannelMessageResponsePrivate : public ChimeResponsePrivate {

public:

    explicit RedactChannelMessageResponsePrivate(RedactChannelMessageResponse * const q);

    void parseRedactChannelMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RedactChannelMessageResponse)
    Q_DISABLE_COPY(RedactChannelMessageResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
