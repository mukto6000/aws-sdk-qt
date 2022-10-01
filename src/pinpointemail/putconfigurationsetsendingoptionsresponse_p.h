// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETSENDINGOPTIONSRESPONSE_P_H
#define QTAWS_PUTCONFIGURATIONSETSENDINGOPTIONSRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class PutConfigurationSetSendingOptionsResponse;

class PutConfigurationSetSendingOptionsResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit PutConfigurationSetSendingOptionsResponsePrivate(PutConfigurationSetSendingOptionsResponse * const q);

    void parsePutConfigurationSetSendingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetSendingOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetSendingOptionsResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
