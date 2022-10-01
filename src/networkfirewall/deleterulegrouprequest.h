// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEGROUPREQUEST_H
#define QTAWS_DELETERULEGROUPREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DeleteRuleGroupRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT DeleteRuleGroupRequest : public NetworkFirewallRequest {

public:
    DeleteRuleGroupRequest(const DeleteRuleGroupRequest &other);
    DeleteRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRuleGroupRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
