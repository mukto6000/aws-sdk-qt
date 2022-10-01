// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXPATTERNSETREQUEST_P_H
#define QTAWS_GETREGEXPATTERNSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getregexpatternsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetRegexPatternSetRequest;

class GetRegexPatternSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetRegexPatternSetRequestPrivate(const WafRegionalRequest::Action action,
                                   GetRegexPatternSetRequest * const q);
    GetRegexPatternSetRequestPrivate(const GetRegexPatternSetRequestPrivate &other,
                                   GetRegexPatternSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegexPatternSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
