// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDNSSECRESPONSE_P_H
#define QTAWS_GETDNSSECRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetDNSSECResponse;

class GetDNSSECResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetDNSSECResponsePrivate(GetDNSSECResponse * const q);

    void parseGetDNSSECResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDNSSECResponse)
    Q_DISABLE_COPY(GetDNSSECResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
