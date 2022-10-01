// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGAMESESSIONPLACEMENTREQUEST_H
#define QTAWS_STARTGAMESESSIONPLACEMENTREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class StartGameSessionPlacementRequestPrivate;

class QTAWSGAMELIFT_EXPORT StartGameSessionPlacementRequest : public GameLiftRequest {

public:
    StartGameSessionPlacementRequest(const StartGameSessionPlacementRequest &other);
    StartGameSessionPlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartGameSessionPlacementRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
