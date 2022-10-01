// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "disassociatefromadministratoraccountrequest.h"

namespace QtAws {
namespace GuardDuty {

class DisassociateFromAdministratorAccountRequest;

class DisassociateFromAdministratorAccountRequestPrivate : public GuardDutyRequestPrivate {

public:
    DisassociateFromAdministratorAccountRequestPrivate(const GuardDutyRequest::Action action,
                                   DisassociateFromAdministratorAccountRequest * const q);
    DisassociateFromAdministratorAccountRequestPrivate(const DisassociateFromAdministratorAccountRequestPrivate &other,
                                   DisassociateFromAdministratorAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateFromAdministratorAccountRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
