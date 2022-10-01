// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPSRESPONSE_P_H
#define QTAWS_GETDEDICATEDIPSRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class GetDedicatedIpsResponse;

class GetDedicatedIpsResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit GetDedicatedIpsResponsePrivate(GetDedicatedIpsResponse * const q);

    void parseGetDedicatedIpsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDedicatedIpsResponse)
    Q_DISABLE_COPY(GetDedicatedIpsResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
