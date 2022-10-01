// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGPROFILESRESPONSE_P_H
#define QTAWS_LISTROUTINGPROFILESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListRoutingProfilesResponse;

class ListRoutingProfilesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListRoutingProfilesResponsePrivate(ListRoutingProfilesResponse * const q);

    void parseListRoutingProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRoutingProfilesResponse)
    Q_DISABLE_COPY(ListRoutingProfilesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
