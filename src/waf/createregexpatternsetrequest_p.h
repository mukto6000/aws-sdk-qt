// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXPATTERNSETREQUEST_P_H
#define QTAWS_CREATEREGEXPATTERNSETREQUEST_P_H

#include "wafrequest_p.h"
#include "createregexpatternsetrequest.h"

namespace QtAws {
namespace Waf {

class CreateRegexPatternSetRequest;

class CreateRegexPatternSetRequestPrivate : public WafRequestPrivate {

public:
    CreateRegexPatternSetRequestPrivate(const WafRequest::Action action,
                                   CreateRegexPatternSetRequest * const q);
    CreateRegexPatternSetRequestPrivate(const CreateRegexPatternSetRequestPrivate &other,
                                   CreateRegexPatternSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRegexPatternSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
