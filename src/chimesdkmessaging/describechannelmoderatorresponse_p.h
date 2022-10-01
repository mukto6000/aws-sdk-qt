// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATORRESPONSE_P_H
#define QTAWS_DESCRIBECHANNELMODERATORRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelModeratorResponse;

class DescribeChannelModeratorResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit DescribeChannelModeratorResponsePrivate(DescribeChannelModeratorResponse * const q);

    void parseDescribeChannelModeratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChannelModeratorResponse)
    Q_DISABLE_COPY(DescribeChannelModeratorResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
