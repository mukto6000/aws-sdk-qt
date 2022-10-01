// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREADINESSCHECKRESPONSE_H
#define QTAWS_CREATEREADINESSCHECKRESPONSE_H

#include "route53recoveryreadinessresponse.h"
#include "createreadinesscheckrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateReadinessCheckResponsePrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT CreateReadinessCheckResponse : public Route53RecoveryReadinessResponse {
    Q_OBJECT

public:
    CreateReadinessCheckResponse(const CreateReadinessCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReadinessCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReadinessCheckResponse)
    Q_DISABLE_COPY(CreateReadinessCheckResponse)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
