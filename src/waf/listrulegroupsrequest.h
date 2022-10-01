// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSREQUEST_H
#define QTAWS_LISTRULEGROUPSREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class ListRuleGroupsRequestPrivate;

class QTAWSWAF_EXPORT ListRuleGroupsRequest : public WafRequest {

public:
    ListRuleGroupsRequest(const ListRuleGroupsRequest &other);
    ListRuleGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRuleGroupsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
