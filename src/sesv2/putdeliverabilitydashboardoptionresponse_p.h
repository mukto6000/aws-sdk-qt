// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONRESPONSE_P_H
#define QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutDeliverabilityDashboardOptionResponse;

class PutDeliverabilityDashboardOptionResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutDeliverabilityDashboardOptionResponsePrivate(PutDeliverabilityDashboardOptionResponse * const q);

    void parsePutDeliverabilityDashboardOptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDeliverabilityDashboardOptionResponse)
    Q_DISABLE_COPY(PutDeliverabilityDashboardOptionResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
