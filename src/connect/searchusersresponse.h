// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHUSERSRESPONSE_H
#define QTAWS_SEARCHUSERSRESPONSE_H

#include "connectresponse.h"
#include "searchusersrequest.h"

namespace QtAws {
namespace Connect {

class SearchUsersResponsePrivate;

class QTAWSCONNECT_EXPORT SearchUsersResponse : public ConnectResponse {
    Q_OBJECT

public:
    SearchUsersResponse(const SearchUsersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchUsersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchUsersResponse)
    Q_DISABLE_COPY(SearchUsersResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
