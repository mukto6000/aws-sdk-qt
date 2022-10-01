// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEREQUEST_H
#define QTAWS_CREATEDATASOURCEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class CreateDataSourceRequestPrivate;

class QTAWSAPPSYNC_EXPORT CreateDataSourceRequest : public AppSyncRequest {

public:
    CreateDataSourceRequest(const CreateDataSourceRequest &other);
    CreateDataSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSourceRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
