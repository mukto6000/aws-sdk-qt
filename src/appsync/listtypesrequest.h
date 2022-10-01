// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPESREQUEST_H
#define QTAWS_LISTTYPESREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class ListTypesRequestPrivate;

class QTAWSAPPSYNC_EXPORT ListTypesRequest : public AppSyncRequest {

public:
    ListTypesRequest(const ListTypesRequest &other);
    ListTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTypesRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
