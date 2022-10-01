// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESETRESPONSE_H
#define QTAWS_UPDATERESOURCESETRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "updateresourcesetrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateResourceSetResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT UpdateResourceSetResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    UpdateResourceSetResponse(const UpdateResourceSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResourceSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceSetResponse)
    Q_DISABLE_COPY(UpdateResourceSetResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
