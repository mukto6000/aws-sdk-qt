// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSFORAPPINSTANCEUSERRESPONSE_P_H
#define QTAWS_LISTCHANNELMEMBERSHIPSFORAPPINSTANCEUSERRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelMembershipsForAppInstanceUserResponse;

class ListChannelMembershipsForAppInstanceUserResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit ListChannelMembershipsForAppInstanceUserResponsePrivate(ListChannelMembershipsForAppInstanceUserResponse * const q);

    void parseListChannelMembershipsForAppInstanceUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelMembershipsForAppInstanceUserResponse)
    Q_DISABLE_COPY(ListChannelMembershipsForAppInstanceUserResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
