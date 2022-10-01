// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYINFORMATIONRESPONSE_P_H
#define QTAWS_UPDATEGATEWAYINFORMATIONRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateGatewayInformationResponse;

class UpdateGatewayInformationResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateGatewayInformationResponsePrivate(UpdateGatewayInformationResponse * const q);

    void parseUpdateGatewayInformationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayInformationResponse)
    Q_DISABLE_COPY(UpdateGatewayInformationResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
