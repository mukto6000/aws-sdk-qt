// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTAGEDEPLOYMENTRESPONSE_H
#define QTAWS_STARTSTAGEDEPLOYMENTRESPONSE_H

#include "gamesparksresponse.h"
#include "startstagedeploymentrequest.h"

namespace QtAws {
namespace GameSparks {

class StartStageDeploymentResponsePrivate;

class QTAWSGAMESPARKS_EXPORT StartStageDeploymentResponse : public GameSparksResponse {
    Q_OBJECT

public:
    StartStageDeploymentResponse(const StartStageDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartStageDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStageDeploymentResponse)
    Q_DISABLE_COPY(StartStageDeploymentResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
