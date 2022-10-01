// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERSRESPONSE_H
#define QTAWS_GETMEMBERSRESPONSE_H

#include "securityhubresponse.h"
#include "getmembersrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetMembersResponsePrivate;

class QTAWSSECURITYHUB_EXPORT GetMembersResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    GetMembersResponse(const GetMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMembersResponse)
    Q_DISABLE_COPY(GetMembersResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
