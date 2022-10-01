// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEMEMBERSREQUEST_P_H
#define QTAWS_INVITEMEMBERSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "invitemembersrequest.h"

namespace QtAws {
namespace SecurityHub {

class InviteMembersRequest;

class InviteMembersRequestPrivate : public SecurityHubRequestPrivate {

public:
    InviteMembersRequestPrivate(const SecurityHubRequest::Action action,
                                   InviteMembersRequest * const q);
    InviteMembersRequestPrivate(const InviteMembersRequestPrivate &other,
                                   InviteMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(InviteMembersRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
