// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYINFORMATIONRESPONSE_H
#define QTAWS_UPDATEGATEWAYINFORMATIONRESPONSE_H

#include "backupgatewayresponse.h"
#include "updategatewayinformationrequest.h"

namespace QtAws {
namespace BackupGateway {

class UpdateGatewayInformationResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT UpdateGatewayInformationResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    UpdateGatewayInformationResponse(const UpdateGatewayInformationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGatewayInformationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayInformationResponse)
    Q_DISABLE_COPY(UpdateGatewayInformationResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
