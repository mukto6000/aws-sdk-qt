// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRATEBASEDRULESREQUEST_P_H
#define QTAWS_LISTRATEBASEDRULESREQUEST_P_H

#include "wafrequest_p.h"
#include "listratebasedrulesrequest.h"

namespace QtAws {
namespace Waf {

class ListRateBasedRulesRequest;

class ListRateBasedRulesRequestPrivate : public WafRequestPrivate {

public:
    ListRateBasedRulesRequestPrivate(const WafRequest::Action action,
                                   ListRateBasedRulesRequest * const q);
    ListRateBasedRulesRequestPrivate(const ListRateBasedRulesRequestPrivate &other,
                                   ListRateBasedRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRateBasedRulesRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
