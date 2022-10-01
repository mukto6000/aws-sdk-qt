// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEGROUPREQUEST_P_H
#define QTAWS_DELETERULEGROUPREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "deleterulegrouprequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DeleteRuleGroupRequest;

class DeleteRuleGroupRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    DeleteRuleGroupRequestPrivate(const NetworkFirewallRequest::Action action,
                                   DeleteRuleGroupRequest * const q);
    DeleteRuleGroupRequestPrivate(const DeleteRuleGroupRequestPrivate &other,
                                   DeleteRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRuleGroupRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
