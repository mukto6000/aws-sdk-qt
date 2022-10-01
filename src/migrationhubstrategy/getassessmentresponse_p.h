// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTRESPONSE_P_H
#define QTAWS_GETASSESSMENTRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetAssessmentResponse;

class GetAssessmentResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit GetAssessmentResponsePrivate(GetAssessmentResponse * const q);

    void parseGetAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssessmentResponse)
    Q_DISABLE_COPY(GetAssessmentResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
