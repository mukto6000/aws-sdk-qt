// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESRESPONSE_P_H
#define QTAWS_LISTENTITIESRESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListEntitiesResponse;

class ListEntitiesResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit ListEntitiesResponsePrivate(ListEntitiesResponse * const q);

    void parseListEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEntitiesResponse)
    Q_DISABLE_COPY(ListEntitiesResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
