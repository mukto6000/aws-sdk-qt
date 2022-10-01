// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEANALYSISRESPONSE_P_H
#define QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEANALYSISRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAccessScopeAnalysisResponse;

class DeleteNetworkInsightsAccessScopeAnalysisResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteNetworkInsightsAccessScopeAnalysisResponsePrivate(DeleteNetworkInsightsAccessScopeAnalysisResponse * const q);

    void parseDeleteNetworkInsightsAccessScopeAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInsightsAccessScopeAnalysisResponse)
    Q_DISABLE_COPY(DeleteNetworkInsightsAccessScopeAnalysisResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
