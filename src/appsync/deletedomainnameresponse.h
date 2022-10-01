// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINNAMERESPONSE_H
#define QTAWS_DELETEDOMAINNAMERESPONSE_H

#include "appsyncresponse.h"
#include "deletedomainnamerequest.h"

namespace QtAws {
namespace AppSync {

class DeleteDomainNameResponsePrivate;

class QTAWSAPPSYNC_EXPORT DeleteDomainNameResponse : public AppSyncResponse {
    Q_OBJECT

public:
    DeleteDomainNameResponse(const DeleteDomainNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDomainNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainNameResponse)
    Q_DISABLE_COPY(DeleteDomainNameResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
