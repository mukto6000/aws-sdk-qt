// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCEPOLICYRESPONSE_P_H
#define QTAWS_PUTRESOURCEPOLICYRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class PutResourcePolicyResponse;

class PutResourcePolicyResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit PutResourcePolicyResponsePrivate(PutResourcePolicyResponse * const q);

    void parsePutResourcePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutResourcePolicyResponse)
    Q_DISABLE_COPY(PutResourcePolicyResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
