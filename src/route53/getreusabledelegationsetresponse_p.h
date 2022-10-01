// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREUSABLEDELEGATIONSETRESPONSE_P_H
#define QTAWS_GETREUSABLEDELEGATIONSETRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetReusableDelegationSetResponse;

class GetReusableDelegationSetResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetReusableDelegationSetResponsePrivate(GetReusableDelegationSetResponse * const q);

    void parseGetReusableDelegationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReusableDelegationSetResponse)
    Q_DISABLE_COPY(GetReusableDelegationSetResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
