// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTREQUEST_P_H
#define QTAWS_UPDATEASSESSMENTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "updateassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentRequest;

class UpdateAssessmentRequestPrivate : public AuditManagerRequestPrivate {

public:
    UpdateAssessmentRequestPrivate(const AuditManagerRequest::Action action,
                                   UpdateAssessmentRequest * const q);
    UpdateAssessmentRequestPrivate(const UpdateAssessmentRequestPrivate &other,
                                   UpdateAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
