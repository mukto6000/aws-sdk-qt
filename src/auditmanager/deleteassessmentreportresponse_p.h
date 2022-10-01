// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTREPORTRESPONSE_P_H
#define QTAWS_DELETEASSESSMENTREPORTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentReportResponse;

class DeleteAssessmentReportResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit DeleteAssessmentReportResponsePrivate(DeleteAssessmentReportResponse * const q);

    void parseDeleteAssessmentReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentReportResponse)
    Q_DISABLE_COPY(DeleteAssessmentReportResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
