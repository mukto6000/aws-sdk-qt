// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELREPLICATIONTASKASSESSMENTRUNREQUEST_H
#define QTAWS_CANCELREPLICATIONTASKASSESSMENTRUNREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CancelReplicationTaskAssessmentRunRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT CancelReplicationTaskAssessmentRunRequest : public DatabaseMigrationRequest {

public:
    CancelReplicationTaskAssessmentRunRequest(const CancelReplicationTaskAssessmentRunRequest &other);
    CancelReplicationTaskAssessmentRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelReplicationTaskAssessmentRunRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
