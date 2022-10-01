// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTRESPONSE_H
#define QTAWS_GETEVIDENCEFOLDERSBYASSESSMENTRESPONSE_H

#include "auditmanagerresponse.h"
#include "getevidencefoldersbyassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFoldersByAssessmentResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetEvidenceFoldersByAssessmentResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetEvidenceFoldersByAssessmentResponse(const GetEvidenceFoldersByAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEvidenceFoldersByAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvidenceFoldersByAssessmentResponse)
    Q_DISABLE_COPY(GetEvidenceFoldersByAssessmentResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
