// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKUPPLANFROMTEMPLATEREQUEST_H
#define QTAWS_GETBACKUPPLANFROMTEMPLATEREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class GetBackupPlanFromTemplateRequestPrivate;

class QTAWSBACKUP_EXPORT GetBackupPlanFromTemplateRequest : public BackupRequest {

public:
    GetBackupPlanFromTemplateRequest(const GetBackupPlanFromTemplateRequest &other);
    GetBackupPlanFromTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackupPlanFromTemplateRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
