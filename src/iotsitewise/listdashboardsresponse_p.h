// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDASHBOARDSRESPONSE_P_H
#define QTAWS_LISTDASHBOARDSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class ListDashboardsResponse;

class ListDashboardsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit ListDashboardsResponsePrivate(ListDashboardsResponse * const q);

    void parseListDashboardsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDashboardsResponse)
    Q_DISABLE_COPY(ListDashboardsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
