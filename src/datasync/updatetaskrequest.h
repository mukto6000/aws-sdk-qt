// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKREQUEST_H
#define QTAWS_UPDATETASKREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateTaskRequestPrivate;

class QTAWSDATASYNC_EXPORT UpdateTaskRequest : public DataSyncRequest {

public:
    UpdateTaskRequest(const UpdateTaskRequest &other);
    UpdateTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTaskRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
