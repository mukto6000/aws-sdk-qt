// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETRESPONSE_P_H
#define QTAWS_GETCONFIGURATIONSETRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class GetConfigurationSetResponse;

class GetConfigurationSetResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit GetConfigurationSetResponsePrivate(GetConfigurationSetResponse * const q);

    void parseGetConfigurationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConfigurationSetResponse)
    Q_DISABLE_COPY(GetConfigurationSetResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
