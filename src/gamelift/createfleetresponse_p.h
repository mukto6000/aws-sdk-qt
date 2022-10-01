// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETRESPONSE_P_H
#define QTAWS_CREATEFLEETRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class CreateFleetResponse;

class CreateFleetResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit CreateFleetResponsePrivate(CreateFleetResponse * const q);

    void parseCreateFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFleetResponse)
    Q_DISABLE_COPY(CreateFleetResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
