// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTIONSRESPONSE_P_H
#define QTAWS_LISTCONNECTIONSRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class ListConnectionsResponse;

class ListConnectionsResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit ListConnectionsResponsePrivate(ListConnectionsResponse * const q);

    void parseListConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConnectionsResponse)
    Q_DISABLE_COPY(ListConnectionsResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
