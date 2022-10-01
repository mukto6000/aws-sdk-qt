// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKPOLICYRESPONSE_P_H
#define QTAWS_GETCORENETWORKPOLICYRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkPolicyResponse;

class GetCoreNetworkPolicyResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetCoreNetworkPolicyResponsePrivate(GetCoreNetworkPolicyResponse * const q);

    void parseGetCoreNetworkPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCoreNetworkPolicyResponse)
    Q_DISABLE_COPY(GetCoreNetworkPolicyResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
