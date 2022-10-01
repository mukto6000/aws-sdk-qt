// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELFLOWRESPONSE_P_H
#define QTAWS_DELETECHANNELFLOWRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelFlowResponse;

class DeleteChannelFlowResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit DeleteChannelFlowResponsePrivate(DeleteChannelFlowResponse * const q);

    void parseDeleteChannelFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteChannelFlowResponse)
    Q_DISABLE_COPY(DeleteChannelFlowResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
