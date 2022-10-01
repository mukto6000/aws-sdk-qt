// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEMEMBERSREQUEST_H
#define QTAWS_INVITEMEMBERSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class InviteMembersRequestPrivate;

class QTAWSGUARDDUTY_EXPORT InviteMembersRequest : public GuardDutyRequest {

public:
    InviteMembersRequest(const InviteMembersRequest &other);
    InviteMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InviteMembersRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
