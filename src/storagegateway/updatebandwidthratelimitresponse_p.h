// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBANDWIDTHRATELIMITRESPONSE_P_H
#define QTAWS_UPDATEBANDWIDTHRATELIMITRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateBandwidthRateLimitResponse;

class UpdateBandwidthRateLimitResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateBandwidthRateLimitResponsePrivate(UpdateBandwidthRateLimitResponse * const q);

    void parseUpdateBandwidthRateLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBandwidthRateLimitResponse)
    Q_DISABLE_COPY(UpdateBandwidthRateLimitResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
