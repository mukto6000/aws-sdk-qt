// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYSOFTWARENOWRESPONSE_H
#define QTAWS_UPDATEGATEWAYSOFTWARENOWRESPONSE_H

#include "storagegatewayresponse.h"
#include "updategatewaysoftwarenowrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateGatewaySoftwareNowResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateGatewaySoftwareNowResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateGatewaySoftwareNowResponse(const UpdateGatewaySoftwareNowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGatewaySoftwareNowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewaySoftwareNowResponse)
    Q_DISABLE_COPY(UpdateGatewaySoftwareNowResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
