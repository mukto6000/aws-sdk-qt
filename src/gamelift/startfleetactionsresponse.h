// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLEETACTIONSRESPONSE_H
#define QTAWS_STARTFLEETACTIONSRESPONSE_H

#include "gameliftresponse.h"
#include "startfleetactionsrequest.h"

namespace QtAws {
namespace GameLift {

class StartFleetActionsResponsePrivate;

class QTAWSGAMELIFT_EXPORT StartFleetActionsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    StartFleetActionsResponse(const StartFleetActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartFleetActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFleetActionsResponse)
    Q_DISABLE_COPY(StartFleetActionsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
