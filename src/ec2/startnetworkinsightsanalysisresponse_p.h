// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNETWORKINSIGHTSANALYSISRESPONSE_P_H
#define QTAWS_STARTNETWORKINSIGHTSANALYSISRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class StartNetworkInsightsAnalysisResponse;

class StartNetworkInsightsAnalysisResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit StartNetworkInsightsAnalysisResponsePrivate(StartNetworkInsightsAnalysisResponse * const q);

    void parseStartNetworkInsightsAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartNetworkInsightsAnalysisResponse)
    Q_DISABLE_COPY(StartNetworkInsightsAnalysisResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
