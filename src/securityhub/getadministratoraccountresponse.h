// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMINISTRATORACCOUNTRESPONSE_H
#define QTAWS_GETADMINISTRATORACCOUNTRESPONSE_H

#include "securityhubresponse.h"
#include "getadministratoraccountrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetAdministratorAccountResponsePrivate;

class QTAWSSECURITYHUB_EXPORT GetAdministratorAccountResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    GetAdministratorAccountResponse(const GetAdministratorAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAdministratorAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAdministratorAccountResponse)
    Q_DISABLE_COPY(GetAdministratorAccountResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
