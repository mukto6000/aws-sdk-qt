// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTESTEVENTNOTIFICATIONRESPONSE_P_H
#define QTAWS_SENDTESTEVENTNOTIFICATIONRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class SendTestEventNotificationResponse;

class SendTestEventNotificationResponsePrivate : public MTurkResponsePrivate {

public:

    explicit SendTestEventNotificationResponsePrivate(SendTestEventNotificationResponse * const q);

    void parseSendTestEventNotificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendTestEventNotificationResponse)
    Q_DISABLE_COPY(SendTestEventNotificationResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
