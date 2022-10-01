// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKRESPONSE_P_H
#define QTAWS_CREATENETWORKRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class CreateNetworkResponse;

class CreateNetworkResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit CreateNetworkResponsePrivate(CreateNetworkResponse * const q);

    void parseCreateNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNetworkResponse)
    Q_DISABLE_COPY(CreateNetworkResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
