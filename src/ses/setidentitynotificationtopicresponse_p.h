// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYNOTIFICATIONTOPICRESPONSE_P_H
#define QTAWS_SETIDENTITYNOTIFICATIONTOPICRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SetIdentityNotificationTopicResponse;

class SetIdentityNotificationTopicResponsePrivate : public SesResponsePrivate {

public:

    explicit SetIdentityNotificationTopicResponsePrivate(SetIdentityNotificationTopicResponse * const q);

    void parseSetIdentityNotificationTopicResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetIdentityNotificationTopicResponse)
    Q_DISABLE_COPY(SetIdentityNotificationTopicResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
