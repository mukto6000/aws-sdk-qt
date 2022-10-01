// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINVITATIONREQUEST_P_H
#define QTAWS_ACCEPTINVITATIONREQUEST_P_H

#include "securityhubrequest_p.h"
#include "acceptinvitationrequest.h"

namespace QtAws {
namespace SecurityHub {

class AcceptInvitationRequest;

class AcceptInvitationRequestPrivate : public SecurityHubRequestPrivate {

public:
    AcceptInvitationRequestPrivate(const SecurityHubRequest::Action action,
                                   AcceptInvitationRequest * const q);
    AcceptInvitationRequestPrivate(const AcceptInvitationRequestPrivate &other,
                                   AcceptInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptInvitationRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
