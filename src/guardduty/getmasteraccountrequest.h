// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMASTERACCOUNTREQUEST_H
#define QTAWS_GETMASTERACCOUNTREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetMasterAccountRequestPrivate;

class QTAWSGUARDDUTY_EXPORT GetMasterAccountRequest : public GuardDutyRequest {

public:
    GetMasterAccountRequest(const GetMasterAccountRequest &other);
    GetMasterAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMasterAccountRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
