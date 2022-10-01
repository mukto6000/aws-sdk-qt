// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXMATCHSETSRESPONSE_P_H
#define QTAWS_LISTREGEXMATCHSETSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListRegexMatchSetsResponse;

class ListRegexMatchSetsResponsePrivate : public WafResponsePrivate {

public:

    explicit ListRegexMatchSetsResponsePrivate(ListRegexMatchSetsResponse * const q);

    void parseListRegexMatchSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRegexMatchSetsResponse)
    Q_DISABLE_COPY(ListRegexMatchSetsResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
