// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINNAMESREQUEST_H
#define QTAWS_LISTDOMAINNAMESREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class ListDomainNamesRequestPrivate;

class QTAWSAPPSYNC_EXPORT ListDomainNamesRequest : public AppSyncRequest {

public:
    ListDomainNamesRequest(const ListDomainNamesRequest &other);
    ListDomainNamesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainNamesRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
