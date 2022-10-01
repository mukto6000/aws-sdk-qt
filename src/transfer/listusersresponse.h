// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSRESPONSE_H
#define QTAWS_LISTUSERSRESPONSE_H

#include "transferresponse.h"
#include "listusersrequest.h"

namespace QtAws {
namespace Transfer {

class ListUsersResponsePrivate;

class QTAWSTRANSFER_EXPORT ListUsersResponse : public TransferResponse {
    Q_OBJECT

public:
    ListUsersResponse(const ListUsersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUsersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsersResponse)
    Q_DISABLE_COPY(ListUsersResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
