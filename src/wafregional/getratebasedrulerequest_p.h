// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDRULEREQUEST_P_H
#define QTAWS_GETRATEBASEDRULEREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getratebasedrulerequest.h"

namespace QtAws {
namespace WafRegional {

class GetRateBasedRuleRequest;

class GetRateBasedRuleRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetRateBasedRuleRequestPrivate(const WafRegionalRequest::Action action,
                                   GetRateBasedRuleRequest * const q);
    GetRateBasedRuleRequestPrivate(const GetRateBasedRuleRequestPrivate &other,
                                   GetRateBasedRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRateBasedRuleRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
