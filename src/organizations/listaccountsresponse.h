// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSRESPONSE_H
#define QTAWS_LISTACCOUNTSRESPONSE_H

#include "organizationsresponse.h"
#include "listaccountsrequest.h"

namespace QtAws {
namespace Organizations {

class ListAccountsResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListAccountsResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListAccountsResponse(const ListAccountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountsResponse)
    Q_DISABLE_COPY(ListAccountsResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
