// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXPATTERNSETRESPONSE_P_H
#define QTAWS_UPDATEREGEXPATTERNSETRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class UpdateRegexPatternSetResponse;

class UpdateRegexPatternSetResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit UpdateRegexPatternSetResponsePrivate(UpdateRegexPatternSetResponse * const q);

    void parseUpdateRegexPatternSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRegexPatternSetResponse)
    Q_DISABLE_COPY(UpdateRegexPatternSetResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
