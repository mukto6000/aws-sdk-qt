// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPORTDEFINITIONREQUEST_P_H
#define QTAWS_PUTREPORTDEFINITIONREQUEST_P_H

#include "applicationcostprofilerrequest_p.h"
#include "putreportdefinitionrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class PutReportDefinitionRequest;

class PutReportDefinitionRequestPrivate : public ApplicationCostProfilerRequestPrivate {

public:
    PutReportDefinitionRequestPrivate(const ApplicationCostProfilerRequest::Action action,
                                   PutReportDefinitionRequest * const q);
    PutReportDefinitionRequestPrivate(const PutReportDefinitionRequestPrivate &other,
                                   PutReportDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutReportDefinitionRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
