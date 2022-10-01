// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICPOLICYINSTANCERESPONSE_P_H
#define QTAWS_DELETETRAFFICPOLICYINSTANCERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DeleteTrafficPolicyInstanceResponse;

class DeleteTrafficPolicyInstanceResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DeleteTrafficPolicyInstanceResponsePrivate(DeleteTrafficPolicyInstanceResponse * const q);

    void parseDeleteTrafficPolicyInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficPolicyInstanceResponse)
    Q_DISABLE_COPY(DeleteTrafficPolicyInstanceResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
