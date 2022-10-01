// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMASTERACCOUNTRESPONSE_H
#define QTAWS_GETMASTERACCOUNTRESPONSE_H

#include "guarddutyresponse.h"
#include "getmasteraccountrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetMasterAccountResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GetMasterAccountResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    GetMasterAccountResponse(const GetMasterAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMasterAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMasterAccountResponse)
    Q_DISABLE_COPY(GetMasterAccountResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
