// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTFRAMEWORKREQUEST_H
#define QTAWS_DELETEASSESSMENTFRAMEWORKREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteAssessmentFrameworkRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT DeleteAssessmentFrameworkRequest : public AuditManagerRequest {

public:
    DeleteAssessmentFrameworkRequest(const DeleteAssessmentFrameworkRequest &other);
    DeleteAssessmentFrameworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentFrameworkRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
