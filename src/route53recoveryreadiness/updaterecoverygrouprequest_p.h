// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOVERYGROUPREQUEST_P_H
#define QTAWS_UPDATERECOVERYGROUPREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "updaterecoverygrouprequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateRecoveryGroupRequest;

class UpdateRecoveryGroupRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    UpdateRecoveryGroupRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   UpdateRecoveryGroupRequest * const q);
    UpdateRecoveryGroupRequestPrivate(const UpdateRecoveryGroupRequestPrivate &other,
                                   UpdateRecoveryGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRecoveryGroupRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
