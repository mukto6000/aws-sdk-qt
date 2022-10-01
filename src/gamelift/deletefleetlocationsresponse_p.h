// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETLOCATIONSRESPONSE_P_H
#define QTAWS_DELETEFLEETLOCATIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteFleetLocationsResponse;

class DeleteFleetLocationsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteFleetLocationsResponsePrivate(DeleteFleetLocationsResponse * const q);

    void parseDeleteFleetLocationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFleetLocationsResponse)
    Q_DISABLE_COPY(DeleteFleetLocationsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
